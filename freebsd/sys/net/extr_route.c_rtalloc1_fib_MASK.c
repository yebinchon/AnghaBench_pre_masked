
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct sockaddr {int sa_family; } ;
struct rtentry {int dummy; } ;
struct rt_addrinfo {struct sockaddr** rti_info; } ;
struct rib_head {int head; struct radix_node* (* rnh_matchaddr ) (struct sockaddr*,int *) ;} ;
struct radix_node {int rn_flags; } ;
typedef int info ;
struct TYPE_2__ {int rts_unreach; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rib_head*) ;
 int FUNC_2 (struct rib_head*) ;
 int VAR_0 ;
 int FUNC_3 (struct rib_head*) ;
 int VAR_1 ;
 struct rtentry* FUNC_4 (struct radix_node*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (struct rt_addrinfo*,int) ;
 int FUNC_8 (int,struct rt_addrinfo*,int ,int,int ) ;
 int VAR_6 ;
 struct rib_head* FUNC_9 (int ,int ) ;
 struct radix_node* FUNC_10 (struct sockaddr*,int *) ;

struct rtentry *
FUNC_11(struct sockaddr *VAR_7, int VAR_8, u_long VAR_9,
      u_int VAR_10)
{
 VAR_0;
 struct rib_head *VAR_11;
 struct radix_node *VAR_12;
 struct rtentry *VAR_13;
 struct rt_addrinfo VAR_14;
 int VAR_15 = 0, VAR_16 = VAR_4;

 FUNC_0((VAR_10 < VAR_6), ("rtalloc1_fib: bad fibnum"));
 VAR_11 = FUNC_9(VAR_10, VAR_7->sa_family);
 VAR_13 = ((void*)0);
 if (VAR_11 == ((void*)0))
  goto miss;




 if ((VAR_9 & VAR_3) == 0)
  FUNC_2(VAR_11);




 VAR_12 = VAR_11->rnh_matchaddr(VAR_7, &VAR_11->head);
 if (VAR_12 && ((VAR_12->rn_flags & VAR_1) == 0)) {
  VAR_13 = FUNC_4(VAR_12);
  FUNC_6(VAR_13);
  FUNC_5(VAR_13);
  if ((VAR_9 & VAR_3) == 0)
   FUNC_3(VAR_11);
  return (VAR_13);

 } else if ((VAR_9 & VAR_3) == 0)
  FUNC_3(VAR_11);




miss:
 VAR_5.rts_unreach++;

 if (VAR_8) {





  FUNC_7(&VAR_14, sizeof(VAR_14));
  VAR_14.rti_info[VAR_2] = VAR_7;
  FUNC_8(VAR_16, &VAR_14, 0, VAR_15, VAR_10);
 }
 return (VAR_13);
}
