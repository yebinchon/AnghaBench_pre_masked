
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
struct TYPE_4__ {char const* fs_path; int * pool; int * root; } ;
typedef TYPE_1__ presentation_stream_baton_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static svn_stream_t *
FUNC_8(svn_fs_root_t *VAR_6,
                      const char *VAR_7,
                      apr_pool_t *VAR_8)
{
  svn_stream_t *VAR_9;
  presentation_stream_baton_t *VAR_10;

  VAR_10 = FUNC_0(VAR_8, sizeof(*VAR_10));
  VAR_10->root = VAR_6;
  VAR_10->fs_path = VAR_7;
  VAR_10->pool = VAR_8;

  VAR_9 = FUNC_1(VAR_10, VAR_8);
  FUNC_4(VAR_9, VAR_2, VAR_2);
  FUNC_3(VAR_9, VAR_1);
  FUNC_6(VAR_9, VAR_4);
  FUNC_7(VAR_9, VAR_5);
  FUNC_2(VAR_9, VAR_0);
  FUNC_5(VAR_9, VAR_3);
  return VAR_9;
}
