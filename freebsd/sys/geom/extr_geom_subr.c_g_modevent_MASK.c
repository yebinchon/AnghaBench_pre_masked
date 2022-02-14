
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_hh00 {int post; int error; struct g_class* mp; } ;
struct g_class {scalar_t__ version; char* name; int geom; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct g_hh00*) ;
 int FUNC_3 () ;
 int VAR_7 ;
 struct g_hh00* FUNC_4 (int,int) ;
 int FUNC_5 (int ,struct g_hh00*,int,int *) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (struct g_class*) ;
 int FUNC_8 (int ,struct g_hh00*,int,int *) ;
 int FUNC_9 (char*,char*,scalar_t__) ;

int
FUNC_10(module_t VAR_8, int VAR_9, void *VAR_10)
{
 struct g_hh00 *VAR_11;
 int VAR_12;
 static int VAR_13;
 struct g_class *VAR_14;

 VAR_14 = VAR_10;
 if (VAR_14->version != VAR_3) {
  FUNC_9("GEOM class %s has Wrong version %x\n",
      VAR_14->name, VAR_14->version);
  return (VAR_0);
 }
 if (!VAR_13) {
  VAR_13++;
  FUNC_3();
 }
 VAR_12 = VAR_1;
 switch (VAR_9) {
 case 129:
  FUNC_6(VAR_2, "g_modevent(%s, LOAD)", VAR_14->name);
  VAR_11 = FUNC_4(sizeof *VAR_11, VAR_4 | VAR_5);
  VAR_11->mp = VAR_14;





  if (VAR_6) {
   VAR_11->post = 1;
   VAR_12 = FUNC_5(VAR_7, VAR_11, VAR_4, ((void*)0));
  } else {
   VAR_12 = FUNC_8(VAR_7, VAR_11, VAR_4,
       ((void*)0));
   if (VAR_12 == 0)
    VAR_12 = VAR_11->error;
   FUNC_2(VAR_11);
  }
  break;
 case 128:
  FUNC_6(VAR_2, "g_modevent(%s, UNLOAD)", VAR_14->name);
  VAR_12 = FUNC_7(VAR_14);
  if (VAR_12 == 0) {
   FUNC_0(FUNC_1(&VAR_14->geom),
       ("Unloaded class (%s) still has geom", VAR_14->name));
  }
  break;
 }
 return (VAR_12);
}
