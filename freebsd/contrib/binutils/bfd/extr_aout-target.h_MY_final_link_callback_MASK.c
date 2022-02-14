
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_exec {int dummy; } ;
typedef int file_ptr ;
typedef int bfd ;


 int FUNC_0 (struct internal_exec) ;
 int FUNC_1 (struct internal_exec) ;
 int FUNC_2 (struct internal_exec) ;
 struct internal_exec* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_0,
   file_ptr *VAR_1,
   file_ptr *VAR_2,
   file_ptr *VAR_3)
{
  struct internal_exec *VAR_4 = FUNC_3 (VAR_0);

  *VAR_1 = FUNC_2 (*VAR_4);
  *VAR_2 = FUNC_0 (*VAR_4);
  *VAR_3 = FUNC_1 (*VAR_4);
}
