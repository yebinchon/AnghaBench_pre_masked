
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; scalar_t__ data; } ;
typedef TYPE_1__ ENTRY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__,int ,TYPE_1__**,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(char *VAR_2)
{
 ENTRY VAR_3;
 ENTRY *VAR_4;

 VAR_3.key = VAR_2;
 if (FUNC_0(VAR_3, VAR_0, &VAR_4, &VAR_1) == 0)
  return (0);

 return (*(int *)VAR_4->data);
}
