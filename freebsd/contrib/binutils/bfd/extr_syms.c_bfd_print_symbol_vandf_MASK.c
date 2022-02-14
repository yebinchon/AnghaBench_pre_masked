
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd ;
struct TYPE_5__ {int flags; scalar_t__ value; TYPE_1__* section; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_4__ {scalar_t__ vma; } ;
typedef int FILE ;


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
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,char*,char,char,char,char,char,char,float) ;

void
FUNC_2 (bfd *VAR_11, void *VAR_12, asymbol *VAR_13)
{
  FILE *VAR_14 = VAR_12;

  flagword VAR_15 = VAR_13->flags;

  if (VAR_13->section != ((void*)0))
    FUNC_0 (VAR_11, VAR_14, VAR_13->value + VAR_13->section->vma);
  else
    FUNC_0 (VAR_11, VAR_14, VAR_13->value);




  FUNC_1 (VAR_14, " %c%c%c%c%c%c%c",
    ((VAR_15 & VAR_7)
     ? (VAR_15 & VAR_5) ? '!' : 'l'
     : (VAR_15 & VAR_5) ? 'g' : ' '),
    (VAR_15 & VAR_10) ? 'w' : ' ',
    (VAR_15 & VAR_0) ? 'C' : ' ',
    (VAR_15 & VAR_9) ? 'W' : ' ',
    (VAR_15 & VAR_6) ? 'I' : ' ',
    (VAR_15 & VAR_1) ? 'd' : (VAR_15 & VAR_2) ? 'D' : ' ',
    ((VAR_15 & VAR_4)
     ? 'F'
     : ((VAR_15 & VAR_3)
        ? 'f'
        : ((VAR_15 & VAR_8) ? 'O' : ' '))));
}
