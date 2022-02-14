
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static const char *
FUNC_2 (void *VAR_2, int VAR_3)
{
  int VAR_4;
  const char *VAR_5;



  if (! FUNC_1 (VAR_3, &VAR_4))
    return ((void*)0);

  VAR_5 = FUNC_0 (VAR_1, VAR_4);
  if (VAR_5)
    return VAR_0[VAR_5 - VAR_1];
  else
    return ((void*)0);
}
