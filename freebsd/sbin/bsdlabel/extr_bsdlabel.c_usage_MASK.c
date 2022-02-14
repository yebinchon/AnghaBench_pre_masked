
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_0,
 "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
 "usage: bsdlabel disk",
 "\t\t(to read label)",
 "	bsdlabel -w [-n] [-m machine] disk [type]",
 "\t\t(to write label with existing boot program)",
 "	bsdlabel -e [-n] [-m machine] disk",
 "\t\t(to edit label)",
 "	bsdlabel -R [-n] [-m machine] disk protofile",
 "\t\t(to restore label with existing boot program)",
 "	bsdlabel -B [-b boot] [-m machine] disk",
 "\t\t(to install boot program with existing on-disk label)",
 "	bsdlabel -w -B [-n] [-b boot] [-m machine] disk [type]",
 "\t\t(to write label and install boot program)",
 "	bsdlabel -R -B [-n] [-b boot] [-m machine] disk protofile",
  "\t\t(to restore label and install boot program)"
 );
 FUNC_0(1);
}
