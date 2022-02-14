
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ ch_refs; int ch_detach_task; int ch_mgmt_tq; int ch_id; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct vmbus_channel*,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct vmbus_channel *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->ch_refs > 0, ("chan%u: invalid refcnt %d",
     VAR_1->ch_id, VAR_1->ch_refs));
 VAR_2 = FUNC_2(&VAR_1->ch_refs, -1);






 if (VAR_2 == 1) {



  if (VAR_0) {
   FUNC_4(VAR_1, "chan%u detached\n",
       VAR_1->ch_id);
  }
  FUNC_3(VAR_1->ch_mgmt_tq, &VAR_1->ch_detach_task);
 }
}
