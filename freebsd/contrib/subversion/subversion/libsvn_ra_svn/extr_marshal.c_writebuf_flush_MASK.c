
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int write_buf; scalar_t__ write_pos; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,int ,scalar_t__) ;

__attribute__((used)) static svn_error_t *FUNC_2(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2)
{
  apr_size_t VAR_3 = VAR_1->write_pos;


  VAR_1->write_pos = 0;
  FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_1->write_buf, VAR_3));
  return VAR_0;
}
