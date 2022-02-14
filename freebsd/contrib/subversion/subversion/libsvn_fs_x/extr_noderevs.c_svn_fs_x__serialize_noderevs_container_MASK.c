
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_6__ {int len; void* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_7__ {TYPE_5__* noderevs; TYPE_5__* reps; TYPE_5__* ids; int paths; } ;
typedef TYPE_2__ svn_fs_x__noderevs_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int elt_size; int nelts; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,TYPE_5__**) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,int,int,int *) ;

svn_error_t *
FUNC_4(void **VAR_1,
                                       apr_size_t *VAR_2,
                                       void *VAR_3,
                                       apr_pool_t *VAR_4)
{
  svn_fs_x__noderevs_t *VAR_5 = VAR_3;
  svn_stringbuf_t *VAR_6;
  apr_size_t VAR_7
    = VAR_5->ids->elt_size * VAR_5->ids->nelts
    + VAR_5->reps->elt_size * VAR_5->reps->nelts
    + VAR_5->noderevs->elt_size * VAR_5->noderevs->nelts
    + 10 * VAR_5->noderevs->elt_size
    + 100;


  svn_temp_serializer__context_t *VAR_8
    = FUNC_3(VAR_5, sizeof(*VAR_5), VAR_7, VAR_4);


  FUNC_1(VAR_8, &VAR_5->paths);
  FUNC_0(VAR_8, &VAR_5->ids);
  FUNC_0(VAR_8, &VAR_5->reps);
  FUNC_0(VAR_8, &VAR_5->noderevs);


  VAR_6 = FUNC_2(VAR_8);

  *VAR_1 = VAR_6->data;
  *VAR_2 = VAR_6->len;

  return VAR_0;
}
