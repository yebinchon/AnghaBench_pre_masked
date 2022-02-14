
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_bstpcallout; int bs_bplist; } ;


 int FUNC_0 (struct bstp_state*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bstp_state*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct bstp_state *VAR_2)
{
 FUNC_1(FUNC_2(&VAR_2->bs_bplist), ("bstp still active"));

 FUNC_5(&VAR_1);
 FUNC_3(VAR_2, VAR_0);
 FUNC_6(&VAR_1);
 FUNC_4(&VAR_2->bs_bstpcallout);
 FUNC_0(VAR_2);
}
