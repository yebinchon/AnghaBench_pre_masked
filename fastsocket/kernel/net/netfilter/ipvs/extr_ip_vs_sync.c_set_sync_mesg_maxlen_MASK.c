
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct net_device {int mtu; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(int VAR_11)
{
 struct net_device *VAR_12;
 int VAR_13;

 if (VAR_11 == VAR_2) {
  if ((VAR_12 = FUNC_1(&VAR_6, VAR_8)) == ((void*)0))
   return -VAR_0;

  VAR_13 = (VAR_12->mtu - sizeof(struct iphdr) -
         sizeof(struct udphdr) -
         VAR_5 - 20) / VAR_4;
  VAR_10 = VAR_5 +
   VAR_4 * FUNC_2(VAR_13, VAR_3);
  FUNC_0(7, "setting the maximum length of sync sending "
     "message %d.\n", VAR_10);
 } else if (VAR_11 == VAR_1) {
  if ((VAR_12 = FUNC_1(&VAR_6, VAR_7)) == ((void*)0))
   return -VAR_0;

  VAR_9 = VAR_12->mtu -
   sizeof(struct iphdr) - sizeof(struct udphdr);
  FUNC_0(7, "setting the maximum length of sync receiving "
     "message %d.\n", VAR_9);
 }

 return 0;
}
