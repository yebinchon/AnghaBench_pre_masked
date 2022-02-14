
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regset ;
typedef int nto_regset_t ;
typedef int CORE_ADDR ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, unsigned VAR_1,
        int VAR_2, CORE_ADDR VAR_3)
{
  nto_regset_t VAR_4;


  if (VAR_2 == 0)
    {
      FUNC_0 ((char *) &VAR_4, VAR_0,
       FUNC_1 (VAR_1, sizeof (VAR_4)));
      FUNC_3 ((char *) &VAR_4);
    }
  else if (VAR_2 == 2)
    {
      FUNC_0 ((char *) &VAR_4, VAR_0,
       FUNC_1 (VAR_1, sizeof (VAR_4)));
      FUNC_2 ((char *) &VAR_4);
    }
}
