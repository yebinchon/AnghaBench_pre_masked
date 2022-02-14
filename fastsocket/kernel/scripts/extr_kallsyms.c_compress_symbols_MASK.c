
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; unsigned char* sym; } ;


 unsigned char* FUNC_0 (unsigned char*,unsigned int,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*,unsigned int) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_4(unsigned char *VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 unsigned char *VAR_7, *VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

  VAR_5 = VAR_0[VAR_4].len;
  VAR_7 = VAR_0[VAR_4].sym;


  VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_2);
  if (!VAR_8) continue;


  FUNC_1(VAR_0[VAR_4].sym, VAR_5);

  VAR_6 = VAR_5;

  do {
   *VAR_8 = VAR_3;
   VAR_8++;
   VAR_6 -= (VAR_8 - VAR_7);
   FUNC_3(VAR_8, VAR_8 + 1, VAR_6);
   VAR_7 = VAR_8;
   VAR_5--;

   if (VAR_6 < 2) break;


   VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_2);

  } while (VAR_8);

  VAR_0[VAR_4].len = VAR_5;


  FUNC_2(VAR_0[VAR_4].sym, VAR_5);
 }
}
