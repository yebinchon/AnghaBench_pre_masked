
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_err {int dummy; } ;
struct ct_data {struct rpc_err ct_error; } ;
struct TYPE_3__ {scalar_t__ cl_private; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(CLIENT *VAR_0, struct rpc_err *VAR_1)
{
 struct ct_data *VAR_2;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = (struct ct_data *) VAR_0->cl_private;
 *VAR_1 = VAR_2->ct_error;
}
