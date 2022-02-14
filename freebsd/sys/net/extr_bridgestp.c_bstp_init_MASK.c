
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_running; int bs_bstpcallout; } ;


 int FUNC_0 (struct bstp_state*) ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (struct bstp_state*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,struct bstp_state*) ;
 int VAR_1 ;

void
FUNC_4(struct bstp_state *VAR_2)
{
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->bs_bstpcallout, VAR_1, VAR_0, VAR_2);
 VAR_2->bs_running = 1;
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
