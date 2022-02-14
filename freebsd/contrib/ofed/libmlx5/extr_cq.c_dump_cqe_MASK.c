
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_0, void *VAR_1)
{
 uint32_t *VAR_2 = VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3 += 4)
  FUNC_1(VAR_0, "%08x %08x %08x %08x\n", FUNC_0(VAR_2[VAR_3]), FUNC_0(VAR_2[VAR_3 + 1]),
   FUNC_0(VAR_2[VAR_3 + 2]), FUNC_0(VAR_2[VAR_3 + 3]));
}
