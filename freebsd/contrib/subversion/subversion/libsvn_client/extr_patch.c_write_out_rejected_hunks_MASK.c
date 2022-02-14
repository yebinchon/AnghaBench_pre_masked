
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {int reject_stream; int local_abspath; scalar_t__ had_prop_rejects; scalar_t__ had_rejects; } ;
typedef TYPE_2__ patch_target_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int *) ;
 char const* FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (int **,int *,char const*,int ,char*,int ,int *,int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ,int ,int *,int *,int *) ;
 int FUNC_8 (int *,int ,int *) ;
 TYPE_1__* FUNC_9 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(patch_target_t *VAR_3,
                         const char *VAR_4,
                         svn_boolean_t VAR_5,
                         apr_pool_t *VAR_6)
{
  if (! VAR_5 && (VAR_3->had_rejects || VAR_3->had_prop_rejects))
    {

      apr_file_t *VAR_7;
      svn_error_t *VAR_8;

      VAR_8 = FUNC_5(&VAR_7, ((void*)0),
                                       FUNC_3(VAR_3->local_abspath,
                                                          VAR_6),
                                       FUNC_2(
                                         VAR_3->local_abspath,
                                         ((void*)0)),
                                       ".svnpatch.rej",
                                       VAR_2,
                                       VAR_6, VAR_6);
      if (VAR_8 && FUNC_0(VAR_8->apr_err))
        {


          FUNC_4(VAR_8);
          FUNC_1(FUNC_5(&VAR_7, ((void*)0),
                                             VAR_4,
                                             FUNC_2(
                                               VAR_3->local_abspath,
                                               ((void*)0)),
                                             ".svnpatch.rej",
                                             VAR_2,
                                             VAR_6, VAR_6));
        }
      else
        FUNC_1(VAR_8);

      FUNC_1(FUNC_9(VAR_3->reject_stream));


      FUNC_1(FUNC_7(VAR_3->reject_stream,
                                  FUNC_8(VAR_7, VAR_0,
                                                           VAR_6),
                                  ((void*)0), ((void*)0), VAR_6));

    }
  else
    FUNC_1(FUNC_6(VAR_3->reject_stream));

  return VAR_1;
}
