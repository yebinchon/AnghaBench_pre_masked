
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct nlmsghdr*) ;
 int VAR_1 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (void*,void*,int) ;
 struct sk_buff* FUNC_4 (int,int ) ;

struct sk_buff *FUNC_5(int VAR_3, int VAR_4, int VAR_5, int VAR_6,
     int VAR_7, void *VAR_8, int VAR_9)
{
 struct sk_buff *VAR_10;
 struct nlmsghdr *VAR_11;
 void *VAR_12;
 int VAR_13 = VAR_7 ? VAR_2 : 0;
 int VAR_14 = VAR_6 ? VAR_1 : VAR_5;

 VAR_10 = FUNC_4(VAR_9, VAR_0);
 if (!VAR_10)
  return ((void*)0);

 VAR_11 = FUNC_1(VAR_10, VAR_3, VAR_4, VAR_14, VAR_9, VAR_13);
 VAR_12 = FUNC_0(VAR_11);
 FUNC_3(VAR_12, VAR_8, VAR_9);
 return VAR_10;

nlmsg_failure:
 if (VAR_10)
  FUNC_2(VAR_10);
 return ((void*)0);
}
