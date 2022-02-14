
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_plex {int org; } ;




 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct gv_plex *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0), ("gv_is_striped: NULL p"));
 switch(VAR_0->org) {
 case 128:
 case 129:
  return (1);
 default:
  return (0);
 }
}
