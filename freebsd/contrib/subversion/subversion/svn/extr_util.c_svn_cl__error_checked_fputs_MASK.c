
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (scalar_t__,int ) ;

svn_error_t *
FUNC_5(const char *VAR_4, FILE* VAR_5)
{




  VAR_3 = 0;

  if (FUNC_2(VAR_4, VAR_5) == VAR_0)
    {
      if (FUNC_1())
        return FUNC_4(FUNC_1(), FUNC_0("Write error"));
      else
        return FUNC_3(VAR_1, ((void*)0), ((void*)0));
    }

  return VAR_2;
}
