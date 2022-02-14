
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (char *VAR_3, int VAR_4)
{
  int VAR_5;

  VAR_5 = FUNC_2 (VAR_3, sizeof (char), VAR_4, VAR_1);
  if (VAR_5 < 0)
    {
      FUNC_1 (FUNC_0("can't read from %s: %s"), VAR_2, FUNC_3 (VAR_0));
      VAR_5 = 0;
    }
  return VAR_5;
}
