
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pfctl_altq {int dummy; } ;
struct TYPE_4__ {char* key; struct pfctl_altq* data; } ;
typedef TYPE_1__ ENTRY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__,int ,TYPE_1__**,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct pfctl_altq *
FUNC_1(char *VAR_2)
{
 ENTRY VAR_3;
 ENTRY *VAR_4;

 VAR_3.key = VAR_2;
 if (FUNC_0(VAR_3, VAR_0, &VAR_4, &VAR_1) == 0)
  return (((void*)0));

 return (VAR_4->data);
}
