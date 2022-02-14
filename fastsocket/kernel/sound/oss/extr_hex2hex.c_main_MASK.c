
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5( int VAR_3, const char * VAR_4 [] )
{
 const char * VAR_5;
 int VAR_6,VAR_7;
 int VAR_8=0;

 if(VAR_4[1] && FUNC_4(VAR_4[1], "-i")==0)
 {
  VAR_4++;
  VAR_3--;
  VAR_8=1;
 }
 if(VAR_4[1]==((void*)0))
 {
  FUNC_1(VAR_1,"hex2hex: [-i] filename\n");
  FUNC_0(1);
 }
 VAR_5 = VAR_4[1];
 VAR_7 = FUNC_2(VAR_2, VAR_0);

 FUNC_3("/*\n *\t Computer generated file. Do not edit.\n */\n");
        FUNC_3("static int %s_len = %d;\n", VAR_5, VAR_7);
 FUNC_3("static unsigned char %s[] %s = {\n", VAR_5, VAR_8?"__initdata":"");

 for (VAR_6=0;VAR_6<VAR_7;VAR_6++)
 {
  if (VAR_6) FUNC_3(",");
  if (VAR_6 && !(VAR_6 % 16)) FUNC_3("\n");
  FUNC_3("0x%02x", VAR_0[VAR_6]);
 }

 FUNC_3("\n};\n\n");
 return 0;
}
