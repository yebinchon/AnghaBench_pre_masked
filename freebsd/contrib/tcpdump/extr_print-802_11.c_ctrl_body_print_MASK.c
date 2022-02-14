
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct ctrl_rts_hdr_t {int ta; } ;
struct ctrl_ps_poll_hdr_t {int aid; } ;
struct ctrl_end_hdr_t {int ra; } ;
struct ctrl_end_ack_hdr_t {int ra; } ;
struct ctrl_cts_hdr_t {int ra; } ;
struct ctrl_bar_hdr_t {int seq; int ctl; int ta; int ra; } ;
struct ctrl_ba_hdr_t {int ra; } ;
struct ctrl_ack_hdr_t {int ra; } ;
struct TYPE_5__ {int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int ) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_9,
                uint16_t VAR_10, const u_char *VAR_11)
{
 FUNC_2((VAR_9, "%s", FUNC_5(VAR_8, "Unknown Ctrl Subtype", FUNC_1(VAR_10))));
 switch (FUNC_1(VAR_10)) {
 case 132:

  break;
 case 134:
  if (!FUNC_3(*VAR_11, VAR_1))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " RA:%s TA:%s CTL(%x) SEQ(%u) ",
       FUNC_4(VAR_9, ((const struct ctrl_bar_hdr_t *)VAR_11)->ra),
       FUNC_4(VAR_9, ((const struct ctrl_bar_hdr_t *)VAR_11)->ta),
       FUNC_0(&(((const struct ctrl_bar_hdr_t *)VAR_11)->ctl)),
       FUNC_0(&(((const struct ctrl_bar_hdr_t *)VAR_11)->seq))));
  break;
 case 135:
  if (!FUNC_3(*VAR_11, VAR_2))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " RA:%s ",
       FUNC_4(VAR_9, ((const struct ctrl_ba_hdr_t *)VAR_11)->ra)));
  break;
 case 129:
  if (!FUNC_3(*VAR_11, VAR_6))
   return 0;
  FUNC_2((VAR_9, " AID(%x)",
      FUNC_0(&(((const struct ctrl_ps_poll_hdr_t *)VAR_11)->aid))));
  break;
 case 128:
  if (!FUNC_3(*VAR_11, VAR_7))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " TA:%s ",
       FUNC_4(VAR_9, ((const struct ctrl_rts_hdr_t *)VAR_11)->ta)));
  break;
 case 131:
  if (!FUNC_3(*VAR_11, VAR_3))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " RA:%s ",
       FUNC_4(VAR_9, ((const struct ctrl_cts_hdr_t *)VAR_11)->ra)));
  break;
 case 136:
  if (!FUNC_3(*VAR_11, VAR_0))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " RA:%s ",
       FUNC_4(VAR_9, ((const struct ctrl_ack_hdr_t *)VAR_11)->ra)));
  break;
 case 133:
  if (!FUNC_3(*VAR_11, VAR_5))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " RA:%s ",
       FUNC_4(VAR_9, ((const struct ctrl_end_hdr_t *)VAR_11)->ra)));
  break;
 case 130:
  if (!FUNC_3(*VAR_11, VAR_4))
   return 0;
  if (!VAR_9->ndo_eflag)
   FUNC_2((VAR_9, " RA:%s ",
       FUNC_4(VAR_9, ((const struct ctrl_end_ack_hdr_t *)VAR_11)->ra)));
  break;
 }
 return 1;
}
