
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int name; int sb; int org_name; } ;
typedef TYPE_1__ ARCHD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ,int) ;

int
FUNC_1(ARCHD *VAR_1)
{





 if (VAR_1->type == VAR_0)
  return(1);
 return(FUNC_0(VAR_1->org_name, &(VAR_1->sb), VAR_1->name, 1));
}
