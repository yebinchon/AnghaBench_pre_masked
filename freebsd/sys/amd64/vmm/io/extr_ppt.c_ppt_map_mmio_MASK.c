
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct vm {int dummy; } ;
struct pptseg {size_t len; int gpa; } ;
struct pptdev {struct pptseg* mmio; struct vm* vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pptdev* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct vm*,int ,size_t,int ) ;

int
FUNC_2(struct vm *VAR_4, int VAR_5, int VAR_6, int VAR_7,
      vm_paddr_t VAR_8, size_t VAR_9, vm_paddr_t VAR_10)
{
 int VAR_11, VAR_12;
 struct pptseg *VAR_13;
 struct pptdev *VAR_14;

 VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_14 != ((void*)0)) {
  if (VAR_14->vm != VAR_4)
   return (VAR_0);

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   VAR_13 = &VAR_14->mmio[VAR_11];
   if (VAR_13->len == 0) {
    VAR_12 = FUNC_1(VAR_4, VAR_8, VAR_9, VAR_10);
    if (VAR_12 == 0) {
     VAR_13->gpa = VAR_8;
     VAR_13->len = VAR_9;
    }
    return (VAR_12);
   }
  }
  return (VAR_2);
 }
 return (VAR_1);
}
