
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* sync ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ DB ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(DB *VAR_2)
{
 switch ((*VAR_2->sync)(VAR_2, VAR_0)) {
 case 0:
  break;
 case -1:
  FUNC_0(1, "line %zu: synk failed", VAR_1);

 }
}
