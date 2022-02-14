
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct des3_key_s {int * dk; int * ek; } ;


 int FUNC_0 (int const*,int,int ) ;

void FUNC_1(const u8 *VAR_0, struct des3_key_s *VAR_1)
{
 FUNC_0(VAR_0, 0, VAR_1->ek[0]);
 FUNC_0(VAR_0 + 8, 1, VAR_1->ek[1]);
 FUNC_0(VAR_0 + 16, 0, VAR_1->ek[2]);

 FUNC_0(VAR_0, 1, VAR_1->dk[2]);
 FUNC_0(VAR_0 + 8, 0, VAR_1->dk[1]);
 FUNC_0(VAR_0 + 16, 1, VAR_1->dk[0]);
}
