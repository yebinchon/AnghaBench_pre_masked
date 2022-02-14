
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; char* value; struct TYPE_4__* fow; } ;
typedef TYPE_1__ OPLIST ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_2)
{
 OPLIST *VAR_3;
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0')) {
  FUNC_2(0, "Invalid option name");
  return(-1);
 }
 if ((VAR_7 = FUNC_4(VAR_2)) == ((void*)0)) {
  FUNC_2(0, "Unable to allocate space for option list");
  return(-1);
 }
 VAR_4 = VAR_6 = VAR_7;






 while ((VAR_4 != ((void*)0)) && (*VAR_4 != '\0')) {
  if ((VAR_6 = FUNC_3(VAR_4, ',')) != ((void*)0))
   *VAR_6 = '\0';
  if ((VAR_5 = FUNC_3(VAR_4, '=')) == ((void*)0)) {
   FUNC_2(0, "Invalid options format");
   FUNC_0(VAR_7);
   return(-1);
  }
  if ((VAR_3 = (OPLIST *)FUNC_1(sizeof(OPLIST))) == ((void*)0)) {
   FUNC_2(0, "Unable to allocate space for option list");
   FUNC_0(VAR_7);
   return(-1);
  }
  VAR_7 = ((void*)0);
  *VAR_5++ = '\0';
  VAR_3->name = VAR_4;
  VAR_3->value = VAR_5;
  VAR_3->fow = ((void*)0);
  if (VAR_6 != ((void*)0))
   VAR_4 = VAR_6 + 1;
  else
   VAR_4 = ((void*)0);
  if (VAR_0 == ((void*)0)) {
   VAR_1 = VAR_0 = VAR_3;
   continue;
  }
  VAR_1->fow = VAR_3;
  VAR_1 = VAR_3;
 }
 FUNC_0(VAR_7);
 return(0);
}
