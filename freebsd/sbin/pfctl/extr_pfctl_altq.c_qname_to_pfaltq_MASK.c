
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pfctl_altq {int dummy; } ;
typedef int key ;
struct TYPE_4__ {char* key; struct pfctl_altq* data; } ;
typedef TYPE_1__ ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__,int ,TYPE_1__**,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static struct pfctl_altq *
FUNC_2(const char *VAR_4, const char *VAR_5)
{
 ENTRY VAR_6;
 ENTRY *VAR_7;
 char VAR_8[VAR_1 + VAR_2];

 VAR_6.key = VAR_8;
 FUNC_1(VAR_6.key, sizeof(VAR_8), "%s:%s", VAR_5, VAR_4);
 if (FUNC_0(VAR_6, VAR_0, &VAR_7, &VAR_3) == 0)
  return (((void*)0));

 return (VAR_7->data);
}
