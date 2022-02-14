
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_5__ {int sin_addr; } ;
struct TYPE_4__ {int sa_family; } ;
union vxlan_sockaddr {TYPE_3__ in6; TYPE_2__ in4; TYPE_1__ sa; } ;
struct vxlan_ftable_entry {scalar_t__ vxlfe_expire; int * vxlfe_mac; int vxlfe_flags; union vxlan_sockaddr vxlfe_raddr; } ;
struct sbuf {int dummy; } ;
typedef int intmax_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vxlan_ftable_entry*) ;
 int FUNC_1 (int,void const*,char*,int) ;
 scalar_t__ FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,char,...) ;
 int FUNC_5 (struct sbuf*,char) ;
 int FUNC_6 (struct sbuf*,int) ;

__attribute__((used)) static void
FUNC_7(struct vxlan_ftable_entry *VAR_4, struct sbuf *VAR_5)
{
 char VAR_6[64];
 const union vxlan_sockaddr *VAR_7;
 const void *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = &VAR_4->vxlfe_raddr;
 VAR_11 = VAR_7->sa.sa_family;
 VAR_10 = FUNC_3(VAR_5);

 FUNC_4(VAR_5, "%c 0x%02X ", FUNC_0(VAR_4) ? 'D' : 'S',
     VAR_4->vxlfe_flags);

 for (VAR_9 = 0; VAR_9 < VAR_1 - 1; VAR_9++)
  FUNC_4(VAR_5, "%02X:", VAR_4->vxlfe_mac[VAR_9]);
 FUNC_4(VAR_5, "%02X ", VAR_4->vxlfe_mac[VAR_9]);

 if (VAR_11 == VAR_0) {
  VAR_8 = &VAR_7->in4.sin_addr;
  VAR_12 = VAR_3 - 1;
 } else {
  VAR_8 = &VAR_7->in6.sin6_addr;
  VAR_12 = VAR_2 - 1;
 }
 FUNC_1(VAR_11, VAR_8, VAR_6, sizeof(VAR_6));
 FUNC_4(VAR_5, "%*s ", VAR_12, VAR_6);

 FUNC_4(VAR_5, "%08jd", (intmax_t)VAR_4->vxlfe_expire);

 FUNC_5(VAR_5, '\n');


 if (FUNC_2(VAR_5) != 0)
  FUNC_6(VAR_5, VAR_10);
}
