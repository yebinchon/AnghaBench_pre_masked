
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (char*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0, int VAR_1, CORE_ADDR VAR_2, unsigned char *VAR_3,
  int VAR_4)
{
  unsigned char VAR_5;
  int VAR_6;





  VAR_0[0] = 'S';
  VAR_0[1] = VAR_1;
  VAR_0[2] = VAR_4 + 4 + 1;



  VAR_0[3] = VAR_2 >> 24;
  VAR_0[4] = VAR_2 >> 16;
  VAR_0[5] = VAR_2 >> 8;
  VAR_0[6] = VAR_2;
  FUNC_0 (&VAR_0[7], VAR_3, VAR_4);




  VAR_5 = 0;
  VAR_0 += 2;
  for (VAR_6 = 0; VAR_6 < VAR_4 + 4 + 1; VAR_6++)
    VAR_5 += *VAR_0++;

  *VAR_0 = ~VAR_5;

  return VAR_4 + 8;
}
