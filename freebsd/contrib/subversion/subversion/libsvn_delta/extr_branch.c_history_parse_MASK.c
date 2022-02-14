
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int parents; } ;
typedef TYPE_2__ svn_branch__history_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*,int*,...) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,TYPE_1__**,char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_branch__history_t **VAR_1,
              svn_stream_t *VAR_2,
              apr_pool_t *VAR_3,
              apr_pool_t *VAR_4)
{
  svn_branch__history_t *VAR_5
    = FUNC_4(VAR_3);
  svn_stringbuf_t *VAR_6;
  svn_boolean_t VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;


  FUNC_0(FUNC_7(VAR_2, &VAR_6, "\n", &VAR_7, VAR_4));
  FUNC_1(!VAR_7);

  VAR_8 = FUNC_3(VAR_6->data, "history: parents %d",
             &VAR_9);
  FUNC_1(VAR_8 == 1);

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
      svn_revnum_t VAR_11;
      char VAR_12[100];

      FUNC_0(FUNC_7(VAR_2, &VAR_6, "\n", &VAR_7, VAR_4));
      FUNC_1(!VAR_7);

      VAR_8 = FUNC_3(VAR_6->data, "parent: r%ld.%99s",
                 &VAR_11, VAR_12);
      FUNC_1(VAR_8 == 2);

      FUNC_6(VAR_5->parents,
                    FUNC_2(VAR_3, VAR_12),
                    FUNC_5(VAR_11, VAR_12, VAR_3));
    }

  if (VAR_1)
    *VAR_1 = VAR_5;
  return VAR_0;
}
