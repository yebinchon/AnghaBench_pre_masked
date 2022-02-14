
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segctor_req {int seq_accepted; scalar_t__ sb_err; scalar_t__ sc_err; } ;
struct nilfs_sc_info {scalar_t__ sc_timer; int sc_state_lock; int sc_seq_request; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nilfs_sc_info *VAR_0,
     struct nilfs_segctor_req *VAR_1)
{
 VAR_1->sc_err = VAR_1->sb_err = 0;
 FUNC_1(&VAR_0->sc_state_lock);
 VAR_1->seq_accepted = VAR_0->sc_seq_request;
 FUNC_2(&VAR_0->sc_state_lock);

 if (VAR_0->sc_timer)
  FUNC_0(VAR_0->sc_timer);
}
