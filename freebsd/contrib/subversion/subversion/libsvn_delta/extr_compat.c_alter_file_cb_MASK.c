
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_checksum_t ;
struct editor_baton {int edit_pool; int changes; } ;
struct change_node {char const* contents_abspath; int checksum; int contents_changed; int props; int changing; int kind; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 struct change_node* FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,TYPE_1__**,int *,scalar_t__,int ,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *) ;
 int FUNC_6 (int **,char const**,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_5,
              const char *VAR_6,
              svn_revnum_t VAR_7,
              const svn_checksum_t *VAR_8,
              svn_stream_t *VAR_9,
              apr_hash_t *VAR_10,
              apr_pool_t *VAR_11)
{
  struct editor_baton *VAR_12 = VAR_5;
  svn_stream_t *VAR_13;
  struct change_node *VAR_14 = FUNC_1(VAR_6, VAR_12->changes);





  VAR_14->kind = VAR_4;
  VAR_14->changing = VAR_7;
  if (VAR_10 != ((void*)0))
    VAR_14->props = FUNC_3(VAR_10, VAR_12->edit_pool);

  if (VAR_9)
    {
      const char *VAR_15;
      svn_checksum_t *VAR_16;


      if (VAR_8 && VAR_8->kind == VAR_2)
        VAR_16 = (svn_checksum_t *)VAR_8;
      else
        VAR_9 = FUNC_4(VAR_9, &VAR_16, ((void*)0),
                                           VAR_2, VAR_1,
                                           VAR_11);


      FUNC_0(FUNC_6(&VAR_13, &VAR_15, ((void*)0),
                                     VAR_3,
                                     VAR_12->edit_pool, VAR_11));
      FUNC_0(FUNC_5(VAR_9, VAR_13, ((void*)0), ((void*)0),
                               VAR_11));

      VAR_14->contents_changed = VAR_1;
      VAR_14->contents_abspath = VAR_15;
      VAR_14->checksum = FUNC_2(VAR_16, VAR_12->edit_pool);
    }

  return VAR_0;
}
