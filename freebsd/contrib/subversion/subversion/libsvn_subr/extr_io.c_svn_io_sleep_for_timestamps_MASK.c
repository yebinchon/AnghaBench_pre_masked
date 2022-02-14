
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int mtime; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_1__*,char const*,int,int *) ;

void
FUNC_9(const char *VAR_5, apr_pool_t *VAR_6)
{
  apr_time_t VAR_7, VAR_8;
  svn_error_t *VAR_9;
  char *VAR_10;

  VAR_10 = FUNC_6(VAR_4);

  if (VAR_10 && FUNC_1(VAR_10, "yes") == 0)
    return;

  VAR_7 = FUNC_4();


  VAR_8 = FUNC_3(FUNC_5(VAR_7) + 1, VAR_2 / 50);



  if (VAR_5)
    {
      apr_finfo_t VAR_11;

      VAR_9 = FUNC_8(&VAR_11, VAR_5, VAR_1 | VAR_0, VAR_6);

      if (VAR_9)
        {
          FUNC_7(VAR_9);
        }
      else if (VAR_11.mtime % VAR_2)
        {
          VAR_8 = VAR_7 + FUNC_2(10);
        }


      VAR_7 = FUNC_4();
    }

  if (VAR_7 >= VAR_8)
    return;


  if (VAR_8 - VAR_7 < 1000)
    FUNC_0(1000);
  else
    FUNC_0(VAR_8 - VAR_7);
}
