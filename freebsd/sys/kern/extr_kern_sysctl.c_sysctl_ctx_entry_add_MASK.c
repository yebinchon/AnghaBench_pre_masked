
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sysctl_ctx_entry {struct sysctl_oid* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_ctx_entry*,int ) ;
 int VAR_2 ;
 struct sysctl_ctx_entry* FUNC_2 (int,int ,int ) ;

struct sysctl_ctx_entry *
FUNC_3(struct sysctl_ctx_list *VAR_3, struct sysctl_oid *VAR_4)
{
 struct sysctl_ctx_entry *VAR_5;

 FUNC_0();
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return(((void*)0));
 VAR_5 = FUNC_2(sizeof(struct sysctl_ctx_entry), VAR_0, VAR_1);
 VAR_5->entry = VAR_4;
 FUNC_1(VAR_3, VAR_5, VAR_2);
 return (VAR_5);
}
