
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,char*,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_2, unsigned long VAR_3)
{
  unsigned long VAR_4 = 0;
  int VAR_5;
  char VAR_6[8*1024];
  int VAR_7;

  VAR_5 = FUNC_2 (VAR_2, VAR_1 | VAR_0);
  if (VAR_5 < 0)
    return 0;

  while ((VAR_7 = FUNC_3 (VAR_5, VAR_6, sizeof (VAR_6))) > 0)
    VAR_4 = FUNC_1 (VAR_4, VAR_6, VAR_7);

  FUNC_0 (VAR_5);

  return VAR_3 == VAR_4;
}
