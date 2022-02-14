
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int hard_header_len; } ;
typedef int ax25_digi ;
typedef int ax25_address ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 char* FUNC_5 (struct sk_buff*,int ) ;
 char* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;

void FUNC_9(struct net_device *VAR_5, ax25_address *VAR_6, ax25_address *VAR_7, ax25_digi *VAR_8)
{
 struct sk_buff *VAR_9;
 char *VAR_10;
 ax25_digi VAR_11;

 if (VAR_5 == ((void*)0))
  return;

 if ((VAR_9 = FUNC_0(VAR_5->hard_header_len + 1, VAR_4)) == ((void*)0))
  return;

 FUNC_7(VAR_9, VAR_5->hard_header_len);
 FUNC_8(VAR_9);

 FUNC_3(VAR_8, &VAR_11);

 VAR_10 = FUNC_6(VAR_9, 1);

 *VAR_10 = VAR_0 | VAR_2;




 VAR_10 = FUNC_5(VAR_9, FUNC_2(VAR_8));
 VAR_10 += FUNC_1(VAR_10, VAR_7, VAR_6, &VAR_11, VAR_3, VAR_1);

 FUNC_4(VAR_9, VAR_5);
}
