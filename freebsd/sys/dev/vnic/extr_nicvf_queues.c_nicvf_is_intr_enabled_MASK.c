
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nicvf {int dev; } ;



 unsigned long VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 unsigned long VAR_4 ;

 unsigned long VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicvf*,int ) ;

int
FUNC_2(struct nicvf *VAR_8, int VAR_9, int VAR_10)
{
 uint64_t VAR_11;
 uint64_t VAR_12 = 0xff;

 VAR_11 = FUNC_1(VAR_8, VAR_7);

 switch (VAR_9) {
 case 134:
  VAR_12 = ((1UL << VAR_10) << VAR_0);
  break;
 case 129:
  VAR_12 = ((1UL << VAR_10) << VAR_5);
  break;
 case 130:
  VAR_12 = ((1UL << VAR_10) << VAR_4);
  break;
 case 132:
  VAR_12 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 case 133:
  VAR_12 = VAR_1;
  break;
 case 131:
  VAR_12 = VAR_3;
  break;
 default:
  FUNC_0(VAR_8->dev,
      "Failed to check interrupt enable: unknown type\n");
  break;
 }

 return (VAR_11 & VAR_12);
}
