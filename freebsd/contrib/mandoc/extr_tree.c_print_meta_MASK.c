
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_meta {char* title; char* name; char* msec; char* vol; char* arch; char* os; char* date; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(const struct roff_meta *VAR_0)
{
 if (VAR_0->title != ((void*)0))
  FUNC_0("title = \"%s\"\n", VAR_0->title);
 if (VAR_0->name != ((void*)0))
  FUNC_0("name  = \"%s\"\n", VAR_0->name);
 if (VAR_0->msec != ((void*)0))
  FUNC_0("sec   = \"%s\"\n", VAR_0->msec);
 if (VAR_0->vol != ((void*)0))
  FUNC_0("vol   = \"%s\"\n", VAR_0->vol);
 if (VAR_0->arch != ((void*)0))
  FUNC_0("arch  = \"%s\"\n", VAR_0->arch);
 if (VAR_0->os != ((void*)0))
  FUNC_0("os    = \"%s\"\n", VAR_0->os);
 if (VAR_0->date != ((void*)0))
  FUNC_0("date  = \"%s\"\n", VAR_0->date);
}
