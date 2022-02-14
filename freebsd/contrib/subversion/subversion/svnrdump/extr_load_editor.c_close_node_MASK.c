
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int value; } ;
typedef TYPE_4__ svn_prop_t ;
typedef int svn_error_t ;
struct svn_delta_editor_t {int (* close_file ) (scalar_t__,int *,int *) ;int (* change_dir_prop ) (int ,char const*,int ,int *) ;int (* change_file_prop ) (scalar_t__,char const*,int ,int *) ;} ;
struct node_baton {int kind; TYPE_3__* rb; scalar_t__ file_baton; int prop_changes; } ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_8__ {int * pool; TYPE_2__* db; TYPE_1__* pb; } ;
struct TYPE_7__ {int baton; } ;
struct TYPE_6__ {struct svn_delta_editor_t* commit_editor; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,char const*,int ,int *) ;
 int FUNC_6 (int ,char const*,int ,int *) ;
 int FUNC_7 (scalar_t__,int *,int *) ;



__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_1)
{
  struct node_baton *VAR_2 = VAR_1;
  const struct svn_delta_editor_t *VAR_3 = VAR_2->rb->pb->commit_editor;
  apr_pool_t *VAR_4 = VAR_2->rb->pool;
  apr_hash_index_t *VAR_5;

  for (VAR_5 = FUNC_1(VAR_4, VAR_2->prop_changes);
       VAR_5; VAR_5 = FUNC_2(VAR_5))
    {
      const char *VAR_6 = FUNC_3(VAR_5);
      svn_prop_t *VAR_7 = FUNC_4(VAR_5);

      switch (VAR_2->kind)
        {
        case 128:
          FUNC_0(VAR_3->change_file_prop(VAR_2->file_baton,
                                                  VAR_6, VAR_7->value, VAR_4));
          break;
        case 129:
          FUNC_0(VAR_3->change_dir_prop(VAR_2->rb->db->baton,
                                                 VAR_6, VAR_7->value, VAR_4));
          break;
        default:
          break;
        }
    }



  if ((VAR_2->kind == 128) && (VAR_2->file_baton))
    {
      FUNC_0(VAR_3->close_file(VAR_2->file_baton, ((void*)0), VAR_2->rb->pool));
    }



  return VAR_0;
}
