
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int * last_read_plex; int plexcount; int provider; } ;
struct gv_plex {scalar_t__ state; int vinumconf; int volume; struct gv_volume* vol_sc; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (struct gv_plex*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gv_volume*,int ) ;
 int FUNC_6 (struct gv_volume*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ) ;

int
FUNC_8(struct gv_plex *VAR_5, int VAR_6)
{
 struct gv_volume *VAR_7;

 FUNC_2();
 VAR_7 = VAR_5->vol_sc;

 if (VAR_7 == ((void*)0)) {
  FUNC_0(1, "unable to detach %s: already detached",
      VAR_5->name);
  return (0);
 }




 if (!(VAR_6 & VAR_1) && (FUNC_3(VAR_7->provider) ||
     VAR_5->state == VAR_3)) {
  FUNC_0(1, "unable to detach %s: volume %s is busy",
      VAR_5->name, VAR_5->volume);
  return (VAR_0);
 }
 VAR_7->plexcount--;

 VAR_7->last_read_plex = ((void*)0);
 FUNC_1(VAR_5, VAR_4);
 VAR_5->vol_sc = ((void*)0);
 FUNC_7(VAR_5->volume, 0, VAR_2);
 FUNC_5(VAR_7, FUNC_6(VAR_7));
 FUNC_4(VAR_5->vinumconf);
 return (0);
}
