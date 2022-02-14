
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct tftphdr {scalar_t__ th_opcode; int th_block; } ;
struct tftp_stats {int tstop; int rollovers; int retries; scalar_t__ amount; int blocks; } ;
struct TYPE_2__ {int * o_request; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,int *) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char*,int,int *,int ) ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int FUNC_5 (int,int,char*,int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,int,...) ;
 int VAR_13 ;

void
FUNC_9(int VAR_14, uint16_t *VAR_15, struct tftp_stats *VAR_16)
{
 struct tftphdr *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 uint16_t VAR_22;
 char VAR_23[VAR_5];
 char VAR_24[VAR_5];

 VAR_17 = (struct tftphdr *)VAR_24;
 *VAR_15 = 1;
 VAR_16->amount = 0;
 do {
  if (VAR_8&VAR_1)
   FUNC_8(VAR_2, "Sending block %d", *VAR_15);

  VAR_18 = FUNC_2(VAR_23, VAR_12);
  if (VAR_18 < 0) {
   FUNC_8(VAR_3, "read_file returned %d", VAR_18);
   FUNC_6(VAR_14, VAR_9 + 100);
   goto abort;
  }

  for (VAR_21 = 0; ; VAR_21++) {
   VAR_19 = FUNC_5(VAR_14, *VAR_15, VAR_23, VAR_18);
   if (VAR_19 > 0) {
    if (VAR_21 == VAR_10) {
     FUNC_8(VAR_3,
         "Cannot send DATA packet #%d, "
         "giving up", *VAR_15);
     return;
    }
    FUNC_8(VAR_3,
        "Cannot send DATA packet #%d, trying again",
        *VAR_15);
    continue;
   }

   VAR_20 = FUNC_3(VAR_14, VAR_24,
       VAR_5, ((void*)0), VAR_13);
   if (VAR_20 < 0) {
    if (VAR_20 == VAR_7) {
     if (VAR_21 == VAR_10) {
      FUNC_8(VAR_3,
          "Timeout #%d send ACK %d "
          "giving up", VAR_21, *VAR_15);
      return;
     }
     FUNC_8(VAR_4,
         "Timeout #%d on ACK %d",
         VAR_21, *VAR_15);
     continue;
    }


    if (VAR_8&VAR_1)
     FUNC_8(VAR_3, "Aborting: %s",
         FUNC_4(VAR_20));
    goto abort;
   }
   if (VAR_17->th_opcode == VAR_0) {
    VAR_16->blocks++;
    if (VAR_17->th_block == *VAR_15) {
     VAR_16->amount += VAR_18;
     break;
    }


    (void) FUNC_7(VAR_14);
    if (VAR_17->th_block == (*VAR_15 - 1)) {
     VAR_16->retries++;
     continue;
    }
   }

  }
  VAR_22 = *VAR_15;
  (*VAR_15)++;
  if (VAR_22 > *VAR_15) {
   if (VAR_11[VAR_6].o_request == ((void*)0)) {





    *VAR_15 = 0;
   } else {
    *VAR_15 = FUNC_0(VAR_11[VAR_6].o_request);
   }

   VAR_16->rollovers++;
  }
  FUNC_1(&(VAR_16->tstop), ((void*)0));
 } while (VAR_18 == VAR_12);
abort:
 return;
}
