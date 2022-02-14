
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long constant ;
struct TYPE_4__ {int type; int constant; } ;
typedef TYPE_1__ argument ;
struct TYPE_5__ {int size; } ;


 int FUNC_0 (int,long,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long FUNC_2 (int ,int) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void
FUNC_3 (int VAR_4, int VAR_5, argument *VAR_6)
{
  unsigned long VAR_7 = 0;

  long VAR_8 = FUNC_2 (VAR_6->constant, VAR_4);

  switch (VAR_4)
    {
    case 32:
    case 28:




      VAR_7 = (1 << (VAR_4 - 16)) - 1;







      FUNC_0 (0, (VAR_8 >> VAR_1) & VAR_7, 0);
      FUNC_0 (1, (VAR_8 & 0xFFFF), VAR_1);
      break;

    case 21:
      if ((VAR_4 == 21) && (FUNC_1 (VAR_0))) VAR_4 = 20;
    case 24:
    case 22:
    case 20:




      VAR_7 = (1 << (VAR_4 - 16)) - 1;







      if ((VAR_3->size > 2) && (VAR_5 == VAR_1))
 {
   if (VAR_6->type == VAR_2)
     {
       FUNC_0 (0, ((VAR_8 >> VAR_1) & VAR_7) << 8, 0);
       FUNC_0 (1, (VAR_8 & 0xFFFF), VAR_1);
     }
   else
     {
       FUNC_0 (0, (((((VAR_8 >> VAR_1) & VAR_7) << 8) & 0x0f00) | ((((VAR_8 >> VAR_1) & VAR_7) >> 4) & 0xf)),0);
       FUNC_0 (1, (VAR_8 & 0xFFFF), VAR_1);
     }
 }
      else
 FUNC_0 (0, VAR_8, VAR_5);
      break;

    case 14:
      if (VAR_6->type == VAR_2)
 {
   if (VAR_3->size == 2)
     {
       FUNC_0 (0, ((VAR_8)&0xf), VAR_5);
       FUNC_0 (0, ((VAR_8>>4)&0x3), (VAR_5+20));
       FUNC_0 (0, ((VAR_8>>6)&0x3), (VAR_5+14));
       FUNC_0 (0, ((VAR_8>>8)&0x3f), (VAR_5+8));
     }
   else
     FUNC_0 (0, VAR_8, VAR_5);
 }
      break;

    case 16:
    case 12:
      if ((VAR_3->size > 2) && (VAR_5 == VAR_1))
 FUNC_0 (1, VAR_8, VAR_1);
      else
 FUNC_0 (0, VAR_8, VAR_5);
      break;

    case 8:
      FUNC_0 (0, ((VAR_8/2)&0xf), VAR_5);
      FUNC_0 (0, ((VAR_8/2)>>4), (VAR_5+8));
      break;

    default:
      FUNC_0 (0, VAR_8, VAR_5);
      break;
    }
}
