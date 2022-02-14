
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int *) ;
 int * FUNC_5 (scalar_t__,int ) ;

svn_error_t *
FUNC_6(FILE *VAR_5)
{

  VAR_4 = 0;
  if (FUNC_3(VAR_5) == VAR_0)
    {
      if (FUNC_2())
        {


          if (FUNC_0(FUNC_2()))
            return FUNC_4(VAR_1, ((void*)0), ((void*)0));
          else
            return FUNC_5(FUNC_2(), FUNC_1("Write error"));
        }
      else
        return FUNC_4(VAR_2, ((void*)0), ((void*)0));
    }

  return VAR_3;
}
