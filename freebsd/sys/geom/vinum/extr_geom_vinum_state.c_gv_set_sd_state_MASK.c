
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_sd {int state; int flags; int vinumconf; struct gv_plex* plex_sc; struct gv_drive* drive_sc; } ;
struct gv_plex {int flags; int org; int synced; TYPE_1__* vol_sc; } ;
struct gv_drive {int state; } ;
struct TYPE_2__ {int plexcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gv_plex*) ;

int
FUNC_3(struct gv_sd *VAR_9, int VAR_10, int VAR_11)
{
 struct gv_drive *VAR_12;
 struct gv_plex *VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_9 != ((void*)0), ("gv_set_sd_state: NULL s"));

 VAR_14 = VAR_9->state;


 VAR_15 = 0;

 if (VAR_10 == VAR_14)
  return (0);

 switch (VAR_10) {
 case 132:




  if ((VAR_9->plex_sc != ((void*)0)) && !(VAR_11 & VAR_8))
   return (VAR_2);
  break;

 case 130:
 case 131:




  if (!(VAR_11 & VAR_8))
   return (VAR_3);
  break;

 case 128:

  VAR_12 = VAR_9->drive_sc;
  if ((VAR_12 == ((void*)0)) || (VAR_12->state != VAR_0))
   return (VAR_3);


  switch (VAR_9->state) {
  case 130:
  case 131:




   break;

  case 132:




   VAR_13 = VAR_9->plex_sc;
   if (VAR_13 == ((void*)0))
    break;







   if (VAR_13->org != VAR_4)
    break;
   else if (VAR_9->flags & VAR_6) {
    VAR_9->flags &= ~VAR_6;
    break;
   } else if (VAR_11 & VAR_8)
    break;
   else
    VAR_9->state = 129;

   VAR_15 = VAR_3;
   break;

  case 129:







   VAR_13 = VAR_9->plex_sc;
   if (VAR_13 == ((void*)0) || VAR_11 & VAR_8)
    break;

   if ((VAR_13->org != VAR_4 &&
       VAR_13->vol_sc->plexcount == 1) ||
       (VAR_13->flags & VAR_5 &&
       VAR_13->synced > 0 &&
       VAR_13->org == VAR_4))
    break;
   else
    return (VAR_3);

  default:
   return (VAR_1);
  }
  break;


 default:
  if (!(VAR_11 & VAR_8))
   return (VAR_3);
 }


 if (VAR_15 == 0)
  VAR_9->state = VAR_10;


 if (VAR_9->plex_sc != ((void*)0))
  FUNC_2(VAR_9->plex_sc);


 if (VAR_11 & VAR_7)
  FUNC_1(VAR_9->vinumconf);

 return (VAR_15);
}
