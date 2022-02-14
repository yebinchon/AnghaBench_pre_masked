
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct igrprte {int igr_hct; int igr_ld; int igr_rel; int igr_mtu; int igr_bw; int igr_dly; int * igr_net; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, register const struct igrprte *VAR_1,
    register int VAR_2, register int VAR_3)
{
 register u_int VAR_4, VAR_5;
 u_int VAR_6, VAR_7;

 if (VAR_2)
  FUNC_2((VAR_0, " *.%d.%d.%d", VAR_1->igr_net[0],
      VAR_1->igr_net[1], VAR_1->igr_net[2]));
 else if (VAR_3)
  FUNC_2((VAR_0, " X%d.%d.%d.0", VAR_1->igr_net[0],
      VAR_1->igr_net[1], VAR_1->igr_net[2]));
 else
  FUNC_2((VAR_0, " %d.%d.%d.0", VAR_1->igr_net[0],
      VAR_1->igr_net[1], VAR_1->igr_net[2]));

 VAR_4 = FUNC_1(VAR_1->igr_dly);
 VAR_5 = FUNC_1(VAR_1->igr_bw);
 VAR_6 = VAR_5 + VAR_4;
 if (VAR_6 > 0xffffff)
  VAR_6 = 0xffffff;
 VAR_7 = FUNC_0(VAR_1->igr_mtu);

 FUNC_2((VAR_0, " d=%d b=%d r=%d l=%d M=%d mtu=%d in %d hops",
     10 * VAR_4, VAR_5 == 0 ? 0 : 10000000 / VAR_5,
     VAR_1->igr_rel, VAR_1->igr_ld, VAR_6,
     VAR_7, VAR_1->igr_hct));
}
