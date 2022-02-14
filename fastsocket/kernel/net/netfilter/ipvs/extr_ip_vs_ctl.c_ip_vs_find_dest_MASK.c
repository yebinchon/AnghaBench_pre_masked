
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_service {int dummy; } ;
struct ip_vs_dest {int refcnt; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ip_vs_dest* FUNC_1 (struct ip_vs_service*,union nf_inet_addr const*,int) ;
 struct ip_vs_service* FUNC_2 (int,int,int ,union nf_inet_addr const*,int) ;
 int FUNC_3 (struct ip_vs_service*) ;

struct ip_vs_dest *FUNC_4(int VAR_2, const union nf_inet_addr *VAR_3,
       __be16 VAR_4,
       const union nf_inet_addr *VAR_5,
       __be16 VAR_6, __u16 VAR_7, __u32 VAR_8,
       __u32 VAR_9)
{
 struct ip_vs_dest *VAR_10;
 struct ip_vs_service *VAR_11;
 __be16 VAR_12 = VAR_4;

 VAR_11 = FUNC_2(VAR_2, VAR_8, VAR_7, VAR_5, VAR_6);
 if (!VAR_11)
  return ((void*)0);
 if (VAR_8 && (VAR_9 & VAR_0) != VAR_1)
  VAR_12 = 0;
 VAR_10 = FUNC_1(VAR_11, VAR_3, VAR_12);
 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_11, VAR_3, VAR_12 ^ VAR_4);
 if (VAR_10)
  FUNC_0(&VAR_10->refcnt);
 FUNC_3(VAR_11);
 return VAR_10;
}
