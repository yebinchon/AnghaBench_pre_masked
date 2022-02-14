
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; int * function; scalar_t__ data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(&VAR_1);

 VAR_1.data = 0;
 VAR_1.function = &VAR_2;
 VAR_1.expires = VAR_0 + 10;

 FUNC_0(&VAR_1);
}
