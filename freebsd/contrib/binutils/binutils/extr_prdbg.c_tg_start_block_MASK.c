
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {scalar_t__ parameter; char* filename; int f; TYPE_1__* stack; int syms; int abfd; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* parents; scalar_t__* method; int * flavor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pr_handle*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (struct pr_handle*) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (int ,char*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_2, bfd_vma VAR_3)
{
  struct pr_handle *VAR_4 = (struct pr_handle *) VAR_2;
  char VAR_5[20], VAR_6, *VAR_7;
  char *VAR_8;
  bfd_boolean VAR_9;

  if (VAR_4->parameter > 0)
    {
      VAR_4->parameter = 0;


      FUNC_1 (VAR_4->f, "%s\t%s\t", VAR_4->stack->parents, VAR_4->filename);
      FUNC_4 (VAR_4->stack->parents);

      FUNC_6 (VAR_3, VAR_5, VAR_1, VAR_1);
      FUNC_7 (VAR_4->abfd, VAR_5, VAR_4->f, VAR_4->syms);
      VAR_9 = VAR_4->stack->flavor != ((void*)0);
      if (VAR_4->stack->method && *VAR_4->stack->method)
 {
   VAR_6 = 'm';
   VAR_7 = (char *) VAR_4->stack->method;
 }
      else
 {
   VAR_6 = 'f';
   VAR_7 = ((void*)0);
   if (! VAR_4->stack->method && ! FUNC_0 (VAR_4, ")"))
     return VAR_0;
 }
      VAR_8 = FUNC_5 (VAR_4);
      if (VAR_8 == ((void*)0))
 return VAR_0;
      FUNC_1 (VAR_4->f, ";\"\tkind:%c\ttype:%s", VAR_6, VAR_8);
      if (VAR_9)
 FUNC_3 ("\tfile:", VAR_4->f);
      if (VAR_7)
 {
   FUNC_1 (VAR_4->f, "\tclass:%s", VAR_7);
   FUNC_4 (VAR_7);
 }
      FUNC_2 ('\n', VAR_4->f);
    }

  return VAR_1;
}
