
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3 (char **VAR_0)
{
  char *VAR_1;

  if (((*VAR_0)[0] != 'i') || ((*VAR_0)[1] != 'f') || !FUNC_1 ((*VAR_0)[2]))
    return ((void*)0);


  (*VAR_0) += 2;



  FUNC_0 (VAR_0);
  VAR_1 = *VAR_0;


  (*VAR_0) += FUNC_2 (VAR_1);

  return VAR_1;
}
