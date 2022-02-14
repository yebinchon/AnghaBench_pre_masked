
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int e_flags; } ;
typedef int FILE ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,void*) ;
 char** VAR_3 ;
 char** VAR_4 ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd * VAR_5, void * VAR_6)
{
  FILE * VAR_7 = (FILE *) VAR_6;
  flagword VAR_8, VAR_9;

  FUNC_1 (VAR_5 != ((void*)0) && VAR_6 != ((void*)0));


  FUNC_3 (VAR_5, VAR_6);

  VAR_8 = FUNC_4 (VAR_5)->e_flags;
  FUNC_5 (VAR_7, FUNC_2("private flags = 0x%lx"), (long)VAR_8);

  VAR_9 = (VAR_8 & VAR_0) >> 24;
  if (VAR_9 < FUNC_0 (VAR_4))
    FUNC_5 (VAR_7, "  core: %s", VAR_4[(long)VAR_9]);

  VAR_9 = VAR_8 & VAR_1;
  if (VAR_9 < FUNC_0 (VAR_3))
    FUNC_5 (VAR_7, "  me_module: %s", VAR_3[(long)VAR_9]);

  FUNC_6 ('\n', VAR_7);

  return VAR_2;
}
