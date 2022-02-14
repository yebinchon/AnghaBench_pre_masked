
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4 ++) {
  if (VAR_4 < 2)
   VAR_6 = 8;
  else
   VAR_6 = 16;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 ++) {

   VAR_9 = 0x04000000 | (VAR_4 << 16) | (VAR_5 << 8);
   FUNC_1(VAR_2, VAR_1, VAR_9);

   VAR_7 = 0;
   while ((VAR_7 & 0x40000000) == 0)
    VAR_7 = FUNC_0(VAR_2, VAR_1);

   VAR_8 = FUNC_0(VAR_2, VAR_0);

   *VAR_3 = VAR_4;
   VAR_3 ++;
   *VAR_3 = VAR_5;
   VAR_3 ++;
   *VAR_3 = VAR_7;
   VAR_3 ++;
   *VAR_3 = VAR_8;
   VAR_3 ++;
  }
 }
}
