
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct ev2_file_baton {TYPE_1__* eb; int * delta_base; int base_revision; int path; } ;
struct ev2_dir_baton {int base_revision; TYPE_1__* eb; } ;
struct change_node {int copyfrom_rev; void* copyfrom_path; int kind; int action; } ;
typedef int apr_pool_t ;
struct TYPE_3__ {int fetch_base_baton; int (* fetch_base_func ) (int **,int ,void*,int ,int *,int *) ;int * edit_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct ev2_file_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 struct change_node* FUNC_3 (TYPE_1__*,char const*) ;
 void* FUNC_4 (TYPE_1__*,char const*,int *) ;
 int FUNC_5 (int **,int ,void*,int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_3,
             void *VAR_4,
             const char *VAR_5,
             svn_revnum_t VAR_6,
             apr_pool_t *VAR_7,
             void **VAR_8)
{

  apr_pool_t *VAR_9 = VAR_7;
  struct ev2_file_baton *VAR_10 = FUNC_1(VAR_7, sizeof(*VAR_10));
  struct ev2_dir_baton *VAR_11 = VAR_4;
  const char *VAR_12 = FUNC_4(VAR_11->eb, VAR_3, VAR_9);
  struct change_node *VAR_13 = FUNC_3(VAR_11->eb, VAR_12);


  VAR_13->action = VAR_0;
  VAR_13->kind = VAR_2;

  VAR_10->eb = VAR_11->eb;
  VAR_10->path = FUNC_2(VAR_7, VAR_12);
  VAR_10->base_revision = VAR_11->base_revision;
  *VAR_8 = VAR_10;

  if (!VAR_5)
    {

      VAR_10->delta_base = ((void*)0);
    }
  else
    {


      VAR_13->copyfrom_path = FUNC_4(VAR_10->eb, VAR_5,
                                                   VAR_10->eb->edit_pool);
      VAR_13->copyfrom_rev = VAR_6;

      FUNC_0(VAR_10->eb->fetch_base_func(&VAR_10->delta_base,
                                      VAR_10->eb->fetch_base_baton,
                                      VAR_13->copyfrom_path,
                                      VAR_13->copyfrom_rev,
                                      VAR_7, VAR_9));
    }

  return VAR_1;
}
