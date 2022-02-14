
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {int state; } ;
struct TYPE_2__ {int (* setter ) (struct archive*) ;int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,char*,char const*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (struct archive*) ;

int
FUNC_3(struct archive *VAR_4, const char *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_3[VAR_6].name != ((void*)0); VAR_6++) {
  if (FUNC_1(VAR_5, VAR_3[VAR_6].name) == 0)
   return ((VAR_3[VAR_6].setter)(VAR_4));
 }

 FUNC_0(VAR_4, VAR_2, "No such filter '%s'", VAR_5);
 VAR_4->state = VAR_1;
 return (VAR_0);
}
