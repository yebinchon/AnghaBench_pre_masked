
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_tcn_unit {int dummy; } ;
struct bstp_state {int dummy; } ;
struct bstp_port {int bp_rcvdtcn; } ;


 int FUNC_0 (struct bstp_port*) ;

__attribute__((used)) static void
FUNC_1(struct bstp_state *VAR_0, struct bstp_port *VAR_1,
    struct bstp_tcn_unit *VAR_2)
{
 VAR_1->bp_rcvdtcn = 1;
 FUNC_0(VAR_1);
}
