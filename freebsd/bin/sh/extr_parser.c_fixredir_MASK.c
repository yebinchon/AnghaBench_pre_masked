
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dupfd; int * vname; } ;
union node {TYPE_1__ ndup; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;

void
FUNC_5(union node *VAR_0, const char *VAR_1, int VAR_2)
{
 FUNC_0(("Fix redir %s %d\n", VAR_1, VAR_2));
 if (!VAR_2)
  VAR_0->ndup.vname = ((void*)0);

 if (FUNC_2(VAR_1[0]) && VAR_1[1] == '\0')
  VAR_0->ndup.dupfd = FUNC_1(VAR_1[0]);
 else if (VAR_1[0] == '-' && VAR_1[1] == '\0')
  VAR_0->ndup.dupfd = -1;
 else {

  if (VAR_2)
   FUNC_4("Bad fd number");
  else
   VAR_0->ndup.vname = FUNC_3();
 }
}
