
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct pptseg {scalar_t__ len; int gpa; } ;
struct pptdev {struct pptseg* mmio; } ;


 int VAR_0 ;
 int FUNC_0 (struct pptseg*,int) ;
 int FUNC_1 (struct vm*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct vm *VAR_1, struct pptdev *VAR_2)
{
 int VAR_3;
 struct pptseg *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->mmio[VAR_3];
  if (VAR_4->len == 0)
   continue;
  (void)FUNC_1(VAR_1, VAR_4->gpa, VAR_4->len);
  FUNC_0(VAR_4, sizeof(struct pptseg));
 }
}
