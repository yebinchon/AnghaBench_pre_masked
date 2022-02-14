
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int plexcount; int name; int plexes; } ;
struct gv_plex {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct gv_plex* FUNC_1 (int *) ;
 int FUNC_2 (struct gv_plex*) ;
 int FUNC_3 (struct gv_volume*) ;

int
FUNC_4(struct gv_volume *VAR_1)
{
 struct gv_plex *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1 != ((void*)0), ("gv_start_vol: NULL v"));

 VAR_3 = 0;

 if (VAR_1->plexcount == 0)
  return (VAR_0);

 else if (VAR_1->plexcount == 1) {
  VAR_2 = FUNC_1(&VAR_1->plexes);
  FUNC_0(VAR_2 != ((void*)0), ("gv_start_vol: NULL p on %s", VAR_1->name));
  VAR_3 = FUNC_2(VAR_2);
 } else
  VAR_3 = FUNC_3(VAR_1);

 return (VAR_3);
}
