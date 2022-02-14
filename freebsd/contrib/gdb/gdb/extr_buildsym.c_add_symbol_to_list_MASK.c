
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct symbol {TYPE_1__ ginfo; } ;
struct pending {scalar_t__ nsyms; struct symbol** symbol; struct pending* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 struct pending* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3 (struct symbol *VAR_3, struct pending **VAR_4)
{
  struct pending *VAR_5;


  if (VAR_3->ginfo.name && VAR_3->ginfo.name[0] == '#')
    return;



  if (*VAR_4 == ((void*)0) || (*VAR_4)->nsyms == VAR_0)
    {
      if (VAR_1)
 {
   VAR_5 = VAR_1;
   VAR_1 = VAR_5->next;
 }
      else
 {
   VAR_5 = (struct pending *) FUNC_2 (sizeof (struct pending));
 }

      VAR_5->next = *VAR_4;
      *VAR_4 = VAR_5;
      VAR_5->nsyms = 0;
    }

  (*VAR_4)->symbol[(*VAR_4)->nsyms++] = VAR_3;




  if (FUNC_0 (VAR_3) == VAR_2)
    FUNC_1 (VAR_3);
}
