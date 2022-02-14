
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ icmp_type; int icmp_code; } ;
union ad_u {TYPE_1__ icmp; } ;
typedef int u_int ;
struct interface {int dummy; } ;
typedef int naddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int ,int ,...) ;
 int FUNC_2 (char const*,int ,int ,struct interface*,union ad_u*,int ) ;

__attribute__((used)) static struct interface *
FUNC_3(const char *VAR_2,
 naddr VAR_3,
 struct interface *VAR_4,
 naddr VAR_5,
 union ad_u *VAR_6,
 u_int VAR_7)
{
 const char *VAR_8;


 if (VAR_6->icmp.icmp_type == VAR_0) {
  VAR_8 = "advertisement";
 } else if (VAR_6->icmp.icmp_type == VAR_1) {
  VAR_8 = "solicitation";
 } else {
  return 0;
 }

 if (VAR_6->icmp.icmp_code != 0) {
  FUNC_1("unrecognized ICMP Router %s code=%d from %s to %s",
     VAR_8, VAR_6->icmp.icmp_code,
     FUNC_0(VAR_3), FUNC_0(VAR_5));
  return 0;
 }

 FUNC_2(VAR_2, VAR_3, VAR_5, VAR_4, VAR_6, VAR_7);

 if (VAR_4 == ((void*)0))
  FUNC_1("unknown interface for router-discovery %s"
     " from %s to %s",
     VAR_8, FUNC_0(VAR_3), FUNC_0(VAR_5));

 return VAR_4;
}
