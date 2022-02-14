
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outfd; } ;
typedef TYPE_1__ terminal_handle_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (char const**,char const*,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_1, terminal_handle_t *VAR_2,
              apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;
  const char *VAR_5;

  VAR_4 = FUNC_3(&VAR_5, VAR_1, VAR_3);
  if (VAR_4)
    {
      FUNC_5(VAR_4);
      VAR_5 = FUNC_4(VAR_1, VAR_3);
    }
  FUNC_0(FUNC_8(VAR_2->outfd, VAR_5,
                                 FUNC_2(VAR_5), ((void*)0), VAR_3));

  return FUNC_6(FUNC_7(VAR_2->outfd, VAR_3));
}
