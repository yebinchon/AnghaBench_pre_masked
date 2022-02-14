
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 int FUNC_3 (struct sk_buff*,unsigned char*,int ) ;
 int FUNC_4 (struct sk_buff*,int,unsigned char*,int ) ;
 unsigned char* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int VAR_7 ;

void FUNC_7(struct sk_buff *VAR_8, int VAR_9, unsigned char VAR_10)
{
 struct sk_buff *VAR_11;
 unsigned char *VAR_12;
 int VAR_13;

 VAR_13 = VAR_5 + VAR_6 + 1;

 if ((VAR_11 = FUNC_0(VAR_13, VAR_4)) == ((void*)0))
  return;

 FUNC_6(VAR_11, 0);

 VAR_12 = FUNC_5(VAR_11, VAR_5 + VAR_6);

 FUNC_4(VAR_8, 7, VAR_12, VAR_0);
 VAR_12[6] &= ~VAR_1;
 VAR_12[6] &= ~VAR_2;
 VAR_12[6] |= VAR_3;
 VAR_12 += VAR_0;

 FUNC_3(VAR_8, VAR_12, VAR_0);
 VAR_12[6] &= ~VAR_1;
 VAR_12[6] |= VAR_2;
 VAR_12[6] |= VAR_3;
 VAR_12 += VAR_0;

 *VAR_12++ = VAR_7;

 if (VAR_9) {
  *VAR_12++ = 0;
  *VAR_12++ = 0;
  *VAR_12++ = VAR_8->data[15];
  *VAR_12++ = VAR_8->data[16];
 } else {
  *VAR_12++ = VAR_8->data[15];
  *VAR_12++ = VAR_8->data[16];
  *VAR_12++ = 0;
  *VAR_12++ = 0;
 }

 *VAR_12++ = VAR_10;
 *VAR_12++ = 0;

 if (!FUNC_2(VAR_11, ((void*)0)))
  FUNC_1(VAR_11);
}
