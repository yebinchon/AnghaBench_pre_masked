
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_geom {int flags; int consumer; TYPE_1__* class; int name; int * orphan; } ;
struct g_consumer {int stat; struct g_geom* geom; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct g_geom*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,struct g_consumer*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct g_consumer*,int,int ,int ,int ,int ) ;
 struct g_consumer* FUNC_4 (int,int) ;
 int FUNC_5 () ;

struct g_consumer *
FUNC_6(struct g_geom *VAR_7)
{
 struct g_consumer *VAR_8;

 FUNC_5();
 FUNC_0(VAR_7);
 FUNC_1(!(VAR_7->flags & VAR_3),
     ("g_new_consumer on WITHERing geom(%s) (class %s)",
     VAR_7->name, VAR_7->class->name));
 FUNC_1(VAR_7->orphan != ((void*)0),
     ("g_new_consumer on geom(%s) (class %s) without orphan",
     VAR_7->name, VAR_7->class->name));

 VAR_8 = FUNC_4(sizeof *VAR_8, VAR_4 | VAR_5);
 VAR_8->geom = VAR_7;
 VAR_8->stat = FUNC_3(VAR_8, -1, 0, VAR_0,
     VAR_2, VAR_1);
 FUNC_2(&VAR_7->consumer, VAR_8, VAR_6);
 return(VAR_8);
}
