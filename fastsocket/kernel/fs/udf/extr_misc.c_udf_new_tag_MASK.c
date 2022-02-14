
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct tag {int tagLocation; void* tagSerialNum; void* descVersion; void* tagIdent; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(char *VAR_0, uint16_t VAR_1, uint16_t VAR_2, uint16_t VAR_3,
   uint32_t VAR_4, int VAR_5)
{
 struct tag *VAR_6 = (struct tag *)VAR_0;
 VAR_6->tagIdent = FUNC_0(VAR_1);
 VAR_6->descVersion = FUNC_0(VAR_2);
 VAR_6->tagSerialNum = FUNC_0(VAR_3);
 VAR_6->tagLocation = FUNC_1(VAR_4);
 FUNC_2(VAR_0, VAR_5);
}
