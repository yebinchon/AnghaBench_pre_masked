
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  unsigned char VAR_4 = VAR_1[VAR_3];
  int VAR_5 = VAR_4 >= 'a' && VAR_4 <= 'z';
  int VAR_6 = VAR_4 >= 'A' && VAR_4 <= 'Z';
  int VAR_7 = VAR_4 >= '0' && VAR_4 <= '9';

  if (VAR_5 || VAR_6 || VAR_7) {


   VAR_0[VAR_3] = VAR_4;
  } else {




   VAR_0[VAR_3] = '_';
  }
 }
}
