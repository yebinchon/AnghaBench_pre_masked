
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_info {int id; int caps; int se; int * mix; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct ac97_info *VAR_3)
{




 switch (VAR_3->id) {
 case 0x594d4800:
 case 0x594d4803:
  VAR_3->caps |= VAR_0;
  VAR_3->se |= 0x04;
  break;
 case 0x594d4802:
  VAR_3->se |= 0x04;
  break;
 default:
  break;
 }


 if ((VAR_3->caps & VAR_0) == 0) {
  FUNC_0(&VAR_3->mix[VAR_1],
        sizeof(VAR_3->mix[VAR_1]));
  FUNC_0(&VAR_3->mix[VAR_2],
        sizeof(VAR_3->mix[VAR_2]));
 }
}
