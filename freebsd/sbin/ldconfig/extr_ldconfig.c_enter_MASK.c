
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shlib_list {char* name; scalar_t__ major; int ndewey; int minor; char* path; struct shlib_list* next; int dewey; } ;


 int FUNC_0 (int*,int ,int) ;
 scalar_t__ FUNC_1 (int*,int,int ,int) ;
 void* FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,char*,char*,...) ;
 struct shlib_list* VAR_1 ;
 struct shlib_list** VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 void* FUNC_6 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_4, char *VAR_5, char *VAR_6, int VAR_7[], int VAR_8)
{
 struct shlib_list *VAR_9;

 for (VAR_9 = VAR_1; VAR_9; VAR_9 = VAR_9->next) {
  if (FUNC_5(VAR_6, VAR_9->name) != 0 || VAR_0 != VAR_9->major)
   continue;


  if (FUNC_1(VAR_7, VAR_8, VAR_9->dewey, VAR_9->ndewey) > 0) {


   if (VAR_3)
    FUNC_4("Updating lib%s.%d.%d to %s/%s\n",
     VAR_9->name, VAR_9->major, VAR_9->minor,
     VAR_4, VAR_5);

   FUNC_3(VAR_9->name);
   VAR_9->name = FUNC_6(VAR_6);
   FUNC_3(VAR_9->path);
   VAR_9->path = FUNC_2(VAR_4, "/", VAR_5);
   FUNC_0(VAR_7, VAR_9->dewey, sizeof(VAR_9->dewey));
   VAR_9->ndewey = VAR_8;
  }
  break;
 }

 if (VAR_9)

  return;


 if (VAR_3)
  FUNC_4("Adding %s/%s\n", VAR_4, VAR_5);

 VAR_9 = (struct shlib_list *)FUNC_7(sizeof *VAR_9);
 VAR_9->name = FUNC_6(VAR_6);
 VAR_9->path = FUNC_2(VAR_4, "/", VAR_5);
 FUNC_0(VAR_7, VAR_9->dewey, sizeof(VAR_9->dewey));
 VAR_9->ndewey = VAR_8;
 VAR_9->next = ((void*)0);

 *VAR_2 = VAR_9;
 VAR_2 = &VAR_9->next;
}
