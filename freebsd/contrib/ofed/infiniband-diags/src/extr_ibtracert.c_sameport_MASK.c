
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ portguid; scalar_t__ lid; } ;
typedef TYPE_1__ Port ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(Port * VAR_1, Port * VAR_2)
{
 return VAR_1->portguid == VAR_2->portguid || (VAR_0 && VAR_1->lid == VAR_2->lid);
}
