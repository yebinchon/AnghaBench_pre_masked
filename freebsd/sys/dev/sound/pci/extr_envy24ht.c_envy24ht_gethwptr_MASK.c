
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int psize; int rsize; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sc_info*,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct sc_info *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 u_int32_t VAR_9, VAR_10;




 if (VAR_6 == VAR_4) {
  VAR_10 = VAR_5->psize / 4;
  VAR_7 = VAR_2 / 4;
  VAR_8 = VAR_0;
 }
 else {
  VAR_10 = VAR_5->rsize / 4;
  VAR_7 = VAR_3 / 4;
  VAR_8 = VAR_1;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_8, 2);
 VAR_10 -= (VAR_9 + 1);
 VAR_10 /= VAR_7;




 return VAR_10;
}
