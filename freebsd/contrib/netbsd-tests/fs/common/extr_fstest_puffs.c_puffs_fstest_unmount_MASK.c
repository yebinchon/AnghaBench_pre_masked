
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffstestargs {int pta_childpid; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,int ) ;
 struct puffstestargs* VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int ,int*,int ) ;

int
FUNC_8(const atf_tc_t *VAR_6, const char *VAR_7, int VAR_8)
{
 struct puffstestargs *VAR_9 = VAR_5;
 int VAR_10;
 int VAR_11;


 FUNC_4(VAR_0, VAR_3);

 VAR_11 = FUNC_3(VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 if ((VAR_11 = FUNC_2(VAR_7)) != 0)
  return VAR_11;

 if (FUNC_7(VAR_9->pta_childpid, &VAR_10, VAR_4) > 0)
  return 0;
 FUNC_0(VAR_9->pta_childpid, VAR_2);
 FUNC_5(10);
 if (FUNC_7(VAR_9->pta_childpid, &VAR_10, VAR_4) > 0)
  return 0;
 FUNC_0(VAR_9->pta_childpid, VAR_1);
 FUNC_5(500);
 FUNC_6(&VAR_10);

 FUNC_1("p2kffsfake");

 return 0;
}
