
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_sd {scalar_t__ state; int vinumconf; int plex; struct gv_plex* plex_sc; int name; } ;
struct gv_plex {scalar_t__ state; int sddetached; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (struct gv_sd*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;

int
FUNC_5(struct gv_sd *VAR_6, int VAR_7)
{
 struct gv_plex *VAR_8;

 FUNC_2();
 VAR_8 = VAR_6->plex_sc;

 if (VAR_8 == ((void*)0)) {
  FUNC_0(1, "unable to detach %s: already detached",
      VAR_6->name);
  return (0);
 }





 if (!(VAR_7 & VAR_1) && ((VAR_8->state > VAR_3) ||
     ((VAR_8->state == VAR_3) && (VAR_6->state == VAR_4)))) {
      FUNC_0(1, "unable to detach %s: plex %s is busy",
      VAR_6->name, VAR_6->plex);
  return (VAR_0);
 }

 FUNC_1(VAR_6, VAR_5);
 VAR_6->plex_sc = ((void*)0);
 FUNC_4(VAR_6->plex, 0, VAR_2);
 VAR_8->sddetached++;
 FUNC_3(VAR_6->vinumconf);
 return (0);
}
