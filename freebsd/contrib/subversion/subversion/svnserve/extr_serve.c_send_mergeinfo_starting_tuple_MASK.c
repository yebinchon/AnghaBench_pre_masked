
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ starting_tuple_sent; int conn; } ;
typedef TYPE_1__ mergeinfo_receiver_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(mergeinfo_receiver_baton_t *VAR_2,
                              apr_pool_t *VAR_3)
{
  if (VAR_2->starting_tuple_sent)
    return VAR_0;

  FUNC_0(FUNC_1(VAR_2->conn, VAR_3,
                                  "w((!", "success"));
  VAR_2->starting_tuple_sent = VAR_1;

  return VAR_0;
}
