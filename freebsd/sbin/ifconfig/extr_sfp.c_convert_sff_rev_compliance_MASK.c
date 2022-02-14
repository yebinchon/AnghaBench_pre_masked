
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1, size_t VAR_2, uint8_t VAR_3)
{
 const char *VAR_4;

 if (VAR_3 > 0x07)
  VAR_4 = "Unallocated";
 else
  VAR_4 = FUNC_0(VAR_0, VAR_3);

 FUNC_1(VAR_1, VAR_2, "%s", VAR_4);
}
