
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event ) (int ,unsigned char*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (long) ;
 int FUNC_1 (unsigned char*,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,unsigned char*) ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_16)
{
 unsigned char VAR_17 = VAR_16[1];
 unsigned int VAR_18 = *(int *) &VAR_16[4];

 if (VAR_10 == VAR_0)
 {
  int VAR_19;

  if ((VAR_19 = VAR_14->event(VAR_15, VAR_16)) == VAR_3)
   if ((VAR_2 - VAR_9) >= VAR_6)
    FUNC_3(&VAR_12);
  return VAR_19;
 }
 switch (VAR_17)
 {
  case 128:
   VAR_18 += VAR_7;






  case 129:
   if (VAR_18 > 0)
   {
    long VAR_20;

    VAR_20 = VAR_18;
    VAR_7 = VAR_20;

    VAR_11 = 1;
    FUNC_0(VAR_20);

    if ((VAR_2 - VAR_9) >= VAR_6)
     FUNC_3(&VAR_12);
    return VAR_3;
   }
   break;

  case 132:
   VAR_13 = VAR_5;
   VAR_8 = 0;
   VAR_7 = 0;
   break;

  case 131:
   break;

  case 134:
   break;

  case 130:
   break;

  case 133:
   if (VAR_10 == VAR_0)
    FUNC_1(VAR_16, 8);
   else
   {
    VAR_18 = (VAR_18 << 8 | VAR_1);
    FUNC_1((unsigned char *) &VAR_18, 4);
   }
   break;

  default:;
 }

 return VAR_4;
}
