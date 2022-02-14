
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {struct tee_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
struct tee_node_baton_t {int baton2; int baton1; } ;
struct tee_baton_t {TYPE_3__* p2; TYPE_4__* p1; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {int (* file_added ) (char const*,int const*,int const*,char const*,char const*,int *,int *,int ,TYPE_4__*,int *) ;} ;
struct TYPE_6__ {int (* file_added ) (char const*,int const*,int const*,char const*,char const*,int *,int *,int ,TYPE_3__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,char const*,char const*,int *,int *,int ,TYPE_4__*,int *) ;
 int FUNC_2 (char const*,int const*,int const*,char const*,char const*,int *,int *,int ,TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_1,
               const svn_diff_source_t *VAR_2,
               const svn_diff_source_t *VAR_3,
               const char *VAR_4,
               const char *VAR_5,
                         apr_hash_t *VAR_6,
                         apr_hash_t *VAR_7,
               void *VAR_8,
               const svn_diff_tree_processor_t *VAR_9,
               apr_pool_t *VAR_10)
{
  struct tee_baton_t *VAR_11 = VAR_9->baton;
  struct tee_node_baton_t *VAR_12 = VAR_8;

  FUNC_0(VAR_11->p1->file_added(VAR_1,
                             VAR_2,
                             VAR_3,
                             VAR_4,
                             VAR_5,
                             VAR_6,
                             VAR_7,
                             VAR_12->baton1,
                             VAR_11->p1,
                             VAR_10));

  FUNC_0(VAR_11->p2->file_added(VAR_1,
                             VAR_2,
                             VAR_3,
                             VAR_4,
                             VAR_5,
                             VAR_6,
                             VAR_7,
                             VAR_12->baton2,
                             VAR_11->p2,
                             VAR_10));
  return VAR_0;
}
