
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_plex {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gv_plex*,int) ;
 struct gv_plex* FUNC_1 (int,int ) ;
 struct gv_plex* FUNC_2 (int) ;

struct gv_plex *
FUNC_3(void)
{
 struct gv_plex *VAR_1;




 VAR_1 = FUNC_2(sizeof(struct gv_plex));

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_1, sizeof(struct gv_plex));
 return (VAR_1);
}
