
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arch_kexec_kseg_get; int arch_loadaddr; int arch_autoload; int arch_readin; int arch_copyout; int arch_copyin; int arch_getdev; } ;


 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (size_t const) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (void*,void*) ;

int
FUNC_6(int VAR_9, const char **VAR_10)
{
 void *VAR_11;
 const size_t VAR_12 = 15*1024*1024;
 const char *VAR_13;




 VAR_11 = FUNC_1(VAR_12);
 FUNC_5(VAR_11, VAR_11 + VAR_12);




 FUNC_0();


 if (VAR_9 > 1)
  VAR_13 = VAR_10[1];
 else
  VAR_13 = "";

 FUNC_3("Boot device: %s\n", VAR_13);

 VAR_0.arch_getdev = VAR_5;
 VAR_0.arch_copyin = VAR_3;
 VAR_0.arch_copyout = VAR_4;
 VAR_0.arch_readin = VAR_8;
 VAR_0.arch_autoload = VAR_2;
 VAR_0.arch_loadaddr = VAR_7;
 VAR_0.arch_kexec_kseg_get = VAR_6;

 FUNC_3("\n%s", VAR_1);

 FUNC_4("currdev", VAR_13, 1);
 FUNC_4("loaddev", VAR_13, 1);
 FUNC_4("LINES", "24", 1);
 FUNC_4("usefdt", "1", 1);

 FUNC_2();

 return (0);
}
