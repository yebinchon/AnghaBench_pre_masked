
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
typedef int u_char ;
typedef int tsresol_opt ;
struct option_header {int option_code; int option_length; } ;
struct block_cursor {scalar_t__ data_remaining; } ;
struct TYPE_4__ {int swapped; } ;
typedef TYPE_1__ pcap_t ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 struct option_header* FUNC_1 (TYPE_1__*,struct block_cursor*,char*) ;
 void* FUNC_2 (struct block_cursor*,struct option_header*,char*) ;
 int FUNC_3 (int*,void*,int) ;
 int FUNC_4 (char*,int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(pcap_t *VAR_1, struct block_cursor *VAR_2, u_int *VAR_3,
    uint64_t *VAR_4, int *VAR_5, char *VAR_6)
{
 struct option_header *VAR_7;
 void *VAR_8;
 int VAR_9, VAR_10;
 u_char VAR_11;
 u_int VAR_12;

 VAR_9 = 0;
 VAR_10 = 0;
 while (VAR_2->data_remaining != 0) {



  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_6);
  if (VAR_7 == ((void*)0)) {



   return (-1);
  }




  VAR_8 = FUNC_2(VAR_2, VAR_7,
      VAR_6);
  if (VAR_8 == ((void*)0)) {



   return (-1);
  }

  switch (VAR_7->option_code) {

  case 128:
   if (VAR_7->option_length != 0) {
    FUNC_4(VAR_6, VAR_0,
        "Interface Description Block has opt_endofopt option with length %u != 0",
        VAR_7->option_length);
    return (-1);
   }
   goto done;

  case 129:
   if (VAR_7->option_length != 1) {
    FUNC_4(VAR_6, VAR_0,
        "Interface Description Block has if_tsresol option with length %u != 1",
        VAR_7->option_length);
    return (-1);
   }
   if (VAR_9) {
    FUNC_4(VAR_6, VAR_0,
        "Interface Description Block has more than one if_tsresol option");
    return (-1);
   }
   VAR_9 = 1;
   FUNC_3(&VAR_11, VAR_8, sizeof(VAR_11));
   if (VAR_11 & 0x80) {



    *VAR_5 = 1;
    *VAR_3 = 1 << (VAR_11 & 0x7F);
   } else {



    *VAR_5 = 0;
    *VAR_3 = 1;
    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
     *VAR_3 *= 10;
   }
   if (*VAR_3 == 0) {



    if (VAR_11 & 0x80) {
     FUNC_4(VAR_6, VAR_0,
         "Interface Description Block if_tsresol option resolution 2^-%u is too high",
         VAR_11 & 0x7F);
    } else {
     FUNC_4(VAR_6, VAR_0,
         "Interface Description Block if_tsresol option resolution 10^-%u is too high",
         VAR_11);
    }
    return (-1);
   }
   break;

  case 130:
   if (VAR_7->option_length != 8) {
    FUNC_4(VAR_6, VAR_0,
        "Interface Description Block has if_tsoffset option with length %u != 8",
        VAR_7->option_length);
    return (-1);
   }
   if (VAR_10) {
    FUNC_4(VAR_6, VAR_0,
        "Interface Description Block has more than one if_tsoffset option");
    return (-1);
   }
   VAR_10 = 1;
   FUNC_3(VAR_4, VAR_8, sizeof(*VAR_4));
   if (VAR_1->swapped)
    *VAR_4 = FUNC_0(*VAR_4);
   break;

  default:
   break;
  }
 }

done:
 return (0);
}
