
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod; int rm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;

 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_2 (int ) ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (char*) ;
 int VAR_17 ;


__attribute__((used)) static void
FUNC_4 (int VAR_18, int VAR_19)
{

  char *VAR_20 = VAR_14 + FUNC_3 (VAR_14);

  switch (VAR_18)
    {
    case 129:
      if (VAR_7)
 break;

      *VAR_20++ = 'b';
      break;
    case 128:
      if (VAR_7)
 break;

      FUNC_1 (VAR_5);
      if (VAR_16 & VAR_5)
 *VAR_20++ = 'q';
      else if (VAR_19 & VAR_0)
 *VAR_20++ = 'l';
      else
 *VAR_20++ = 'w';
      VAR_17 |= (VAR_15 & VAR_3);
      break;
    default:
      FUNC_2 (VAR_1);
      break;
    }
  *VAR_20 = '\0';

  if (VAR_8.mod == 3)
    {
      int VAR_21;


      VAR_2;
      VAR_6++;

      FUNC_1 (VAR_4);
      VAR_21 = (VAR_16 & VAR_4) ? 8 : 0;
      if (VAR_18 == 129)
 {
   FUNC_1 (0);
   if (VAR_16)
     FUNC_2 (VAR_13[VAR_8.rm + VAR_21]);
   else
     FUNC_2 (VAR_12[VAR_8.rm + VAR_21]);
 }
      else
 {
   FUNC_1 (VAR_5);
   if (VAR_16 & VAR_5)
     FUNC_2 (VAR_11[VAR_8.rm + VAR_21]);
   else if ((VAR_15 & VAR_3))
     FUNC_2 (VAR_9[VAR_8.rm + VAR_21]);
   else
     FUNC_2 (VAR_10[VAR_8.rm + VAR_21]);
 }
    }
  else
    FUNC_0 (VAR_18, VAR_19);
}
