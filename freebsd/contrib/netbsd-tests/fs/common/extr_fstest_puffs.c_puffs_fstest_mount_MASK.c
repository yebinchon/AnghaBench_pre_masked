
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffstestargs {int pta_rumpfd; int pta_childpid; int pta_pargslen; int pta_pargs; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,char const*,int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct puffstestargs*) ;

int
FUNC_6(const atf_tc_t *VAR_3, void *VAR_4, const char *VAR_5, int VAR_6)
{
 struct puffstestargs *VAR_7 = VAR_4;
 int VAR_8;

 FUNC_1();
 VAR_8 = FUNC_4("/dev/puffs", VAR_1);
 if (VAR_8 == -1)
  return VAR_8;

 if (FUNC_2(VAR_5, 0777) == -1)
  return -1;

 if (FUNC_3(VAR_0, VAR_5, VAR_6,
     VAR_7->pta_pargs, VAR_7->pta_pargslen) == -1) {

  FUNC_0(VAR_7->pta_childpid, VAR_2);
  return -1;
 }

 VAR_7->pta_rumpfd = VAR_8;
 FUNC_5(VAR_7);

 return 0;
}
