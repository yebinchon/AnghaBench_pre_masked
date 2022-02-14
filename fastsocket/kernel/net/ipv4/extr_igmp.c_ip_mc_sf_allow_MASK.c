
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ip_sf_socklist {int sl_count; scalar_t__* sl_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {int imr_ifindex; TYPE_1__ imr_multiaddr; } ;
struct ip_mc_socklist {scalar_t__ sfmode; struct ip_sf_socklist* sflist; TYPE_2__ multi; int next; } ;
struct inet_sock {int mc_all; int mc_list; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (scalar_t__) ;
 struct ip_mc_socklist* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct sock *VAR_2, __be32 VAR_3, __be32 VAR_4, int VAR_5)
{
 struct inet_sock *VAR_6 = FUNC_0(VAR_2);
 struct ip_mc_socklist *VAR_7;
 struct ip_sf_socklist *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = 1;
 if (!FUNC_1(VAR_3))
  goto out;

 FUNC_3();
 for (VAR_7=FUNC_2(VAR_6->mc_list); VAR_7; VAR_7=FUNC_2(VAR_7->next)) {
  if (VAR_7->multi.imr_multiaddr.s_addr == VAR_3 &&
      VAR_7->multi.imr_ifindex == VAR_5)
   break;
 }
 VAR_10 = VAR_6->mc_all;
 if (!VAR_7)
  goto unlock;
 VAR_8 = VAR_7->sflist;
 VAR_10 = (VAR_7->sfmode == VAR_0);
 if (!VAR_8)
  goto unlock;

 for (VAR_9=0; VAR_9<VAR_8->sl_count; VAR_9++) {
  if (VAR_8->sl_addr[VAR_9] == VAR_4)
   break;
 }
 VAR_10 = 0;
 if (VAR_7->sfmode == VAR_1 && VAR_9 >= VAR_8->sl_count)
  goto unlock;
 if (VAR_7->sfmode == VAR_0 && VAR_9 < VAR_8->sl_count)
  goto unlock;
 VAR_10 = 1;
unlock:
 FUNC_4();
out:
 return VAR_10;
}
