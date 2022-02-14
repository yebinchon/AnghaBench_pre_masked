
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_session {int dummy; } ;
struct fst_iface {int dummy; } ;
struct fst_group {int dummy; } ;
typedef int Boolean ;


 int VAR_0 ;
 int FUNC_0 (struct fst_group*) ;
 struct fst_iface* FUNC_1 (struct fst_group*,char const*) ;
 int FUNC_2 (struct fst_session*,int ,char*,char const*,int ) ;
 struct fst_group* FUNC_3 (struct fst_session*) ;
 int FUNC_4 (struct fst_session*,struct fst_iface*,int ) ;

int FUNC_5(struct fst_session *VAR_1, const char *VAR_2,
          Boolean VAR_3)
{
 struct fst_group *VAR_4 = FUNC_3(VAR_1);
 struct fst_iface *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_5) {
  FUNC_2(VAR_1, VAR_0,
       "Cannot set iface %s: no such iface within group '%s'",
       VAR_2, FUNC_0(VAR_4));
  return -1;
 }

 FUNC_4(VAR_1, VAR_5, VAR_3);

 return 0;
}
