
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
struct sll_header {int sll_protocol; int sll_addr; int sll_halen; int sll_pkttype; } ;
struct TYPE_5__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static inline void
FUNC_4(netdissect_options *VAR_3, register const struct sll_header *VAR_4, u_int VAR_5)
{
 u_short VAR_6;

        FUNC_1((VAR_3, "%3s ",FUNC_3(VAR_2,"?",FUNC_0(&VAR_4->sll_pkttype))));






 if (FUNC_0(&VAR_4->sll_halen) == 6)
  FUNC_1((VAR_3, "%s ", FUNC_2(VAR_3, VAR_4->sll_addr)));

 if (!VAR_3->ndo_qflag) {
  VAR_6 = FUNC_0(&VAR_4->sll_protocol);

  if (VAR_6 <= VAR_0) {



   switch (VAR_6) {

   case 128:



    FUNC_1((VAR_3, "802.3"));
    break;

   case 129:



    FUNC_1((VAR_3, "802.2"));
    break;

   default:



    FUNC_1((VAR_3, "ethertype Unknown (0x%04x)",
        VAR_6));
    break;
   }
  } else {
   FUNC_1((VAR_3, "ethertype %s (0x%04x)",
       FUNC_3(VAR_1, "Unknown", VAR_6),
       VAR_6));
  }
  FUNC_1((VAR_3, ", length %u: ", VAR_5));
 }
}
