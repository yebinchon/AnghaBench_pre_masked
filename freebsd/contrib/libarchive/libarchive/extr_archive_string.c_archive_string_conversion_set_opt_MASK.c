
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_string_conv*) ;

void
FUNC_1(struct archive_string_conv *VAR_8, int VAR_9)
{
 switch (VAR_9) {






 case 128:
  if ((VAR_8->flag & VAR_6) == 0) {
   VAR_8->flag |= VAR_6;

   FUNC_0(VAR_8);
  }

  break;
 case 130:
  if ((VAR_8->flag & VAR_2) == 0) {
   VAR_8->flag |= VAR_2;
   VAR_8->flag &= ~VAR_3;

   FUNC_0(VAR_8);
  }
  break;
 case 129:
  if ((VAR_8->flag & VAR_3) == 0) {
   VAR_8->flag |= VAR_3;
   VAR_8->flag &= ~VAR_2;

   FUNC_0(VAR_8);
  }
  break;
 default:
  break;
 }
}
