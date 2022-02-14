
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int option; int section; int file; } ;
typedef TYPE_1__ svn_cmdline__config_argument_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int,int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_cmdline__config_argument_t *VAR_7,
                       apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9 = VAR_0;






  FUNC_1(FUNC_3(VAR_7->file, VAR_4,
                          ( sizeof((VAR_4)) / sizeof((VAR_4)[0]) ),
                          VAR_8));
  FUNC_1(FUNC_3(VAR_7->section, VAR_6,
                          ( sizeof((VAR_6)) / sizeof((VAR_6)[0]) ),
                          VAR_8));



    {
      int VAR_10;

      for (VAR_10 = 0; VAR_10 < ( sizeof((VAR_3)) / sizeof((VAR_3)[0]) ); VAR_10++)
        {
        if (!FUNC_2(VAR_7->section, VAR_3[VAR_10]))
          VAR_9 = VAR_2;
        }
    }

  if (! VAR_9)
    FUNC_1(FUNC_3(VAR_7->option, VAR_5,
                            ( sizeof((VAR_5)) / sizeof((VAR_5)[0]) ),
                            VAR_8));



  return VAR_1;
}
