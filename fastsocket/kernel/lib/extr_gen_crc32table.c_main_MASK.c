
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_6, char** VAR_7)
{
 FUNC_3("/* this file is generated - do not edit */\n\n");

 if (VAR_2 > 1) {
  FUNC_1();
  FUNC_3("static const u32 crc32table_le[] = {");
  FUNC_2(VAR_5, VAR_3, "tole");
  FUNC_3("};\n");
 }

 if (VAR_1 > 1) {
  FUNC_0();
  FUNC_3("static const u32 crc32table_be[] = {");
  FUNC_2(VAR_4, VAR_0, "tobe");
  FUNC_3("};\n");
 }

 return 0;
}
