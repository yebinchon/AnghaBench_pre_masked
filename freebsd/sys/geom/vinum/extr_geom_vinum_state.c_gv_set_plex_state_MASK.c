
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int plexcount; } ;
struct gv_plex {int state; int vinumconf; struct gv_volume* vol_sc; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gv_volume*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gv_plex*) ;
 int FUNC_4 (struct gv_volume*) ;

int
FUNC_5(struct gv_plex *VAR_3, int VAR_4, int VAR_5)
{
 struct gv_volume *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_3 != ((void*)0), ("gv_set_plex_state: NULL p"));

 VAR_7 = VAR_3->state;
 VAR_6 = VAR_3->vol_sc;
 VAR_8 = 0;

 if (VAR_4 == VAR_7)
  return (0);

 switch (VAR_4) {
 case 128:

  FUNC_3(VAR_3);
  if (VAR_3->state != 128 && !(VAR_5 & VAR_2))
   return (VAR_0);
  VAR_3->state = VAR_4;
  break;
 case 129:




  if (VAR_6 != ((void*)0)) {

   VAR_8 = FUNC_1(VAR_6);
   if ((VAR_6->plexcount == 1 ||
       (VAR_6->plexcount - VAR_8 == 1)) &&
       ((VAR_5 & VAR_2) == 0))
    return (VAR_0);
  }
  VAR_3->state = VAR_4;
  break;
 case 130:

  if (VAR_5 & VAR_2)
   VAR_3->state = VAR_4;
  break;
 }


 if (VAR_6 != ((void*)0))
  FUNC_4(VAR_6);


 if (VAR_5 & VAR_1)
  FUNC_2(VAR_3->vinumconf);
 return (0);
}
