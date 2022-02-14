
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct sc_info {int* blk; int psize; int rsize; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct sc_info*,int,int) ;
 int FUNC_2 (struct sc_info*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 u_int32_t VAR_12, VAR_13;
 u_int32_t VAR_14, VAR_15, VAR_16;
 u_int16_t VAR_17;




 if (VAR_9 == VAR_7) {
  VAR_17 = VAR_8->blk[0];
  VAR_15 = VAR_8->psize / 4;
  VAR_10 = VAR_3;
  VAR_11 = VAR_4;
  VAR_12 = ~VAR_1;
 }
 else {
  VAR_17 = VAR_8->blk[1];
  VAR_15 = VAR_8->rsize / 4;
  VAR_10 = VAR_5;
  VAR_11 = VAR_6;
  VAR_12 = ~VAR_2;
 }

 VAR_14 = VAR_15 - FUNC_1(VAR_8, VAR_10, 2) - 1;





 VAR_16 = VAR_17 - 1;



 FUNC_2(VAR_8, VAR_11, VAR_16, 2);
 VAR_13 = FUNC_1(VAR_8, VAR_0, 1);



 FUNC_2(VAR_8, VAR_0, VAR_13 & VAR_12, 1);





 return;
}
