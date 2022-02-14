
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int icmp_so_rsvd; } ;
struct TYPE_7__ {int icmp_ad_num; int icmp_ad_asize; TYPE_2__* icmp_ad_info; int icmp_ad_life; } ;
struct TYPE_5__ {scalar_t__ icmp_type; } ;
union ad_u {TYPE_4__ so; TYPE_3__ ad; TYPE_1__ icmp; } ;
typedef int u_int ;
struct interface {char* int_name; } ;
typedef int naddr ;
typedef int n_long ;
struct TYPE_6__ {int icmp_ad_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (char,int *) ;
 int * VAR_3 ;
 int FUNC_2 () ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,char*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_4,
     naddr VAR_5,
     naddr VAR_6,
     struct interface *VAR_7,
     union ad_u *VAR_8,
     u_int VAR_9)
{
 int VAR_10;
 n_long *VAR_11, *VAR_12;


 if (!VAR_2 || VAR_3 == ((void*)0))
  return;

 FUNC_2();

 if (VAR_8->icmp.icmp_type == VAR_0) {
  (void)FUNC_0(VAR_3, "%s Router Ad"
         " from %s to %s via %s life=%d\n",
         VAR_4, FUNC_3(VAR_5), FUNC_3(VAR_6),
         VAR_7 ? VAR_7->int_name : "?",
         FUNC_5(VAR_8->ad.icmp_ad_life));
  if (!VAR_1)
   return;

  VAR_11 = &VAR_8->ad.icmp_ad_info[0].icmp_ad_addr;
  VAR_12 = &VAR_11[(VAR_9 - sizeof(VAR_8->ad)) / sizeof(*VAR_11)];
  for (VAR_10 = 0; VAR_10 < VAR_8->ad.icmp_ad_num && VAR_11 <= VAR_12; VAR_10++) {
   (void)FUNC_0(VAR_3, "\t%s preference=%d",
          FUNC_3(VAR_11[0]), (int)FUNC_4(VAR_11[1]));
   VAR_11 += VAR_8->ad.icmp_ad_asize;
  }
  (void)FUNC_1('\n',VAR_3);

 } else {
  FUNC_6("%s Router Solic. from %s to %s via %s value=%#x",
     VAR_4, FUNC_3(VAR_5), FUNC_3(VAR_6),
     VAR_7 ? VAR_7->int_name : "?",
     (int)FUNC_4(VAR_8->so.icmp_so_rsvd));
 }
}
