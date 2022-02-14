
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int evt_class; int locale; scalar_t__ reserved; } ;
union mfi_evt {int word; TYPE_1__ members; } ;
typedef scalar_t__ uint32_t ;
struct mfi_softc {int mfi_boot_seq_num; int mfi_io_lock; } ;
struct mfi_evt_log_state {scalar_t__ newest_seq_num; int shutdown_seq_num; int boot_seq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mfi_evt_log_state*,int ) ;
 int FUNC_1 (struct mfi_softc*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mfi_softc*,struct mfi_evt_log_state**) ;
 int FUNC_3 (struct mfi_softc*,int ,scalar_t__) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(struct mfi_softc *VAR_4, uint32_t VAR_5)
{
 struct mfi_evt_log_state *VAR_6 = ((void*)0);
 union mfi_evt VAR_7;
 int VAR_8 = 0;
 uint32_t VAR_9;

 FUNC_4(&VAR_4->mfi_io_lock, VAR_0);

 VAR_7.members.reserved = 0;
 VAR_7.members.locale = VAR_3;
 VAR_7.members.evt_class = VAR_2;

 if (VAR_5 == 0) {
  if ((VAR_8 = FUNC_2(VAR_4, &VAR_6)) != 0)
   goto out;
  VAR_4->mfi_boot_seq_num = VAR_6->boot_seq_num;





  if ((VAR_8 = FUNC_3(VAR_4, VAR_6->shutdown_seq_num,
      VAR_6->newest_seq_num)) != 0)
   goto out;
  VAR_9 = VAR_6->newest_seq_num;
 } else
  VAR_9 = VAR_5;
 VAR_8 = FUNC_1(VAR_4, VAR_9, VAR_7.word);
out:
 FUNC_0(VAR_6, VAR_1);

 return (VAR_8);
}
