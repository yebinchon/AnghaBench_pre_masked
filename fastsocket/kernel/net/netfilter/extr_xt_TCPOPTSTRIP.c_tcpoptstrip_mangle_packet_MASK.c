
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct xt_tcpoptstrip_target_info {int strip_bmap; } ;
struct tcphdr {int check; } ;
struct sk_buff {int len; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (int*,int,unsigned int) ;
 unsigned int FUNC_3 (int*,unsigned int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static unsigned int
FUNC_8(struct sk_buff *VAR_3,
     const struct xt_tcpoptstrip_target_info *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 struct tcphdr *VAR_10;
 u_int16_t VAR_11, VAR_12;
 u_int8_t *VAR_13;

 if (!FUNC_4(VAR_3, VAR_3->len))
  return VAR_0;

 VAR_10 = (struct tcphdr *)(FUNC_5(VAR_3) + VAR_5);
 VAR_13 = (u_int8_t *)VAR_10;





 for (VAR_8 = sizeof(struct tcphdr); VAR_8 < FUNC_6(VAR_3); VAR_8 += VAR_7) {
  VAR_7 = FUNC_3(VAR_13, VAR_8);

  if (VAR_8 + VAR_7 > FUNC_6(VAR_3))
   break;

  if (!FUNC_7(VAR_4->strip_bmap, VAR_13[VAR_8]))
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
   VAR_12 = VAR_13[VAR_8+VAR_9];
   VAR_11 = VAR_1;
   if ((VAR_8 + VAR_9) % 2 == 0) {
    VAR_12 <<= 8;
    VAR_11 <<= 8;
   }
   FUNC_1(&VAR_10->check, VAR_3, FUNC_0(VAR_12),
       FUNC_0(VAR_11), 0);
  }
  FUNC_2(VAR_13 + VAR_8, VAR_1, VAR_7);
 }

 return VAR_2;
}
