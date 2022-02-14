
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct link_config {int supported; } ;
struct ifmedia {int ifm_list; } ;
struct port_info {int flags; struct link_config link_cfg; struct ifmedia media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (struct port_info*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ifmedia*,int,int ,int *) ;
 int FUNC_7 (struct ifmedia*,int) ;
 int FUNC_8 (struct ifmedia*) ;
 int FUNC_9 (struct ifmedia*,int) ;
 int FUNC_10 (struct port_info*,int) ;
 int FUNC_11 (struct port_info*) ;

__attribute__((used)) static void
FUNC_12(struct port_info *VAR_9)
{
 uint32_t VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 struct link_config *VAR_15;
 struct ifmedia *VAR_16;

 FUNC_3(VAR_9);

 if (VAR_9->flags & VAR_0)
  return;




 VAR_16 = &VAR_9->media;
 FUNC_8(VAR_16);
 VAR_15 = &VAR_9->link_cfg;
 VAR_10 = FUNC_0(VAR_15->supported);
 if (FUNC_4(VAR_10 == 0)) {
  FUNC_2(VAR_10 != 0);
no_media:
  FUNC_2(FUNC_1(&VAR_16->ifm_list));
  FUNC_6(VAR_16, VAR_3 | VAR_5, 0, ((void*)0));
  FUNC_9(VAR_16, VAR_3 | VAR_5);
  return;
 }

 VAR_12 = 0;
 for (VAR_14 = VAR_8; VAR_14 < FUNC_5(VAR_10); VAR_14++) {
  VAR_11 = 1 << VAR_14;
  FUNC_2(VAR_11 & VAR_7);
  if (VAR_10 & VAR_11) {
   VAR_13 = FUNC_10(VAR_9, VAR_11);
   if (VAR_13 == VAR_5) {
    goto no_media;
   } else if (VAR_13 == VAR_6)
    VAR_12++;
   else
    FUNC_7(VAR_16, VAR_3 | VAR_4 | VAR_13);
  }
 }
 if (VAR_12 > 0)
  FUNC_7(VAR_16, VAR_3 | VAR_4 | VAR_6);
 if (VAR_15->supported & VAR_1)
  FUNC_6(VAR_16, VAR_3 | VAR_2, 0, ((void*)0));

 FUNC_11(VAR_9);
}
