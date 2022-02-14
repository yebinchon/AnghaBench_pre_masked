
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int oid_number; struct sysctl_oid_list* oid_parent; int oid_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sysctl_oid* FUNC_2 (int ,struct sysctl_oid_list*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (struct sysctl_oid*) ;

int
FUNC_5(struct sysctl_oid *VAR_2, struct sysctl_oid_list *VAR_3)
{
 struct sysctl_oid *VAR_4;

 FUNC_0();
 if (VAR_2->oid_parent == VAR_3) {
  FUNC_1();
  return (0);
 }
 VAR_4 = FUNC_2(VAR_2->oid_name, VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 FUNC_4(VAR_2);
 VAR_2->oid_parent = VAR_3;
 VAR_2->oid_number = VAR_1;
 FUNC_3(VAR_2);
 FUNC_1();
 return (0);
}
