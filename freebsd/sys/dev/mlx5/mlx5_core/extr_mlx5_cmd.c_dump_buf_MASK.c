
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 __be32 *VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += 16) {
  FUNC_1("%03x: %08x %08x %08x %08x\n", VAR_3, FUNC_0(VAR_4[0]),
    FUNC_0(VAR_4[1]), FUNC_0(VAR_4[2]),
    FUNC_0(VAR_4[3]));
  VAR_4 += 4;
  VAR_3 += 16;
 }
 if (!VAR_2)
  FUNC_1("\n");
}
