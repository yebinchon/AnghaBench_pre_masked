
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct igrprte {int dummy; } ;
struct igrphdr {int ig_as; int ig_ed; int ig_vop; int ig_nx; int ig_ns; int ig_ni; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct igrphdr const) ;
 int FUNC_5 (int const,scalar_t__) ;
 int FUNC_6 (int *,struct igrprte const*,int,int) ;
 int VAR_1 ;
 int FUNC_7 (int ,char*,int ) ;

void
FUNC_8(netdissect_options *VAR_2, register const u_char *VAR_3, u_int VAR_4)
{
 register const struct igrphdr *VAR_5;
 register const u_char *VAR_6;
 u_int VAR_7, VAR_8, VAR_9;

 VAR_5 = (const struct igrphdr *)VAR_3;
 VAR_6 = (const u_char *)(VAR_5 + 1);
 FUNC_3((VAR_2, "igrp:"));


 FUNC_4(*VAR_5);
 VAR_7 = FUNC_0(&VAR_5->ig_ni);
 VAR_8 = FUNC_0(&VAR_5->ig_ns);
 VAR_9 = FUNC_0(&VAR_5->ig_nx);

 FUNC_3((VAR_2, " %s V%d edit=%d AS=%d (%d/%d/%d)",
     FUNC_7(VAR_1, "op-#%d", FUNC_1(VAR_5->ig_vop)),
     FUNC_2(VAR_5->ig_vop),
     VAR_5->ig_ed,
     FUNC_0(&VAR_5->ig_as),
     VAR_7,
     VAR_8,
     VAR_9));

 VAR_4 -= sizeof(*VAR_5);
 while (VAR_4 >= VAR_0) {
  if (VAR_7 > 0) {
   FUNC_5(*VAR_6, VAR_0);
   FUNC_6(VAR_2, (const struct igrprte *)VAR_6, 1, 0);
   --VAR_7;
  } else if (VAR_8 > 0) {
   FUNC_5(*VAR_6, VAR_0);
   FUNC_6(VAR_2, (const struct igrprte *)VAR_6, 0, 0);
   --VAR_8;
  } else if (VAR_9 > 0) {
   FUNC_5(*VAR_6, VAR_0);
   FUNC_6(VAR_2, (const struct igrprte *)VAR_6, 0, 1);
   --VAR_9;
  } else {
   FUNC_3((VAR_2, " [extra bytes %d]", VAR_4));
   break;
  }
  VAR_6 += VAR_0;
  VAR_4 -= VAR_0;
 }
 if (VAR_7 == 0 && VAR_8 == 0 && VAR_9 == 0)
  return;
trunc:
 FUNC_3((VAR_2, " [|igrp]"));
}
