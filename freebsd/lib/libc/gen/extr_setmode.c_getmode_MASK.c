
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_2__ {int cmd; int cmd2; int bits; } ;
typedef TYPE_1__ BITCMD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int,int) ;

mode_t
FUNC_1(const void *VAR_12, mode_t VAR_13)
{
 const BITCMD *VAR_14;
 mode_t VAR_15, VAR_16, VAR_17;

 VAR_14 = (const BITCMD *)VAR_12;
 VAR_16 = VAR_13;
 for (VAR_17 = 0;; VAR_14++)
  switch(VAR_14->cmd) {






  case 'u':
   VAR_17 = (VAR_16 & VAR_8) >> 6;
   goto common;

  case 'g':
   VAR_17 = (VAR_16 & VAR_6) >> 3;
   goto common;

  case 'o':
   VAR_17 = VAR_16 & VAR_7;
common: if (VAR_14->cmd2 & VAR_0) {
    VAR_15 =
        (VAR_14->cmd2 & VAR_3) ? VAR_7 : VAR_17;
    if (VAR_14->cmd2 & VAR_4)
     VAR_16 &= ~((VAR_15<<6) & VAR_14->bits);
    if (VAR_14->cmd2 & VAR_1)
     VAR_16 &= ~((VAR_15<<3) & VAR_14->bits);
    if (VAR_14->cmd2 & VAR_2)
     VAR_16 &= ~(VAR_15 & VAR_14->bits);
   }
   if (VAR_14->cmd2 & VAR_3) {
    if (VAR_14->cmd2 & VAR_4)
     VAR_16 |= (VAR_17<<6) & VAR_14->bits;
    if (VAR_14->cmd2 & VAR_1)
     VAR_16 |= (VAR_17<<3) & VAR_14->bits;
    if (VAR_14->cmd2 & VAR_2)
     VAR_16 |= VAR_17 & VAR_14->bits;
   }
   break;

  case '+':
   VAR_16 |= VAR_14->bits;
   break;

  case '-':
   VAR_16 &= ~VAR_14->bits;
   break;

  case 'X':
   if (VAR_13 & (VAR_5|VAR_11|VAR_9|VAR_10))
    VAR_16 |= VAR_14->bits;
   break;

  case '\0':
  default:



   return (VAR_16);
  }
}
