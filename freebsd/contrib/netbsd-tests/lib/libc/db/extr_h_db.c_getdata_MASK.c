
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get ) (TYPE_1__*,int *,int *,int ) ;} ;
typedef int DBT ;
typedef TYPE_1__ DB ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3(DB *VAR_2, DBT *VAR_3, DBT *VAR_4)
{
 switch ((*VAR_2->get)(VAR_2, VAR_3, VAR_4, VAR_0)) {
 case 0:
  return;
 case -1:
  FUNC_0(1, "line %zu: getdata failed", VAR_1);

 case 1:
  FUNC_1(1, "line %zu: getdata failed, no such key", VAR_1);

 }
}
