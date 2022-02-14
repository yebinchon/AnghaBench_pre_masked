
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ ch_subchan_cnt; int ch_stflags; scalar_t__ ch_refs; scalar_t__ ch_poll_intvl; int ch_txbr; int ch_rxbr; int ch_orphan_lock; int ch_subchan_lock; int ch_monprm; int ch_monprm_dma; int ch_id; int * ch_orphan_xact; int ch_subchans; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vmbus_channel*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct vmbus_channel *VAR_5)
{

 FUNC_0(FUNC_1(&VAR_5->ch_subchans) && VAR_5->ch_subchan_cnt == 0,
     ("still owns sub-channels"));
 FUNC_0((VAR_5->ch_stflags &
     (VAR_4 |
      VAR_2 |
      VAR_3 |
      VAR_1)) == 0, ("free busy channel"));
 FUNC_0(VAR_5->ch_orphan_xact == ((void*)0),
     ("still has orphan xact installed"));
 FUNC_0(VAR_5->ch_refs == 0, ("chan%u: invalid refcnt %d",
     VAR_5->ch_id, VAR_5->ch_refs));
 FUNC_0(VAR_5->ch_poll_intvl == 0, ("chan%u: polling is activated",
     VAR_5->ch_id));

 FUNC_3(&VAR_5->ch_monprm_dma, VAR_5->ch_monprm);
 FUNC_4(&VAR_5->ch_subchan_lock);
 FUNC_5(&VAR_5->ch_orphan_lock);
 FUNC_6(&VAR_5->ch_rxbr);
 FUNC_7(&VAR_5->ch_txbr);
 FUNC_2(VAR_5, VAR_0);
}
