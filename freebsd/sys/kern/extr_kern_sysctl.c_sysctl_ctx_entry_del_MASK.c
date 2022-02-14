
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sysctl_ctx_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_ctx_entry*,int ) ;
 int FUNC_3 (struct sysctl_ctx_entry*,int ) ;
 int VAR_3 ;
 struct sysctl_ctx_entry* FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid*) ;

int
FUNC_5(struct sysctl_ctx_list *VAR_4, struct sysctl_oid *VAR_5)
{
 struct sysctl_ctx_entry *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_0();
 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_4, VAR_6, VAR_3);
  FUNC_1();
  FUNC_3(VAR_6, VAR_2);
  return (0);
 } else {
  FUNC_1();
  return (VAR_1);
 }
}
