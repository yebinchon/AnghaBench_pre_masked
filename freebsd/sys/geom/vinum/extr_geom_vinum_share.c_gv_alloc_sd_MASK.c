
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_sd {int plex_offset; int size; int drive_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct gv_sd*,int) ;
 struct gv_sd* FUNC_1 (int,int ) ;
 struct gv_sd* FUNC_2 (int) ;

struct gv_sd *
FUNC_3(void)
{
 struct gv_sd *VAR_1;




 VAR_1 = FUNC_2(sizeof(struct gv_sd));

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_1, sizeof(struct gv_sd));
 VAR_1->plex_offset = -1;
 VAR_1->size = -1;
 VAR_1->drive_offset = -1;
 return (VAR_1);
}
