
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void** VAR_1 ;
 int FUNC_0 (unsigned char*,int) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_1 (int VAR_3)
{
  unsigned char *VAR_4, VAR_5[VAR_0];
  int VAR_6;


  VAR_4 = VAR_5;
  *VAR_4++ = 19;
  *VAR_4++ = 1;
  *VAR_4++ = 0;
  *VAR_4++ = 0;
  for (VAR_6 = 0; VAR_6 < 4 * 6; VAR_6++)
    *VAR_4++ = VAR_1[VAR_6 + 4 * 32 + 8 * 32];
  for (VAR_6 = 0; VAR_6 < 4 * 1; VAR_6++)
    *VAR_4++ = 0;
  for (VAR_6 = 0; VAR_6 < 4 * 4; VAR_6++)
    *VAR_4++ = VAR_2[VAR_6];

  FUNC_0 (VAR_5, VAR_4 - VAR_5);


  VAR_4 = VAR_5;
  *VAR_4++ = 19;
  *VAR_4++ = 2;
  *VAR_4++ = 0;
  *VAR_4++ = 0;
  for (VAR_6 = 0; VAR_6 < 4 * 32; VAR_6++)
    *VAR_4++ = VAR_1[VAR_6];

  FUNC_0 (VAR_5, VAR_4 - VAR_5);

}
