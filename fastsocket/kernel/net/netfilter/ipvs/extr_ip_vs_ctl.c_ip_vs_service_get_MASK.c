
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_service {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,union nf_inet_addr const*) ;
 int FUNC_1 (int,char*,scalar_t__,int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_3 ;
 struct ip_vs_service* FUNC_2 (int,scalar_t__,union nf_inet_addr const*,scalar_t__) ;
 struct ip_vs_service* FUNC_3 (int,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct ip_vs_service *
FUNC_9(int VAR_7, __u32 VAR_8, __u16 VAR_9,
    const union nf_inet_addr *VAR_10, __be16 VAR_11)
{
 struct ip_vs_service *VAR_12;

 FUNC_7(&VAR_4);




 if (VAR_8 && (VAR_12 = FUNC_3(VAR_7, VAR_8)))
  goto out;





 VAR_12 = FUNC_2(VAR_7, VAR_9, VAR_10, VAR_11);

 if (VAR_12 == ((void*)0)
     && VAR_9 == VAR_2
     && FUNC_4(&VAR_5)
     && (VAR_11 == VAR_0 || FUNC_6(VAR_11) >= VAR_3)) {




  VAR_12 = FUNC_2(VAR_7, VAR_9, VAR_10, VAR_1);
 }

 if (VAR_12 == ((void*)0)
     && FUNC_4(&VAR_6)) {



  VAR_12 = FUNC_2(VAR_7, VAR_9, VAR_10, 0);
 }

  out:
 FUNC_8(&VAR_4);

 FUNC_1(9, "lookup service: fwm %u %s %s:%u %s\n",
        VAR_8, FUNC_5(VAR_9),
        FUNC_0(VAR_7, VAR_10), FUNC_6(VAR_11),
        VAR_12 ? "hit" : "not hit");

 return VAR_12;
}
