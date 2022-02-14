
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_6__ {char* src_txn_id; char* src_path; scalar_t__ kind; int dst_noderev_id; } ;
typedef TYPE_2__ copy_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int *) ;

svn_error_t *
FUNC_7(svn_skel_t **VAR_2,
                               const copy_t *VAR_3,
                               apr_pool_t *VAR_4)
{
  svn_skel_t *VAR_5;
  svn_string_t *VAR_6;


  VAR_5 = FUNC_3(VAR_4);


  VAR_6 = FUNC_2(VAR_3->dst_noderev_id, VAR_4);
  FUNC_5(FUNC_4(VAR_6->data, VAR_6->len, VAR_4),
                    VAR_5);


  if ((VAR_3->src_txn_id) && (*VAR_3->src_txn_id))
    FUNC_5(FUNC_6(VAR_3->src_txn_id, VAR_4), VAR_5);
  else
    FUNC_5(FUNC_4(((void*)0), 0, VAR_4), VAR_5);


  if ((VAR_3->src_path) && (*VAR_3->src_path))
    FUNC_5(FUNC_6(VAR_3->src_path, VAR_4), VAR_5);
  else
    FUNC_5(FUNC_4(((void*)0), 0, VAR_4), VAR_5);


  if (VAR_3->kind == VAR_1)
    FUNC_5(FUNC_6("copy", VAR_4), VAR_5);
  else
    FUNC_5(FUNC_6("soft-copy", VAR_4), VAR_5);


  if (! FUNC_0(VAR_5))
    return FUNC_1("copy");
  *VAR_2 = VAR_5;
  return VAR_0;
}
