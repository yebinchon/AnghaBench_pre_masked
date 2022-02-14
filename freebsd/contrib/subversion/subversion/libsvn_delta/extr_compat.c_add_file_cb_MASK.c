
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
struct change_node {char const* contents_abspath; int checksum; int contents_changed; int props; int deleting; int kind; int action; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct change_node* FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,TYPE_1__**,int *,scalar_t__,int ,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *) ;
 int FUNC_6 (int **,char const**,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_6,
            const char *VAR_7,
            const svn_checksum_t *VAR_8,
            svn_stream_t *VAR_9,
            apr_hash_t *VAR_10,
            svn_revnum_t VAR_11,
            apr_pool_t *VAR_12)
{
  struct editor_baton *VAR_13 = VAR_6;
  const char *VAR_14;
  svn_stream_t *VAR_15;
  svn_checksum_t *VAR_16;
  struct change_node *VAR_17 = FUNC_1(VAR_7, VAR_13->changes);


  if (!(VAR_8 && VAR_8->kind == VAR_3))
    VAR_9 = FUNC_4(VAR_9, &VAR_16, ((void*)0),
                                       VAR_3, VAR_2, VAR_12);
  else
    VAR_16 = (svn_checksum_t *)VAR_8;


  FUNC_0(FUNC_6(&VAR_15, &VAR_14, ((void*)0),
                                 VAR_4,
                                 VAR_13->edit_pool, VAR_12));
  FUNC_0(FUNC_5(VAR_9, VAR_15, ((void*)0), ((void*)0), VAR_12));

  VAR_17->action = VAR_0;
  VAR_17->kind = VAR_5;
  VAR_17->deleting = VAR_11;
  VAR_17->props = FUNC_3(VAR_10, VAR_13->edit_pool);
  VAR_17->contents_changed = VAR_2;
  VAR_17->contents_abspath = VAR_14;
  VAR_17->checksum = FUNC_2(VAR_16, VAR_13->edit_pool);

  return VAR_1;
}
