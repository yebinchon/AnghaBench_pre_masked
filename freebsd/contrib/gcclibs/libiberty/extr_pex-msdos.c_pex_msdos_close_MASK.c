
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {scalar_t__ sysdep; } ;
struct pex_msdos {int ** files; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (struct pex_msdos*,int) ;

__attribute__((used)) static int
FUNC_2 (struct pex_obj *VAR_1, int VAR_2)
{
  struct pex_msdos *VAR_3;
  int VAR_4;

  VAR_3 = (struct pex_msdos *) VAR_1->sysdep;
  VAR_0 = FUNC_1 (VAR_3, VAR_2);
  FUNC_0 (VAR_3->files[VAR_0]);
  VAR_3->files[VAR_0] = ((void*)0);
}
