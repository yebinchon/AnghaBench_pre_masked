
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{

 FUNC_1(VAR_1, "usage: %s ", FUNC_2());
 switch(VAR_0) {
 case 128:
     FUNC_1(VAR_1, "[-F fstab] -aLq | [-E] file ...\n");
     break;
 case 129:
     FUNC_1(VAR_1, "[-F fstab] -aLq | file ...\n");
     break;
 case 130:
     FUNC_1(VAR_1, "[-AghklmsU] [-a file ... | -d file ...]\n");
     break;
 }
 FUNC_0(1);
}
