
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_prop_kind_t ;
typedef int svn_error_t ;
struct revision_baton {TYPE_2__* pb; TYPE_1__* db; int * pool; } ;
struct node_baton {char const* copyfrom_path; scalar_t__ kind; char* path; scalar_t__ action; struct revision_baton* rb; int is_added; int copyfrom_rev; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_4__ {int aux_session; } ;
struct TYPE_3__ {char const* copyfrom_path; int copyfrom_rev; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (struct node_baton*,char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int ,int *,int *,int **,char const*,int ,int ,int *) ;
 int FUNC_8 (int ,char const*,int ,int *,int *,int **,int *) ;
 int FUNC_9 (char*,int *) ;
 char* FUNC_10 (char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_7)
{
  struct node_baton *VAR_8 = VAR_7;
  struct revision_baton *VAR_9 = VAR_8->rb;
  apr_pool_t *VAR_10 = VAR_8->rb->pool;
  apr_hash_index_t *VAR_11;
  apr_hash_t *VAR_12;
  const char *VAR_13;
  svn_revnum_t VAR_14;


  if (FUNC_0(VAR_8->copyfrom_path, VAR_8->copyfrom_rev))
    {
      VAR_13 = VAR_8->copyfrom_path;
      VAR_14 = VAR_8->copyfrom_rev;
    }
  else if (!VAR_8->is_added
           && FUNC_0(VAR_9->db->copyfrom_path, VAR_9->db->copyfrom_rev))
    {


      VAR_13 = (VAR_8->kind == VAR_4)
                    ? VAR_9->db->copyfrom_path
                    : FUNC_10(VAR_9->db->copyfrom_path,
                                       FUNC_9(VAR_8->path, ((void*)0)),
                                       VAR_9->pool);
      VAR_14 = VAR_9->db->copyfrom_rev;
    }
  else
    {


      VAR_13 = VAR_8->path;
      VAR_14 = VAR_0;
    }

  if ((VAR_8->action == VAR_2
            || VAR_8->action == VAR_3)
      && ! FUNC_0(VAR_13, VAR_14))

    return VAR_1;

  if (VAR_8->kind == VAR_5)
    {
      FUNC_1(FUNC_8(VAR_8->rb->pb->aux_session,
                              VAR_13, VAR_14, ((void*)0), ((void*)0), &VAR_12, VAR_10));
    }
  else
    {
      FUNC_1(FUNC_7(VAR_8->rb->pb->aux_session, ((void*)0), ((void*)0), &VAR_12,
                              VAR_13, VAR_14, 0, VAR_10));
    }

  for (VAR_11 = FUNC_2(VAR_10, VAR_12); VAR_11; VAR_11 = FUNC_3(VAR_11))
    {
      const char *VAR_15 = FUNC_4(VAR_11);
      svn_prop_kind_t VAR_16 = FUNC_6(VAR_15);

      if (VAR_16 == VAR_6)
        FUNC_1(FUNC_5(VAR_8, VAR_15, ((void*)0)));
    }

  return VAR_1;
}
