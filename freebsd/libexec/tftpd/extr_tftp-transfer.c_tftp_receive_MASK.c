
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct tftphdr {scalar_t__ th_opcode; scalar_t__ th_block; int th_data; } ;
struct tftp_stats {int tstop; scalar_t__ amount; int retries; int blocks; int rollovers; } ;
struct TYPE_2__ {int * o_request; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *,int *) ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_3 (int,char*,int,int *,int ) ;
 scalar_t__ FUNC_4 (int) ;
 size_t VAR_16 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_17 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int) ;

void
FUNC_11(int VAR_18, uint16_t *VAR_19, struct tftp_stats *VAR_20,
    struct tftphdr *VAR_21, size_t VAR_22)
{
 struct tftphdr *VAR_23;
 uint16_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 char VAR_30[VAR_7];

 VAR_20->amount = 0;

 if (VAR_21 != ((void*)0)) {
  VAR_27 = FUNC_10(VAR_21->th_data, VAR_22);
  VAR_20->amount += VAR_27;
  for (VAR_28 = 0; ; VAR_28++) {
   VAR_26 = FUNC_5(VAR_18, *VAR_19);
   if (VAR_26 > 0) {
    if (VAR_28 == VAR_13) {
     FUNC_8(VAR_4,
         "Cannot send ACK packet #%d, "
         "giving up", *VAR_19);
     return;
    }
    FUNC_8(VAR_4,
        "Cannot send ACK packet #%d, trying again",
        *VAR_19);
    continue;
   }

   break;
  }

  if (VAR_22 != VAR_16) {
   FUNC_1(&(VAR_20->tstop), ((void*)0));
   return;
  }
 }

 VAR_23 = (struct tftphdr *)VAR_30;
 do {
  VAR_24 = *VAR_19;
  (*VAR_19)++;
  if (VAR_24 > *VAR_19) {
   if (VAR_14[VAR_8].o_request == ((void*)0)) {





    *VAR_19 = 0;
   } else {
    *VAR_19 = FUNC_0(VAR_14[VAR_8].o_request);
   }

   VAR_20->rollovers++;
  }

  for (VAR_29 = 0; ; VAR_29++) {
   if (VAR_11&VAR_1)
    FUNC_8(VAR_3,
        "Receiving DATA block %d", *VAR_19);

   VAR_25 = FUNC_3(VAR_18, VAR_30,
       VAR_7, ((void*)0), VAR_17);
   if (VAR_25 < 0) {
    if (VAR_29 == VAR_13) {
     FUNC_8(VAR_4,
         "Timeout #%d on DATA block %d, "
         "giving up", VAR_29, *VAR_19);
     return;
    }
    if (VAR_25 == VAR_9) {
     FUNC_8(VAR_6,
         "Timeout #%d on DATA block %d",
         VAR_29, *VAR_19);
     FUNC_5(VAR_18, VAR_24);
     continue;
    }


    if (VAR_11&VAR_1)
     FUNC_8(VAR_3, "Aborting: %s",
         FUNC_4(VAR_25));
    goto abort;
   }
   if (VAR_23->th_opcode == VAR_0) {
    VAR_20->blocks++;

    if (VAR_23->th_block == *VAR_19)
     break;

    FUNC_8(VAR_6,
        "Expected DATA block %d, got block %d",
        *VAR_19, VAR_23->th_block);


    (void) FUNC_7(VAR_18);
    if (VAR_23->th_block == (*VAR_19-1)) {
     FUNC_8(VAR_5, "Trying to sync");
     *VAR_19 = VAR_24;
     VAR_20->retries++;
     goto send_ack;
    }

   } else {
    FUNC_8(VAR_6,
        "Expected DATA block, got %s block",
        FUNC_2(VAR_23->th_opcode));
   }
  }

  if (VAR_25 > 0) {
   VAR_27 = FUNC_10(VAR_23->th_data, VAR_25);
   VAR_20->amount += VAR_27;
   if (VAR_27 <= 0) {
    FUNC_8(VAR_4,
        "write_file returned %d", VAR_27);
    if (VAR_27 < 0)
     FUNC_6(VAR_18, VAR_12 + 100);
    else
     FUNC_6(VAR_18, VAR_2);
    goto abort;
   }
   if (VAR_25 != VAR_16)
    FUNC_9();
  }

send_ack:
  for (VAR_28 = 0; ; VAR_28++) {
   VAR_26 = FUNC_5(VAR_18, *VAR_19);
   if (VAR_26 > 0) {

    if (VAR_28 == VAR_13) {
     FUNC_8(VAR_4,
         "Cannot send ACK packet #%d, "
         "giving up", *VAR_19);
     return;
    }

    FUNC_8(VAR_4,
        "Cannot send ACK packet #%d, trying again",
        *VAR_19);
    continue;
   }

   break;
  }
  FUNC_1(&(VAR_20->tstop), ((void*)0));
 } while (VAR_25 == VAR_16);


 if (VAR_10)
  return;

 for (VAR_28 = 0; ; VAR_28++) {
  VAR_25 = FUNC_3(VAR_18, (char *)VAR_23, VAR_15,
      ((void*)0), VAR_17);
  if (VAR_25 <= 0)
   break;
  if (VAR_25 > 0 &&
      VAR_23->th_opcode == VAR_0 &&
      *VAR_19 == VAR_23->th_block)
   FUNC_5(VAR_18, *VAR_19);
 }

abort:
 return;
}
