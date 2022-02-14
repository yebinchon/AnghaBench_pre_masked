
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct nicvf {int dev; } ;



 unsigned long VAR_0 ;

 unsigned long VAR_1 ;

 unsigned long VAR_2 ;

 unsigned long VAR_3 ;

 unsigned long VAR_4 ;

 unsigned long VAR_5 ;

 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicvf*,int ,unsigned long) ;

void
FUNC_2(struct nicvf *VAR_8, int VAR_9, int VAR_10)
{
 uint64_t VAR_11 = 0;

 switch (VAR_9) {
 case 134:
  VAR_11 |= ((1UL << VAR_10) << VAR_0);
  break;
 case 129:
  VAR_11 |= ((1UL << VAR_10) << VAR_5);
  break;
 case 130:
  VAR_11 |= ((1UL << VAR_10) << VAR_4);
  break;
 case 132:
  VAR_11 |= (1UL << VAR_2);
  break;
 case 128:
  VAR_11 |= (1UL << VAR_6);
  break;
 case 133:
  VAR_11 |= (1UL << VAR_1);
  break;
 case 131:
  VAR_11 |= (1UL << VAR_3);
  break;
 default:
  FUNC_0(VAR_8->dev,
      "Failed to disable interrupt: unknown type\n");
  break;
 }

 FUNC_1(VAR_8, VAR_7, VAR_11);
}
