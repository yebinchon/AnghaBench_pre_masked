
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gregset ;
typedef int gdb_gregset_t ;
typedef int gdb_fpregset_t ;
typedef int fpregset ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_1, unsigned VAR_2, int VAR_3,
        CORE_ADDR VAR_4)
{
  gdb_gregset_t VAR_5;
  gdb_fpregset_t VAR_6;

  switch (VAR_3)
    {
    case 0:
      if (VAR_2 != sizeof (VAR_5))
 FUNC_3 ("Wrong size gregset in core file.");
      else
 {
   FUNC_0 (&VAR_5, VAR_1, sizeof (VAR_5));
   FUNC_2 (&VAR_5);
 }
      break;

    case 2:
      if (VAR_2 != sizeof (VAR_6))
 FUNC_3 ("Wrong size fpregset in core file.");
      else
 {
   FUNC_0 (&VAR_6, VAR_1, sizeof (VAR_6));
   if (VAR_0 >= 0)
     FUNC_1 (&VAR_6);
 }
      break;

    default:



      break;
    }
}
