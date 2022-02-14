
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ximgact_binmisc_entry_t ;
typedef int imgact_binmisc_entry_t ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2, ximgact_binmisc_entry_t *VAR_3)
{
 imgact_binmisc_entry_t *VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_1);
 if ((VAR_4 = FUNC_0(VAR_2)) == ((void*)0)) {
  FUNC_3(&VAR_1);
  return (VAR_0);
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 FUNC_3(&VAR_1);

 return (VAR_5);
}
