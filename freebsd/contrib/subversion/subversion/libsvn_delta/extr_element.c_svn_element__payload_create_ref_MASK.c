
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {int eid; int branch_id; int rev; } ;
struct TYPE_7__ {TYPE_1__ branch_ref; int kind; int * pool; } ;
typedef TYPE_2__ svn_element__payload_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;

svn_element__payload_t *
FUNC_4(svn_revnum_t VAR_1,
                                const char *VAR_2,
                                int VAR_3,
                                apr_pool_t *VAR_4)
{
  svn_element__payload_t *VAR_5
    = FUNC_0(VAR_4, sizeof(*VAR_5));

  VAR_5->pool = VAR_4;
  VAR_5->kind = VAR_0;
  VAR_5->branch_ref.rev = VAR_1;
  VAR_5->branch_ref.branch_id = FUNC_1(VAR_4, VAR_2);
  VAR_5->branch_ref.eid = VAR_3;
  FUNC_2(FUNC_3(VAR_5));
  return VAR_5;
}
