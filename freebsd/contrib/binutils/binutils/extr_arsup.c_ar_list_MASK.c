
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* archive_next; } ;
typedef TYPE_1__ bfd ;
struct TYPE_7__ {TYPE_1__* archive_head; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_6 (void)
{
  if (!VAR_0)
    {
      FUNC_3 (VAR_3, FUNC_0("%s: no open output archive\n"), VAR_2);
      FUNC_4 ();
    }
  else
    {
      bfd *VAR_6;

      VAR_1 = VAR_4;
      VAR_5 =1 ;
      FUNC_5 (FUNC_0("Current open archive is %s\n"), FUNC_2 (VAR_0));

      for (VAR_6 = VAR_0->archive_head;
    VAR_6 != (bfd *)((void*)0);
    VAR_6 = VAR_6->archive_next)
 FUNC_1 (VAR_6, (bfd *) ((void*)0));
    }
}
