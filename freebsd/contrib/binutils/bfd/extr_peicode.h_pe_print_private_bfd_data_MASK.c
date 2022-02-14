
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef int bfd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (int *,void*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_2, void * VAR_3)
{
  FILE *VAR_4 = (FILE *) VAR_3;

  if (!FUNC_0 (VAR_2, VAR_3))
    return VAR_0;

  if (&FUNC_2 == ((void*)0))
    return VAR_1;

  FUNC_1 ('\n', VAR_4);

  return FUNC_2 (VAR_2, VAR_3);
}
