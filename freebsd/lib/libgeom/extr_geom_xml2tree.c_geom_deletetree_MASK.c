
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gprovider {struct gprovider* lg_mode; int lg_config; int lg_consumer; struct gprovider* lg_name; int lg_provider; int lg_geom; } ;
struct gmesh {int lg_class; struct gprovider* lg_ident; } ;
struct ggeom {struct ggeom* lg_mode; int lg_config; int lg_consumer; struct ggeom* lg_name; int lg_provider; int lg_geom; } ;
struct gconsumer {struct gconsumer* lg_mode; int lg_config; int lg_consumer; struct gconsumer* lg_name; int lg_provider; int lg_geom; } ;
struct gclass {struct gclass* lg_mode; int lg_config; int lg_consumer; struct gclass* lg_name; int lg_provider; int lg_geom; } ;


 struct gprovider* FUNC_0 (int *) ;
 int FUNC_1 (struct gprovider*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gprovider*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4(struct gmesh *VAR_4)
{
 struct gclass *VAR_5;
 struct ggeom *VAR_6;
 struct gprovider *VAR_7;
 struct gconsumer *VAR_8;

 FUNC_3(VAR_4->lg_ident);
 VAR_4->lg_ident = ((void*)0);
 for (;;) {
  VAR_5 = FUNC_0(&VAR_4->lg_class);
  if (VAR_5 == ((void*)0))
   break;
  FUNC_1(VAR_5, VAR_0);
  FUNC_2(&VAR_5->lg_config);
  if (VAR_5->lg_name) FUNC_3(VAR_5->lg_name);
  for (;;) {
   VAR_6 = FUNC_0(&VAR_5->lg_geom);
   if (VAR_6 == ((void*)0))
    break;
   FUNC_1(VAR_6, VAR_2);
   FUNC_2(&VAR_6->lg_config);
   if (VAR_6->lg_name) FUNC_3(VAR_6->lg_name);
   for (;;) {
    VAR_7 = FUNC_0(&VAR_6->lg_provider);
    if (VAR_7 == ((void*)0))
     break;
    FUNC_1(VAR_7, VAR_3);
    FUNC_2(&VAR_7->lg_config);
    if (VAR_7->lg_name) FUNC_3(VAR_7->lg_name);
    if (VAR_7->lg_mode) FUNC_3(VAR_7->lg_mode);
    FUNC_3(VAR_7);
   }
   for (;;) {
    VAR_8 = FUNC_0(&VAR_6->lg_consumer);
    if (VAR_8 == ((void*)0))
     break;
    FUNC_1(VAR_8, VAR_1);
    FUNC_2(&VAR_8->lg_config);
    if (VAR_8->lg_mode) FUNC_3(VAR_8->lg_mode);
    FUNC_3(VAR_8);
   }
   FUNC_3(VAR_6);
  }
  FUNC_3(VAR_5);
 }
}
