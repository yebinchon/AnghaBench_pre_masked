
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_9__ {TYPE_1__* b; int local_relpath; void* skip; } ;
typedef TYPE_2__ added_node_baton_t ;
struct TYPE_10__ {int abspath; } ;
struct TYPE_8__ {int db; TYPE_3__* wcroot; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,int ,int *,int *) ;
 char* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,scalar_t__,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(added_node_baton_t *VAR_7,
                                   svn_node_kind_t VAR_8,
                                   apr_hash_t *VAR_9,
                                   apr_hash_t *VAR_10,
                                   apr_pool_t *VAR_11)
{
  const char *VAR_12;
  svn_node_kind_t VAR_13;

  FUNC_0(FUNC_4(VAR_7, VAR_11));
  if (VAR_7->skip)
    return VAR_0;

  if (VAR_8 != VAR_3)
    {
      FUNC_0(FUNC_1(VAR_7, VAR_8, VAR_2,
                                                VAR_4,
                                                VAR_11, VAR_11));
      VAR_7->skip = VAR_1;
      return VAR_0;
    }


  VAR_12 = FUNC_2(VAR_7->b->wcroot->abspath, VAR_7->local_relpath,
                                  VAR_11);
  FUNC_0(FUNC_3(VAR_12, &VAR_13, VAR_11));
  if (VAR_13 != VAR_2)
    {
      FUNC_0(FUNC_5(VAR_7, VAR_2,
                                                            VAR_13,
                                                            VAR_11));
      VAR_7->skip = VAR_1;
      return VAR_0;
    }



  FUNC_0(FUNC_6(VAR_7->b->wcroot, VAR_7->local_relpath, VAR_7->b->db,
                               VAR_6, VAR_2,
                               VAR_5,
                               VAR_5,
                               ((void*)0), ((void*)0), VAR_11));
  return VAR_0;
}
