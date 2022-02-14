
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct pcap_ng_sf {int ifcount; int ifaces_size; int user_tsresol; struct pcap_ng_if* ifaces; } ;
struct pcap_ng_if {int tsresol; int scale_factor; int scale_type; scalar_t__ tsoffset; } ;
struct block_cursor {int dummy; } ;
struct TYPE_4__ {struct pcap_ng_sf* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pcap_ng_if* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,struct block_cursor*,int*,scalar_t__*,int*,char*) ;
 struct pcap_ng_if* FUNC_3 (struct pcap_ng_if*,int) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_6, struct block_cursor *VAR_7, char *VAR_8)
{
 struct pcap_ng_sf *VAR_9;
 u_int VAR_10;
 uint64_t VAR_11;
 int VAR_12;

 VAR_9 = VAR_6->priv;




 VAR_9->ifcount++;




 if (VAR_9->ifcount > VAR_9->ifaces_size) {



  bpf_u_int32 VAR_13;
  struct pcap_ng_if *VAR_14;

  if (VAR_9->ifaces_size == 0) {
   VAR_13 = 1;
   VAR_14 = FUNC_0(sizeof (struct pcap_ng_if));
  } else {






   if (VAR_9->ifaces_size * 2 < VAR_9->ifaces_size) {






    FUNC_1(VAR_8, VAR_1,
        "more than %u interfaces in the file",
        0x80000000U);
    return (0);
   }





   VAR_13 = VAR_9->ifaces_size * 2;
   if (VAR_13 * sizeof (struct pcap_ng_if) < VAR_13) {
    FUNC_1(VAR_8, VAR_1,
        "more than %u interfaces in the file",
        0xFFFFFFFFU / ((u_int)sizeof (struct pcap_ng_if)));
    return (0);
   }
   VAR_14 = FUNC_3(VAR_9->ifaces, VAR_13 * sizeof (struct pcap_ng_if));
  }
  if (VAR_14 == ((void*)0)) {




   FUNC_1(VAR_8, VAR_1,
       "out of memory for per-interface information (%u interfaces)",
       VAR_9->ifcount);
   return (0);
  }
  VAR_9->ifaces_size = VAR_13;
  VAR_9->ifaces = VAR_14;
 }




 VAR_10 = 1000000;
 VAR_12 = 0;
 VAR_11 = 0;





 if (FUNC_2(VAR_6, VAR_7, &VAR_10, &VAR_11, &VAR_12,
     VAR_8) == -1)
  return (0);

 VAR_9->ifaces[VAR_9->ifcount - 1].tsresol = VAR_10;
 VAR_9->ifaces[VAR_9->ifcount - 1].tsoffset = VAR_11;





 if (VAR_10 == VAR_9->user_tsresol) {




  VAR_9->ifaces[VAR_9->ifcount - 1].scale_type = VAR_0;
 } else if (VAR_10 > VAR_9->user_tsresol) {




  if (VAR_12)
   VAR_9->ifaces[VAR_9->ifcount - 1].scale_type = VAR_2;
  else {



   VAR_9->ifaces[VAR_9->ifcount - 1].scale_factor = VAR_10/VAR_9->user_tsresol;
   VAR_9->ifaces[VAR_9->ifcount - 1].scale_type = VAR_3;
  }
 } else {




  if (VAR_12)
   VAR_9->ifaces[VAR_9->ifcount - 1].scale_type = VAR_4;
  else {



   VAR_9->ifaces[VAR_9->ifcount - 1].scale_factor = VAR_9->user_tsresol/VAR_10;
   VAR_9->ifaces[VAR_9->ifcount - 1].scale_type = VAR_5;
  }
 }
 return (1);
}
