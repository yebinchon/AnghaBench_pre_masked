
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj_id; scalar_t__ object_type; } ;
typedef TYPE_1__ ses_object ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,char*) ;
 int VAR_3 ;

int
FUNC_9(int VAR_4, char **VAR_5)
{
 ses_object *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 while (*++VAR_5) {
  VAR_8 = FUNC_6(*VAR_5, VAR_0);
  if (VAR_8 < 0) {
   FUNC_7(*VAR_5);
   continue;
  }
  if (FUNC_5(VAR_8, VAR_1, (caddr_t) &VAR_7) < 0) {
   FUNC_7("SESIOC_GETNOBJ");
   (void) FUNC_1(VAR_8);
   continue;
  }
  FUNC_2(VAR_3, "%s: %d objects\n", *VAR_5, VAR_7);
  if (VAR_7 == 0) {
   (void) FUNC_1(VAR_8);
   continue;
  }
  VAR_6 = FUNC_0(VAR_7, sizeof (ses_object));
  if (VAR_6 == ((void*)0)) {
   FUNC_7("calloc");
   (void) FUNC_1(VAR_8);
   continue;
  }
  if (FUNC_5(VAR_8, VAR_2, (caddr_t) VAR_6) < 0) {
   FUNC_7("SESIOC_GETOBJMAP");
   (void) FUNC_1(VAR_8);
   continue;
  }
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   FUNC_8(" Object %d: ID 0x%x Type '%s'\n", VAR_9,
       VAR_6[VAR_9].obj_id, FUNC_4((int)VAR_6[VAR_9].object_type));
  }
  FUNC_3(VAR_6);
  (void) FUNC_1(VAR_8);
 }
 return (0);
}
