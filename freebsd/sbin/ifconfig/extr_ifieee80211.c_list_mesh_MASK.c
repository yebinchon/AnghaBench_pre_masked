
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req_mesh_route {int imr_nhops; int imr_metric; int imr_lifetime; int imr_lastmseq; int imr_flags; scalar_t__ imr_nexthop; scalar_t__ imr_dest; } ;
struct ieee80211req {int i_len; struct ieee80211req_mesh_route** i_data; int i_val; int i_type; int i_name; } ;
struct ether_addr {int dummy; } ;
typedef int routes ;
typedef int ireq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (struct ether_addr const*) ;
 scalar_t__ FUNC_2 (int,int ,struct ieee80211req*) ;
 int FUNC_3 (struct ieee80211req*,int ,int) ;
 int VAR_7 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_8)
{
 struct ieee80211req VAR_9;
 struct ieee80211req_mesh_route VAR_10[128];
 struct ieee80211req_mesh_route *VAR_11;

 (void) FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 (void) FUNC_5(VAR_9.i_name, VAR_7, sizeof(VAR_9.i_name));
 VAR_9.i_type = VAR_0;
 VAR_9.i_val = VAR_5;
 VAR_9.i_data = &VAR_10;
 VAR_9.i_len = sizeof(VAR_10);
 if (FUNC_2(VAR_8, VAR_6, &VAR_9) < 0)
   FUNC_0(1, "unable to get the Mesh routing table");

 FUNC_4("%-17.17s %-17.17s %4s %4s %4s %6s %s\n"
  , "DEST"
  , "NEXT HOP"
  , "HOPS"
  , "METRIC"
  , "LIFETIME"
  , "MSEQ"
  , "FLAGS");

 for (VAR_11 = &VAR_10[0]; VAR_11 - &VAR_10[0] < VAR_9.i_len / sizeof(*VAR_11); VAR_11++){
  FUNC_4("%s ",
      FUNC_1((const struct ether_addr *)VAR_11->imr_dest));
  FUNC_4("%s %4u   %4u   %6u %6u    %c%c\n",
   FUNC_1((const struct ether_addr *)VAR_11->imr_nexthop),
   VAR_11->imr_nhops, VAR_11->imr_metric, VAR_11->imr_lifetime,
   VAR_11->imr_lastmseq,
   (VAR_11->imr_flags & VAR_1) ?
       'D' :
   (VAR_11->imr_flags & VAR_4) ?
       'V' : '!',
   (VAR_11->imr_flags & VAR_3) ?
       'P' :
   (VAR_11->imr_flags & VAR_2) ?
       'G' :' ');
 }
}
