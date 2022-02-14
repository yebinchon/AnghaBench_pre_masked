
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; int rrset_class; int type; int dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
typedef int RES ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_6(RES* VAR_0, struct ub_packed_rrset_key* VAR_1)
{
 char* VAR_2, *VAR_3, *VAR_4;
 VAR_2 = FUNC_3(VAR_1->rk.dname, VAR_1->rk.dname_len);
 VAR_3 = FUNC_4(FUNC_1(VAR_1->rk.type));
 VAR_4 = FUNC_2(FUNC_1(VAR_1->rk.rrset_class));
 if(!VAR_2 || !VAR_4 || !VAR_3) {
  FUNC_0(VAR_2);
  FUNC_0(VAR_3);
  FUNC_0(VAR_4);
  return FUNC_5(VAR_0, "BADREF\n");
 }
 if(!FUNC_5(VAR_0, "%s %s %s %d\n", VAR_2, VAR_4, VAR_3, (int)VAR_1->rk.flags)) {
  FUNC_0(VAR_2);
  FUNC_0(VAR_3);
  FUNC_0(VAR_4);
  return 0;
 }
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 return 1;
}
