
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nicvf {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nicvf*,int,int) ;

__attribute__((used)) static int FUNC_3(struct nicvf *VAR_1, int VAR_2,
     uint64_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 uint64_t VAR_7;
 uint64_t VAR_8;
 int VAR_9 = 10;

 VAR_7 = (1UL << VAR_5) - 1;
 VAR_7 = (VAR_7 << VAR_4);

 while (VAR_9) {
  VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_2);
  if (((VAR_8 & VAR_7) >> VAR_4) == VAR_6)
   return (0);

  FUNC_0(1000);
  VAR_9--;
 }
 FUNC_1(VAR_1->dev, "Poll on reg 0x%lx failed\n", VAR_3);
 return (VAR_0);
}
