
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpbuf ;
typedef int atf_tc_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(const atf_tc_t *VAR_3, void *VAR_4, const char *VAR_5, int VAR_6)
{
 char VAR_7[128];
 int VAR_8;


 FUNC_0("RUMP_SERVER", VAR_0, 1);
 FUNC_1(VAR_7, sizeof(VAR_7)-1, "blanket=/dev/zfs:%s:%s",
     VAR_1, VAR_5);
 FUNC_0("RUMPHIJACK", VAR_7, 1);
 FUNC_0("LD_PRELOAD", "/usr/lib/librumphijack.so", 1);

 while (*VAR_5 == '/')
  VAR_5++;


 FUNC_1(VAR_7, sizeof(VAR_7)-1, "zpool create %s %s",
     VAR_5, VAR_1);
 if ((VAR_8 = FUNC_2(VAR_7)) != 0) {
  VAR_2 = VAR_8;
  return -1;
 }

 return 0;
}
