
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
typedef int mountb ;
typedef int mounta ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_3, const void *VAR_4, void *VAR_5)
{
 const prop_changenode_t *VAR_6 = VAR_3;
 const prop_changenode_t *VAR_7 = VAR_4;

 char VAR_8[VAR_1];
 char VAR_9[VAR_1];

 boolean_t VAR_10, VAR_11;
 VAR_10 = (FUNC_1(VAR_6->cn_handle, VAR_2, VAR_8,
     sizeof (VAR_8), ((void*)0), ((void*)0), 0, VAR_0) == 0);
 VAR_11 = (FUNC_1(VAR_7->cn_handle, VAR_2, VAR_9,
     sizeof (VAR_9), ((void*)0), ((void*)0), 0, VAR_0) == 0);

 if (!VAR_10 && VAR_11)
  return (-1);
 else if (VAR_10 && !VAR_11)
  return (1);
 else if (!VAR_10 && !VAR_11)
  return (0);
 else
  return (FUNC_0(VAR_9, VAR_8));
}
