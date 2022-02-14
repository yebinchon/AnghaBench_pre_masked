
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int state; int vinumconf; int provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gv_volume*) ;

int
FUNC_4(struct gv_volume *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4 != ((void*)0), ("gv_set_vol_state: NULL v"));

 VAR_7 = VAR_4->state;

 if (VAR_5 == VAR_7)
  return (0);

 switch (VAR_5) {
 case 128:

  FUNC_3(VAR_4);
  if (VAR_4->state != 128 && !(VAR_6 & VAR_3))
   return (VAR_1);
  VAR_4->state = VAR_5;
  break;
 case 129:




  if (!FUNC_1(VAR_4->provider) &&
      !(VAR_6 & VAR_3))
   return (VAR_0);
  VAR_4->state = VAR_5;
  break;
 }

 if (VAR_6 & VAR_2)
  FUNC_2(VAR_4->vinumconf);
 return (0);
}
