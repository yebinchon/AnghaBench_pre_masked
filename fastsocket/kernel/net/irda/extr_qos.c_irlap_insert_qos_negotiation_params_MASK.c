
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct irlap_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct irlap_cb*,int ,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct irlap_cb *VAR_8,
     struct sk_buff *VAR_9)
{
 int VAR_10;


 VAR_10 = FUNC_0(VAR_8, VAR_1, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);


 VAR_10 = FUNC_0(VAR_8, VAR_4, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);


 VAR_10 = FUNC_0(VAR_8, VAR_2, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);


 VAR_10 = FUNC_0(VAR_8, VAR_6, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);


 VAR_10 = FUNC_0(VAR_8, VAR_0, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);


 VAR_10 = FUNC_0(VAR_8, VAR_5, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);


 VAR_10 = FUNC_0(VAR_8, VAR_3, FUNC_2(VAR_9),
    FUNC_3(VAR_9), &VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1(VAR_9, VAR_10);

 return 0;
}
