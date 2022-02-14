
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int e_flags; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,void*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_3, void * VAR_4)
{
  FILE *VAR_5 = (FILE *) VAR_4;

  FUNC_0 (VAR_3 != ((void*)0) && VAR_4 != ((void*)0));


  FUNC_2 (VAR_3, VAR_4);


  FUNC_4 (VAR_5, FUNC_1("private flags = %lx:"), FUNC_3 (VAR_3)->e_flags);
  if (FUNC_3 (VAR_3)->e_flags & VAR_1)
    {
      FUNC_4 (VAR_5, FUNC_1(" [pic]"));
    }
  if (FUNC_3 (VAR_3)->e_flags & VAR_0)
    {
      FUNC_4 (VAR_5, FUNC_1(" [fix dep]"));
    }
  FUNC_5 ('\n', VAR_5);

  return VAR_2;
}
