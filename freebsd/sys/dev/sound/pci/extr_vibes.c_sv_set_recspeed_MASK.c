
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (struct sc_info*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct sc_info *VAR_4, u_int32_t VAR_5)
{
 u_int32_t VAR_6, VAR_7;
 u_int32_t VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 int32_t VAR_16, VAR_17 = 0, VAR_18, VAR_19, VAR_20, VAR_21;





 VAR_6 = VAR_1 * VAR_5;
 VAR_21 = 0x7fffffff;


 VAR_13 = 80000000 / VAR_6;
 for (VAR_8 = 1; (1 << VAR_8) < VAR_13; VAR_8++);

 VAR_13 = 150000000 / VAR_6;
 for (VAR_9 = 1; (2 << VAR_9) < VAR_13; VAR_9++);
 if (VAR_9 > 7) VAR_9 = 7;


 for (VAR_10 = VAR_8; VAR_10 <= VAR_9; VAR_10++) {
  VAR_12 = (1 << VAR_10);
  for (VAR_14 = 3; VAR_14 < 34; VAR_14++) {
   VAR_16 = VAR_6 * VAR_14 / (VAR_0 / VAR_12);
   VAR_18 = (VAR_16 > 3) ? (VAR_16 - 1) : 3;
   VAR_19 = (VAR_16 < 129) ? (VAR_16 + 1) : 129;
   for (VAR_16 = VAR_18; VAR_16 <= VAR_19; VAR_16++) {
    VAR_7 = VAR_16 * VAR_0 / (VAR_14 * VAR_12);
    if (VAR_7 > VAR_6) {
     VAR_20 = VAR_7 - VAR_6;
    } else {
     VAR_20 = VAR_6 - VAR_7;
    }
    if (VAR_20 < VAR_21) {
     VAR_11 = VAR_10;
     VAR_17 = VAR_16 - 2;
     VAR_15 = VAR_14 - 2;
     VAR_21 = VAR_20;
     if (VAR_20 == 0) break;
    }
   }
  }
 }

 FUNC_5(VAR_4, VAR_2, VAR_17);
 FUNC_5(VAR_4, VAR_3,
   FUNC_1(VAR_15) | FUNC_2(VAR_11));
 FUNC_0(FUNC_3("svrchan_setspeed: %d -> PLLM 0x%02x PLLNR 0x%08x\n",
     VAR_5,
     FUNC_4(VAR_4, VAR_2),
     FUNC_4(VAR_4, VAR_3)));
 return 0;
}
