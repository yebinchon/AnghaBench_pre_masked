
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int (* bs_state_cb ) (int ,int ) ;} ;
struct bstp_port {int bp_active; int bp_state; int bp_ifp; struct bstp_state* bp_bs; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct bstp_port *VAR_2 = (struct bstp_port *)VAR_0;
 struct bstp_state *VAR_3 = VAR_2->bp_bs;

 if (VAR_2->bp_active == 1 && VAR_3->bs_state_cb != ((void*)0))
  (*VAR_3->bs_state_cb)(VAR_2->bp_ifp, VAR_2->bp_state);
}
