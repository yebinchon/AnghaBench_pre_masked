
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sv ;
struct puffstestargs {int pta_pflags; int* pta_dir; int* pta_dev; int pta_pargslen; int* pta_pargs; int pta_servfd; int pta_childpid; } ;
typedef int ssize_t ;
typedef int pid_t ;
typedef int off_t ;
typedef int mntflags ;
typedef int len ;
typedef int atf_tc_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 () ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct puffstestargs*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int FUNC_10 (int*,char const*,int) ;
 struct puffstestargs* VAR_6 ;
 int FUNC_11 (int,...) ;

__attribute__((used)) static int
FUNC_12(const atf_tc_t *VAR_7, void **VAR_8,
 const char *VAR_9, off_t VAR_10, void *VAR_11, char **VAR_12)
{
 struct puffstestargs *VAR_13;
 pid_t VAR_14;
 int *VAR_15;
 char VAR_16[16];
 int VAR_17[2];
 int VAR_18;
 size_t VAR_19;
 ssize_t VAR_20;

 *VAR_8 = ((void*)0);

 VAR_13 = FUNC_4(sizeof(*VAR_13));
 if (VAR_13 == ((void*)0))
  return VAR_5;
 FUNC_5(VAR_13, 0, sizeof(*VAR_13));

 VAR_15 = &VAR_13->pta_pflags;


 if (FUNC_9(VAR_1, VAR_3, 0, VAR_17) == -1)
  return VAR_5;

 FUNC_7(VAR_2, VAR_4);

 switch ((VAR_14 = FUNC_3())) {
 case 0:
  FUNC_0(VAR_17[1]);
  FUNC_8(VAR_16, sizeof(VAR_17[0]), "%d", VAR_17[0]);
  if (FUNC_6("PUFFS_COMFD", VAR_16, 1) == -1)
   return VAR_5;

  if (FUNC_2(VAR_12[0], VAR_12) == -1)
   return VAR_5;
 case -1:
  return VAR_5;
 default:
  FUNC_0(VAR_17[0]);
  break;
 }


 if ((VAR_20 = FUNC_11(VAR_17[1], &VAR_19, sizeof(VAR_19))) != sizeof(VAR_19))
  FUNC_1(1, "mp 1 %zd", VAR_20);
 if (VAR_19 > VAR_0)
  FUNC_1(1, "mntpath > MAXPATHLEN");
 if ((size_t)FUNC_11(VAR_17[1], VAR_13->pta_dir, VAR_19) != VAR_19)
  FUNC_1(1, "mp 2");
 if (FUNC_11(VAR_17[1], &VAR_19, sizeof(VAR_19)) != sizeof(VAR_19))
  FUNC_1(1, "fn 1");
 if (VAR_19 > VAR_0)
  FUNC_1(1, "devpath > MAXPATHLEN");
 if ((size_t)FUNC_11(VAR_17[1], VAR_13->pta_dev, VAR_19) != VAR_19)
  FUNC_1(1, "fn 2");
 if (FUNC_11(VAR_17[1], &VAR_18, sizeof(VAR_18)) != sizeof(VAR_18))
  FUNC_1(1, "mntflags");
 if (FUNC_11(VAR_17[1], &VAR_13->pta_pargslen, sizeof(VAR_13->pta_pargslen))
     != sizeof(VAR_13->pta_pargslen))
  FUNC_1(1, "puffstest_args len");
 VAR_13->pta_pargs = FUNC_4(VAR_13->pta_pargslen);
 if (VAR_13->pta_pargs == ((void*)0))
  FUNC_1(1, "malloc");
 if (FUNC_11(VAR_17[1], VAR_13->pta_pargs, VAR_13->pta_pargslen)
     != (ssize_t)VAR_13->pta_pargslen)
  FUNC_1(1, "puffstest_args");
 if (FUNC_11(VAR_17[1], VAR_15, sizeof(*VAR_15)) != sizeof(*VAR_15))
  FUNC_1(1, "pflags");

 VAR_13->pta_childpid = VAR_14;
 VAR_13->pta_servfd = VAR_17[1];
 FUNC_10(VAR_13->pta_dev, VAR_9, sizeof(VAR_13->pta_dev));

 *VAR_8 = VAR_6 = VAR_13;

 return 0;
}
