
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {char* (* construct_inferior_arguments ) (struct gdbarch*,int,char**) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (struct gdbarch*,int,char**) ;

char *
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, char **VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->construct_inferior_arguments != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_construct_inferior_arguments called\n");
  return VAR_2->construct_inferior_arguments (VAR_2, VAR_3, VAR_4);
}
