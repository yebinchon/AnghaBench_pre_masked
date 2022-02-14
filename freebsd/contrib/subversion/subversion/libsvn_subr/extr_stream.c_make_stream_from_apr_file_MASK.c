
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * file; } ;
typedef TYPE_1__ svn_stream_t ;
typedef scalar_t__ svn_boolean_t ;
struct baton_apr {scalar_t__ truncate_on_seek; int * pool; int * file; } ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 struct baton_apr* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (struct baton_apr*,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_8 ;

__attribute__((used)) static svn_stream_t *
FUNC_11(apr_file_t *VAR_9,
                          svn_boolean_t VAR_10,
                          svn_boolean_t VAR_11,
                          svn_boolean_t VAR_12,
                          apr_pool_t *VAR_13)
{
  struct baton_apr *VAR_14;
  svn_stream_t *VAR_15;

  if (VAR_9 == ((void*)0))
    return FUNC_2(VAR_13);

  VAR_14 = FUNC_0(VAR_13, sizeof(*VAR_14));
  VAR_14->file = VAR_9;
  VAR_14->pool = VAR_13;
  VAR_14->truncate_on_seek = VAR_12;
  VAR_15 = FUNC_1(VAR_14, VAR_13);
  FUNC_6(VAR_15, VAR_4, VAR_3);
  FUNC_10(VAR_15, VAR_8);

  if (VAR_11)
    {
      FUNC_9(VAR_15, VAR_7);
      FUNC_5(VAR_15, VAR_2);
      FUNC_8(VAR_15, VAR_6);
      FUNC_7(VAR_15, VAR_5);
    }

  FUNC_4(VAR_15, VAR_1);
  VAR_15->file = VAR_9;

  if (! VAR_10)
    FUNC_3(VAR_15, VAR_0);

  return VAR_15;
}
