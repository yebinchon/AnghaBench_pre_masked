
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ repos_node_status; int repos_text_status; } ;
typedef TYPE_1__ svn_client_status_t ;
typedef enum svn_wc_status_kind { ____Placeholder_svn_wc_status_kind } svn_wc_status_kind ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static enum svn_wc_status_kind
FUNC_0(const svn_client_status_t *VAR_1)
{
  if (VAR_1->repos_node_status == VAR_0)
    return VAR_1->repos_text_status;

  return VAR_1->repos_node_status;
}
