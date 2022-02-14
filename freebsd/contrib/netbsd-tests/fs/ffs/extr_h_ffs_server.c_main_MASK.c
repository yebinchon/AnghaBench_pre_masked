
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uargs ;
struct ufs_args {int fspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int FUNC_1 (char*,int) ;
 int VAR_8 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int ,struct ufs_args*,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_12, char **VAR_13)
{
 int VAR_14;
 struct ufs_args VAR_15;
 const char *VAR_16;
 const char *VAR_17;
 int VAR_18 = 0;
 int VAR_19;

 while ((VAR_19 = FUNC_3(VAR_12, VAR_13, "bl")) != -1) {
  switch(VAR_19) {
  case 'b':
   VAR_7 = 1;
   break;
  case 'l':
   VAR_18 = 1;
   break;
  default:
   FUNC_16();
  }
 }
 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;

 if (VAR_12 != 2)
  FUNC_16();

 VAR_16 = VAR_13[0];
 VAR_17 = VAR_13[1];

 if (VAR_7) {
  VAR_14 = FUNC_4();
  if (VAR_14)
   FUNC_2(1, "rump daemonize: %s", FUNC_15(VAR_14));
 }

 VAR_14 = FUNC_6();
 if (VAR_14)
  FUNC_1("rump init failed", VAR_14);

 if (FUNC_9(VAR_0, 0777) == -1)
  FUNC_1("mount point create", VAR_8);
 FUNC_8("/diskdev", VAR_16, VAR_4);
 VAR_15.fspec = FUNC_0("/diskdev");
 if (FUNC_10(VAR_2, VAR_0, (VAR_18) ? VAR_1 : 0,
     &VAR_15, sizeof(VAR_15)) == -1)
  FUNC_1("mount ffs", VAR_8);

 VAR_14 = FUNC_7(VAR_17);
 if (VAR_14)
  FUNC_1("rump server init failed", VAR_14);
 if (VAR_7)
  FUNC_5(VAR_3);

 FUNC_12(&VAR_11, 0, 0);
 FUNC_14(VAR_6, VAR_10);
 FUNC_14(VAR_5, VAR_10);
 FUNC_13(&VAR_11);

 FUNC_11(0, ((void*)0));

 return 0;
}
