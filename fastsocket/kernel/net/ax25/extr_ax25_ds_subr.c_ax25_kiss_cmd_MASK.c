
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_3__ {int * dev; } ;
typedef TYPE_1__ ax25_dev ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(ax25_dev *VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 struct sk_buff *VAR_4;
 unsigned char *VAR_5;

 if (VAR_1->dev == ((void*)0))
  return;

 if ((VAR_4 = FUNC_0(2, VAR_0)) == ((void*)0))
  return;

 FUNC_4(VAR_4);
 VAR_5 = FUNC_3(VAR_4, 2);

 *VAR_5++ = VAR_2;
 *VAR_5++ = VAR_3;

 VAR_4->protocol = FUNC_1(VAR_4, VAR_1->dev);

 FUNC_2(VAR_4);
}
