
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,long,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0,
      long VAR_1)
{
  FUNC_2 (VAR_0);
  FUNC_1 (VAR_0, VAR_1, 0);

  if (VAR_0[0] == 'E')
    FUNC_0 ("Remote failure reply: %s", VAR_0);
}
