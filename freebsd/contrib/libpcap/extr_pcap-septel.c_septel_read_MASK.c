
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_11__ {int ps_recv; } ;
struct pcap_septel {TYPE_2__ stat; } ;
struct pcap_pkthdr {int caplen; unsigned short len; int ts; } ;
struct TYPE_10__ {int * bf_insns; } ;
struct TYPE_12__ {int snapshot; TYPE_1__ fcode; scalar_t__ break_loop; struct pcap_septel* priv; } ;
typedef TYPE_3__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;
struct TYPE_14__ {int type; } ;
struct TYPE_13__ {unsigned short len; } ;
typedef TYPE_4__ MSG ;
typedef TYPE_5__ HDR ;


 TYPE_5__* FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int *,int *,unsigned short,int) ;
 int * FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(pcap_t *VAR_0, int VAR_1, pcap_handler VAR_2, u_char *VAR_3) {

  struct pcap_septel *VAR_4 = VAR_0->priv;
  HDR *VAR_5;
  MSG *VAR_6;
  int VAR_7 = 0 ;
  int VAR_8 = 0 ;





  unsigned int VAR_9 = 0xdd;


  do {

    unsigned short VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0;
    struct pcap_pkthdr VAR_13;
    u_char *VAR_14 ;




loop:
    if (VAR_0->break_loop) {





      VAR_0->break_loop = 0;
      return -2;
    }




    do {


      VAR_5 = FUNC_0(VAR_9);

      VAR_6 = (MSG*)VAR_5;



      VAR_12++ ;

    }
    while ((VAR_6 == ((void*)0))&& (VAR_12< 100)) ;

    if (VAR_6 != ((void*)0)) {

      VAR_8 = VAR_5->type ;




      if ((VAR_8 != 0xcf00) && (VAR_8 != 0x8f01)) {
        FUNC_4(VAR_5);
        goto loop ;
      }


      VAR_14 = FUNC_2(VAR_6);
      VAR_10 = VAR_6->len;
      VAR_11 = VAR_0->snapshot ;


      if (VAR_11 > VAR_10) {

        VAR_11 = VAR_10;
      }

      if ((VAR_0->fcode.bf_insns == ((void*)0)) || FUNC_1(VAR_0->fcode.bf_insns, VAR_14, VAR_10, VAR_11)) {
        (void)FUNC_3(&VAR_13.ts, ((void*)0));


        VAR_13.caplen = VAR_11;
        VAR_13.len = VAR_10;


        VAR_4->stat.ps_recv++;


        VAR_2(VAR_3, &VAR_13, VAR_14);

        VAR_7++ ;

      }


      FUNC_4(VAR_5);
    }else
      VAR_7++;

  }
  while (VAR_7 < VAR_1) ;

  return VAR_7 ;
}
