
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_consumer {TYPE_2__* provider; } ;
struct g_class {char* name; } ;
typedef int ident ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_class* class; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct g_consumer*,int*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,size_t,char*,char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static void
FUNC_4(struct g_consumer *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct g_class *VAR_5;
 char VAR_6[VAR_0];
 int VAR_7, VAR_8, VAR_9;

 FUNC_1();
 VAR_3[0] = '\0';

 VAR_5 = VAR_2->provider->geom->class;





 VAR_7 = sizeof(VAR_6);
 if (FUNC_0("GEOM::ident", VAR_2, &VAR_7, VAR_6) == 0) {
  if (VAR_7 == 0 || VAR_6[0] == '\0')
   return;
  for (VAR_9 = 0, VAR_8 = 0; VAR_1[VAR_9] != ((void*)0); VAR_9++)
   if (FUNC_3(VAR_1[VAR_9], VAR_5->name) == 0) {
    VAR_8 = 1;
    break;
   }
  if (!VAR_8)
   return;




  (void)FUNC_2(VAR_3, VAR_4, "%s-%s", VAR_5->name, VAR_6);
 }
}
