
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subfile {char* dirname; char* name; scalar_t__ language; TYPE_1__* next; } ;
struct TYPE_2__ {scalar_t__ language; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (struct subfile *VAR_2, char *VAR_3)
{
  if (VAR_2 != ((void*)0) && VAR_2->dirname == ((void*)0) && VAR_2->name != ((void*)0)
      && VAR_2->name[FUNC_2 (VAR_2->name) - 1] == '/')
    {
      VAR_2->dirname = VAR_2->name;
      VAR_2->name = FUNC_1 (VAR_3, FUNC_2 (VAR_3));
      VAR_1 = VAR_3;
      VAR_2->language = FUNC_0 (VAR_2->name);
      if (VAR_2->language == VAR_0 &&
   VAR_2->next != ((void*)0))
 {
   VAR_2->language = VAR_2->next->language;
 }
    }
}
