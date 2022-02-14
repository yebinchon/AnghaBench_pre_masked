
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* svn_revnum_t ;
typedef int svn_error_t ;
struct editor_baton {int fetch_kind_baton; int (* fetch_kind_func ) (int *,int ,int ,void*,int *) ;int edit_pool; int changes; } ;
struct change_node {void* copyfrom_rev; int copyfrom_path; int kind; void* deleting; int action; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 struct change_node* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int ,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_3,
        const char *VAR_4,
        svn_revnum_t VAR_5,
        const char *VAR_6,
        svn_revnum_t VAR_7,
        apr_pool_t *VAR_8)
{
  struct editor_baton *VAR_9 = VAR_3;
  struct change_node *VAR_10;



  VAR_10 = FUNC_2(VAR_4, VAR_9->changes);
  VAR_10->action = VAR_1;

  VAR_10->deleting = VAR_5;

  VAR_10 = FUNC_2(VAR_6, VAR_9->changes);
  VAR_10->action = VAR_0;

  VAR_10->deleting = VAR_7;
  VAR_10->copyfrom_path = FUNC_1(VAR_9->edit_pool, VAR_4);
  VAR_10->copyfrom_rev = VAR_5;



  FUNC_0(VAR_9->fetch_kind_func(&VAR_10->kind, VAR_9->fetch_kind_baton,
                              VAR_10->copyfrom_path,
                              VAR_10->copyfrom_rev,
                              VAR_8));



  return VAR_2;
}
