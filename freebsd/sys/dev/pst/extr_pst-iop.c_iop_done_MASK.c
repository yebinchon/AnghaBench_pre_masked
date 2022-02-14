
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct iop_softc {int dummy; } ;
struct iop_request {int mfa; struct i2o_single_reply* reply; } ;
struct i2o_single_reply {scalar_t__ transaction_context; } ;


 int FUNC_0 (struct iop_request*) ;

__attribute__((used)) static void
FUNC_1(struct iop_softc *VAR_0, u_int32_t VAR_1, struct i2o_single_reply *VAR_2)
{
    struct iop_request *VAR_3 =
        (struct iop_request *)VAR_2->transaction_context;

    VAR_3->reply = VAR_2;
    VAR_3->mfa = VAR_1;
    FUNC_0(VAR_3);
}
