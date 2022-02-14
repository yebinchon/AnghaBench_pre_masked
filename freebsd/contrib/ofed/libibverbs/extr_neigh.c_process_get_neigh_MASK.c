
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmsg {int rtm_dst_len; int rtm_family; } ;
struct nl_msg {int dummy; } ;
struct get_neigh_handler {scalar_t__ oif; int sock; int dst; } ;
typedef int rmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct nl_msg*) ;
 int FUNC_4 (int ,int ,int ,int *,struct get_neigh_handler*) ;
 int FUNC_5 (struct nl_msg*,int ,int ) ;
 int FUNC_6 (struct nl_msg*,int ,scalar_t__) ;
 struct nl_msg* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nl_msg*,struct rtmsg*,int,int ) ;
 int FUNC_9 (struct nl_msg*) ;

int FUNC_10(struct get_neigh_handler *VAR_8)
{
 struct nl_msg *VAR_9;
 struct rtmsg VAR_10 = {
  .rtm_family = FUNC_0(VAR_8->dst),
  .rtm_dst_len = FUNC_1(VAR_8->dst),
 };
 int VAR_11;

 VAR_9 = FUNC_7(VAR_6, 0);

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_8(VAR_9, &VAR_10, sizeof(VAR_10), VAR_1);

 FUNC_5(VAR_9, VAR_4, VAR_8->dst);

 if (VAR_8->oif > 0)
  FUNC_6(VAR_9, VAR_5, VAR_8->oif);

 VAR_11 = FUNC_3(VAR_8->sock, VAR_9);
 FUNC_9(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_4(VAR_8->sock, VAR_3,
       VAR_2, &VAR_7, VAR_8);

 VAR_11 = FUNC_2(VAR_8->sock);

 return VAR_11;
}
