
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char FUNC_0 (unsigned char const) ;

__attribute__((used)) static void FUNC_1(char *VAR_1, const unsigned char *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      VAR_1[2 * VAR_3] = FUNC_0((VAR_2[VAR_3] >> 4) & 0xf);
      VAR_1[2 * VAR_3 + 1] = FUNC_0(VAR_2[VAR_3] & 0xf);
    }
}
