
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_slicer {void* softc; int * start; } ;
struct g_provider {int name; } ;
struct g_geom {TYPE_1__* class; int * dumpconf; int spoiled; int orphan; int access; int start; struct g_slicer* softc; } ;
struct g_consumer {int flags; } ;
struct g_class {int dummy; } ;
typedef int g_slice_start_t ;
struct TYPE_2__ {int * destroy_geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_consumer*,int,int ,int ) ;
 int FUNC_1 (struct g_consumer*,struct g_provider*) ;
 struct g_consumer* FUNC_2 (struct g_geom*) ;
 struct g_geom* FUNC_3 (struct g_class*,char*,int ) ;
 int VAR_3 ;
 struct g_slicer* FUNC_4 (int ,int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (struct g_geom*,int ) ;

struct g_geom *
FUNC_7(struct g_class *VAR_9, u_int VAR_10, struct g_provider *VAR_11, struct g_consumer **VAR_12, void *VAR_13, int VAR_14, g_slice_start_t *VAR_15)
{
 struct g_geom *VAR_16;
 struct g_slicer *VAR_17;
 struct g_consumer *VAR_18;
 void **VAR_19;
 int VAR_20;

 FUNC_5();
 VAR_19 = (void **)VAR_13;
 VAR_16 = FUNC_3(VAR_9, "%s", VAR_11->name);
 VAR_17 = FUNC_4(VAR_10, VAR_14);
 VAR_17->start = VAR_15;
 VAR_16->softc = VAR_17;
 VAR_16->start = VAR_8;
 VAR_16->access = VAR_3;
 VAR_16->orphan = VAR_6;
 VAR_16->spoiled = VAR_7;
 if (VAR_16->dumpconf == ((void*)0))
  VAR_16->dumpconf = VAR_5;
 if (VAR_16->class->destroy_geom == ((void*)0))
  VAR_16->class->destroy_geom = VAR_4;
 VAR_18 = FUNC_2(VAR_16);
 VAR_18->flags |= VAR_2 | VAR_1;
 VAR_20 = FUNC_1(VAR_18, VAR_11);
 if (VAR_20 == 0)
  VAR_20 = FUNC_0(VAR_18, 1, 0, 0);
 if (VAR_20) {
  FUNC_6(VAR_16, VAR_0);
  return (((void*)0));
 }
 if (VAR_13 != ((void*)0))
  *VAR_19 = VAR_17->softc;
 *VAR_12 = VAR_18;
 return (VAR_16);
}
