
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvfsconf {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char*,struct xvfsconf*) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*,unsigned int,unsigned int) ;
 int FUNC_8 (char*,unsigned int*,size_t*,unsigned int*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,unsigned int,unsigned int) ;

int
FUNC_11(int VAR_3, char *VAR_4[])
{
 int VAR_5;
 struct xvfsconf VAR_6;
 int VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 size_t VAR_11;

 VAR_7 = FUNC_5("nfs", &VAR_6);
 if (VAR_7) {
  if (FUNC_6("nfs") == -1)
   FUNC_1(1, "kldload(nfs)");
  VAR_7 = FUNC_5("nfs", &VAR_6);
 }
 if (VAR_7)
  FUNC_2(1, "NFS support is not available in the running kernel");

 VAR_10 = 0;
 while ((VAR_5 = FUNC_4(VAR_3, VAR_4, "n:")) != -1)
  switch (VAR_5) {
  case 'n':
   VAR_10 = FUNC_0(VAR_1);
   if (VAR_10 < 1) {
    FUNC_10("nfsiod count %u; reset to %d",
        VAR_10, 1);
    VAR_10 = 1;
   }
   if (VAR_10 > VAR_0) {
    FUNC_10("nfsiod count %u; reset to %d",
        VAR_10, VAR_0);
    VAR_10 = VAR_0;
   }
   break;
  case '?':
  default:
   FUNC_9();
  }
 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (VAR_3 > 0)
  FUNC_9();

 VAR_11 = sizeof VAR_8;
 VAR_7 = FUNC_8("vfs.nfs.iodmin", &VAR_8, &VAR_11, ((void*)0), 0);
 if (VAR_7 < 0)
  FUNC_1(1, "sysctlbyname(\"vfs.nfs.iodmin\")");
 VAR_11 = sizeof VAR_9;
 VAR_7 = FUNC_8("vfs.nfs.iodmax", &VAR_9, &VAR_11, ((void*)0), 0);
 if (VAR_7 < 0)
  FUNC_1(1, "sysctlbyname(\"vfs.nfs.iodmax\")");
 if (VAR_10 == 0) {
  FUNC_7("vfs.nfs.iodmin=%u\nvfs.nfs.iodmax=%u\n",
      VAR_8, VAR_9);
  FUNC_3(0);
 }

 if (VAR_8 > VAR_10) {
  VAR_8 = VAR_10;
  VAR_7 = FUNC_8("vfs.nfs.iodmin", ((void*)0), 0, &VAR_8,
      sizeof VAR_8);
  if (VAR_7 < 0)
   FUNC_1(1, "sysctlbyname(\"vfs.nfs.iodmin\")");
 }
 VAR_9 = VAR_10;
 VAR_7 = FUNC_8("vfs.nfs.iodmax", ((void*)0), 0, &VAR_9, sizeof VAR_9);
 if (VAR_7 < 0)
  FUNC_1(1, "sysctlbyname(\"vfs.nfs.iodmax\")");
 FUNC_3 (0);
}
