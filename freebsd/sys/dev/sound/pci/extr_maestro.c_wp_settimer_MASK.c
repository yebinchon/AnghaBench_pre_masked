
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct agg_info {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct agg_info*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct agg_info *VAR_3, u_int VAR_4)
{
 u_int VAR_5 = 0;

 FUNC_0(VAR_4, 2, 32 << 7);

 for (; VAR_4 > 32; VAR_4 >>= 1) {
  VAR_5++;
  VAR_4++;
 }

 for (; VAR_5 < 7 && VAR_4 > 2 && !(VAR_4 & 1); VAR_4 >>= 1)
  VAR_5++;

 FUNC_1(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, VAR_1, 0x9000 |
     (VAR_5 << VAR_2) | (VAR_4 - 1));
 FUNC_1(VAR_3, VAR_0, 1);
}
