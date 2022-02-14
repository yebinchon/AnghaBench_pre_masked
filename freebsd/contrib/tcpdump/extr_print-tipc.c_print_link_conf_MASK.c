
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int u_int ;
struct link_conf_tipc_pkthdr {int w5; int ntwrk_id; int prev_node; int dest_domain; int w1; int w0; } ;
struct TYPE_4__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_13 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_14(netdissect_options *VAR_3, const struct link_conf_tipc_pkthdr *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 u_int VAR_8;
 u_int VAR_9;
 u_int VAR_10;
 u_int VAR_11;
 u_int VAR_12;
 u_int VAR_13;
 u_int VAR_14;
 u_int VAR_15;
 u_int VAR_16;

 FUNC_2(VAR_4->prev_node);
 VAR_5 = FUNC_0(&VAR_4->w0);
 VAR_8 = FUNC_10(VAR_5);
 VAR_9 = FUNC_4(VAR_5);
 VAR_10 = FUNC_6(VAR_5);
 VAR_6 = FUNC_0(&VAR_4->w1);
 VAR_11 = FUNC_7(VAR_6);
 VAR_14 = FUNC_0(&VAR_4->dest_domain);
 VAR_13 = FUNC_0(&VAR_4->prev_node);

 FUNC_1((VAR_3, "TIPC v%u.0 %u.%u.%u > %u.%u.%u, headerlength %u bytes, MessageSize %u bytes, %s, messageType %s",
     FUNC_11(VAR_5),
     FUNC_12(VAR_13), FUNC_3(VAR_13), FUNC_8(VAR_13),
     FUNC_12(VAR_14), FUNC_3(VAR_14), FUNC_8(VAR_14),
     VAR_9*4, VAR_10,
     FUNC_13(VAR_1, "unknown", VAR_8),
     FUNC_13(VAR_0, "Unknown", VAR_11)));
 if (VAR_3->ndo_vflag) {
  FUNC_2(VAR_4->w5);
  VAR_12 = FUNC_9(VAR_6);
  VAR_15 = FUNC_0(&VAR_4->ntwrk_id);
  VAR_7 = FUNC_0(&VAR_4->w5);
  VAR_16 = FUNC_5(VAR_7);
  FUNC_1((VAR_3, "\n\tNodeSignature %u, network_id %u, media_id %u",
      VAR_12, VAR_15, VAR_16));
 }
 return;

trunc:
 FUNC_1((VAR_3, "%s", VAR_2));
}
