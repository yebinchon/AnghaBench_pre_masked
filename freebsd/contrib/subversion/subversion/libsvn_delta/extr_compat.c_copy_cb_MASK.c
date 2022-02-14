
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
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 struct change_node* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int ,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2,
        const char *VAR_3,
        svn_revnum_t VAR_4,
        const char *VAR_5,
        svn_revnum_t VAR_6,
        apr_pool_t *VAR_7)
{
  struct editor_baton *VAR_8 = VAR_2;
  struct change_node *VAR_9 = FUNC_2(VAR_5, VAR_8->changes);

  VAR_9->action = VAR_0;

  VAR_9->deleting = VAR_6;
  VAR_9->copyfrom_path = FUNC_1(VAR_8->edit_pool, VAR_3);
  VAR_9->copyfrom_rev = VAR_4;



  FUNC_0(VAR_8->fetch_kind_func(&VAR_9->kind, VAR_8->fetch_kind_baton,
                              VAR_9->copyfrom_path,
                              VAR_9->copyfrom_rev,
                              VAR_7));



  return VAR_1;
}
