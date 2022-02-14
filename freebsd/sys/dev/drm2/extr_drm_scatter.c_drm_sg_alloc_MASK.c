
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef size_t vm_pindex_t ;
struct drm_sg_mem {int pages; scalar_t__ vaddr; struct drm_sg_mem* busaddr; } ;
struct drm_scatter_gather {scalar_t__ handle; int size; } ;
struct drm_device {struct drm_sg_mem* sg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_device*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_sg_mem*,int ) ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ) ;
 struct drm_sg_mem FUNC_8 (scalar_t__) ;

int FUNC_9(struct drm_device *VAR_7, struct drm_scatter_gather * VAR_8)
{
 struct drm_sg_mem *VAR_9;
 vm_size_t VAR_10;
 vm_pindex_t VAR_11;

 FUNC_0("\n");

 if (!FUNC_3(VAR_7, VAR_0))
  return -VAR_3;

 if (VAR_7->sg)
  return -VAR_3;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_1, VAR_5 | VAR_6);
 if (!VAR_9)
  return -VAR_4;

 FUNC_0("request size=%ld\n", VAR_8->size);

 VAR_10 = FUNC_7(VAR_8->size);
 VAR_9->pages = FUNC_2(VAR_10);
 VAR_9->busaddr = FUNC_6(VAR_9->pages * sizeof(*VAR_9->busaddr),
     VAR_2, VAR_5 | VAR_6);
 if (!VAR_9->busaddr) {
  FUNC_5(VAR_9, VAR_1);
  return -VAR_4;
 }

 VAR_9->vaddr = FUNC_4(VAR_10);
 if (VAR_9->vaddr == 0) {
  FUNC_5(VAR_9->busaddr, VAR_1);
  FUNC_5(VAR_9, VAR_1);
  return -VAR_4;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->pages; VAR_11++) {
  VAR_9->busaddr[VAR_11] =
      FUNC_8(VAR_9->vaddr + FUNC_1(VAR_11));
 }

 VAR_8->handle = VAR_9->vaddr;

 VAR_7->sg = VAR_9;

 FUNC_0("allocated %ju pages @ 0x%08zx, contents=%08lx\n",
     VAR_9->pages, VAR_9->vaddr, *(unsigned long *)VAR_9->vaddr);

 return 0;
}
