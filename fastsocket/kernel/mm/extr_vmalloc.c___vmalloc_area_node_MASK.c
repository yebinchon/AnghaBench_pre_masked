
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {unsigned int size; unsigned int nr_pages; void* addr; struct page** pages; void* caller; int flags; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct page** FUNC_0 (unsigned int,int,int,int ,int,void*) ;
 struct page* FUNC_1 (int) ;
 struct page* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct vm_struct*) ;
 struct page** FUNC_4 (unsigned int,int,int) ;
 scalar_t__ FUNC_5 (struct vm_struct*,int ,struct page***) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void *FUNC_9(struct vm_struct *VAR_6, gfp_t VAR_7,
     pgprot_t VAR_8, int VAR_9, void *VAR_10)
{
 struct page **VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;

 VAR_12 = (VAR_6->size - VAR_3) >> VAR_2;
 VAR_13 = (VAR_12 * sizeof(struct page *));

 VAR_6->nr_pages = VAR_12;

 if (VAR_13 > VAR_3) {
  VAR_11 = FUNC_0(VAR_13, 1, VAR_7 | VAR_5,
    VAR_1, VAR_9, VAR_10);
  VAR_6->flags |= VAR_4;
 } else {
  VAR_11 = FUNC_4(VAR_13,
    (VAR_7 & VAR_0) | VAR_5,
    VAR_9);
 }
 VAR_6->pages = VAR_11;
 VAR_6->caller = VAR_10;
 if (!VAR_6->pages) {
  FUNC_6(VAR_6->addr);
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_6->nr_pages; VAR_14++) {
  struct page *VAR_15;

  if (VAR_9 < 0)
   VAR_15 = FUNC_1(VAR_7);
  else
   VAR_15 = FUNC_2(VAR_9, VAR_7, 0);

  if (FUNC_7(!VAR_15)) {

   VAR_6->nr_pages = VAR_14;
   goto fail;
  }
  VAR_6->pages[VAR_14] = VAR_15;
 }

 if (FUNC_5(VAR_6, VAR_8, &VAR_11))
  goto fail;
 return VAR_6->addr;

fail:
 FUNC_8(VAR_6->addr);
 return ((void*)0);
}
