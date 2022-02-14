
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, int VAR_1, char *VAR_2)
{
 int VAR_3;

 if (VAR_0 >= VAR_1)
  return;

 for (VAR_3 = VAR_0; VAR_3 < ((VAR_0 + 7) & ~7UL); VAR_3++)
  FUNC_1(VAR_2, VAR_3);
 if (VAR_3 < VAR_1)
  FUNC_0(VAR_2 + (VAR_3 >> 3), 0xff, (VAR_1 - VAR_3) >> 3);
}
