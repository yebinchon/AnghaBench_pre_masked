
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svnlook_ctxt_t ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__**,int *,int ,int *) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svnlook_ctxt_t *VAR_2, apr_pool_t *VAR_3)
{
  svn_string_t *VAR_4;

  FUNC_0(FUNC_1(&VAR_4, VAR_2,
                       VAR_1, VAR_3));
  if (VAR_4 && VAR_4->data)
    FUNC_0(FUNC_2(VAR_3, "%s", VAR_4->data));

  FUNC_0(FUNC_2(VAR_3, "\n"));
  return VAR_0;
}
