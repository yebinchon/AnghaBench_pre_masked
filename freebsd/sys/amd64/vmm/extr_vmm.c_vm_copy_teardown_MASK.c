
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_copyinfo {int * cookie; } ;
struct vm {int dummy; } ;


 int FUNC_0 (struct vm_copyinfo*,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct vm *VAR_0, int VAR_1, struct vm_copyinfo *VAR_2,
    int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].cookie != ((void*)0))
   FUNC_1(VAR_2[VAR_4].cookie);
 }
 FUNC_0(VAR_2, VAR_3 * sizeof(struct vm_copyinfo));
}
