
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmbus_softc {int dummy; } ;
struct vmbus_msghc {int dummy; } ;
struct vmbus_channel {int ch_stflags; scalar_t__ ch_bufring_gpadl; int * ch_bufring; int ch_bufring_dma; int ch_id; int * ch_tq; int ch_task; int ch_sysctl_ctx; struct vmbus_softc* ch_vmbus; } ;
struct TYPE_2__ {int chm_type; } ;
struct vmbus_chanmsg_chclose {int chm_chanid; TYPE_1__ chm_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct vmbus_channel*) ;
 int FUNC_5 (struct vmbus_channel*,scalar_t__) ;
 int FUNC_6 (struct vmbus_channel*) ;
 int FUNC_7 (struct vmbus_channel*,char*,int ,...) ;
 struct vmbus_chanmsg_chclose* FUNC_8 (struct vmbus_msghc*) ;
 int FUNC_9 (struct vmbus_msghc*) ;
 struct vmbus_msghc* FUNC_10 (struct vmbus_softc*,int) ;
 int FUNC_11 (struct vmbus_softc*,struct vmbus_msghc*) ;

__attribute__((used)) static int
FUNC_12(struct vmbus_channel *VAR_5)
{
 struct vmbus_softc *VAR_6 = VAR_5->ch_vmbus;
 struct vmbus_msghc *VAR_7;
 struct vmbus_chanmsg_chclose *VAR_8;
 uint32_t VAR_9;
 int VAR_10;






 for (;;) {
  VAR_9 = VAR_5->ch_stflags;
  if (FUNC_0(&VAR_5->ch_stflags, VAR_9,
      VAR_9 & ~VAR_3))
   break;
 }
 if ((VAR_9 & VAR_3) == 0) {

  if (VAR_4) {
   FUNC_7(VAR_5, "chan%u not opened\n",
       VAR_5->ch_id);
  }
  return (0);
 }





 FUNC_2(&VAR_5->ch_sysctl_ctx);




 FUNC_6(VAR_5);







 FUNC_4(VAR_5);
 FUNC_3(VAR_5->ch_tq, &VAR_5->ch_task);
 VAR_5->ch_tq = ((void*)0);




 VAR_7 = FUNC_10(VAR_6, sizeof(*VAR_8));
 if (VAR_7 == ((void*)0)) {
  FUNC_7(VAR_5,
      "can not get msg hypercall for chclose(chan%u)\n",
      VAR_5->ch_id);
  VAR_10 = VAR_1;
  goto disconnect;
 }

 VAR_8 = FUNC_8(VAR_7);
 VAR_8->chm_hdr.chm_type = VAR_2;
 VAR_8->chm_chanid = VAR_5->ch_id;

 VAR_10 = FUNC_9(VAR_7);
 FUNC_11(VAR_6, VAR_7);

 if (VAR_10) {
  FUNC_7(VAR_5,
      "chclose(chan%u) msg hypercall exec failed: %d\n",
      VAR_5->ch_id, VAR_10);
  goto disconnect;
 }

 if (VAR_4)
  FUNC_7(VAR_5, "chan%u closed\n", VAR_5->ch_id);

disconnect:



 if (VAR_5->ch_bufring_gpadl != 0) {
  int VAR_11;

  VAR_11 = FUNC_5(VAR_5,
      VAR_5->ch_bufring_gpadl);
  if (VAR_11) {






   FUNC_7(VAR_5, "chan%u bufring GPADL "
       "is still connected after close\n", VAR_5->ch_id);
   VAR_5->ch_bufring = ((void*)0);




   VAR_10 = VAR_0;
  }
  VAR_5->ch_bufring_gpadl = 0;
 }




 if (VAR_5->ch_bufring != ((void*)0)) {
  FUNC_1(&VAR_5->ch_bufring_dma, VAR_5->ch_bufring);
  VAR_5->ch_bufring = ((void*)0);
 }
 return (VAR_10);
}
