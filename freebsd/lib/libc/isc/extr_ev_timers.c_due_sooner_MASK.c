
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int due; } ;
typedef TYPE_1__ evTimer ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1) {
 evTimer *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 return (FUNC_0(VAR_2->due, VAR_3->due) < 0);
}
