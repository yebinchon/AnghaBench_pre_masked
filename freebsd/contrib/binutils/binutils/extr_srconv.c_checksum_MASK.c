
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,int,int,int *) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, unsigned char *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6 = 0;
  int VAR_7 = VAR_2 / 8;

  VAR_5 = !(VAR_3 & 0xff00);
  if (VAR_2 & 0x7)
    FUNC_0 ();
  VAR_1[0] = VAR_3 | (VAR_5 ? 0x80 : 0);
  VAR_1[1] = VAR_7 + 1;

  for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
    VAR_6 += VAR_1[VAR_4];


  VAR_1[VAR_7] = ~VAR_6;
  FUNC_1 (VAR_1, VAR_7 + 1, 1, VAR_0);
}
