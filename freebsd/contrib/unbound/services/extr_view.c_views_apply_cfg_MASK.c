
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views {int dummy; } ;
struct view {int lock; int local_zones; scalar_t__ isfirst; } ;
struct config_view {struct config_strlist* local_zones_nodefault; int * local_data; int * local_zones; scalar_t__ isfirst; int name; struct config_view* next; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
struct config_file {int local_zones_disable_default; int * local_zones; struct config_strlist* local_zones_nodefault; int * local_data; struct config_view* views; } ;
typedef int lz_cfg ;


 int FUNC_0 (int **,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct config_file*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct config_file*,int ,int) ;
 char* FUNC_7 (char*) ;
 struct view* FUNC_8 (struct views*,int ) ;

int
FUNC_9(struct views* VAR_0, struct config_file* VAR_1)
{
 struct config_view* VAR_2;
 struct view* VAR_3;
 struct config_file VAR_4;


 if(VAR_1->views && !VAR_1->views->name) {
  FUNC_5("view without a name");
  return 0;
 }
 for(VAR_2 = VAR_1->views; VAR_2; VAR_2 = VAR_2->next) {

  if(!(VAR_3 = FUNC_8(VAR_0, VAR_2->name)))
   return 0;
  VAR_3->isfirst = VAR_2->isfirst;
  if(VAR_2->local_zones || VAR_2->local_data) {
   if(!(VAR_3->local_zones = FUNC_3())){
    FUNC_4(&VAR_3->lock);
    return 0;
   }
   FUNC_6(&VAR_4, 0, sizeof(VAR_4));
   VAR_4.local_zones = VAR_2->local_zones;
   VAR_4.local_data = VAR_2->local_data;
   VAR_4.local_zones_nodefault =
    VAR_2->local_zones_nodefault;
   if(VAR_3->isfirst) {



    struct config_strlist* VAR_5;
    VAR_4.local_zones_disable_default = 1;



    for(VAR_5 = VAR_2->local_zones_nodefault; VAR_5;
     VAR_5 = VAR_5->next) {
     char* VAR_6, *VAR_7;
     VAR_6 = FUNC_7(VAR_5->str);
     if(!VAR_6) {
      FUNC_5("out of memory");
      FUNC_4(&VAR_3->lock);
      return 0;
     }
     VAR_7 = FUNC_7("nodefault");
     if(!VAR_7) {
      FUNC_5("out of memory");
      FUNC_1(VAR_6);
      FUNC_4(&VAR_3->lock);
      return 0;
     }
     if(!FUNC_0(
      &VAR_4.local_zones, VAR_6,
      VAR_7)) {
      FUNC_5("failed to insert "
       "default zones into "
       "local-zone list");
      FUNC_1(VAR_6);
      FUNC_1(VAR_7);
      FUNC_4(&VAR_3->lock);
      return 0;
     }
    }
   }
   if(!FUNC_2(VAR_3->local_zones, &VAR_4)){
    FUNC_4(&VAR_3->lock);
    return 0;
   }



   VAR_2->local_zones = ((void*)0);
   VAR_2->local_data = ((void*)0);
   VAR_2->local_zones_nodefault = ((void*)0);
  }
  FUNC_4(&VAR_3->lock);
 }
 return 1;
}
