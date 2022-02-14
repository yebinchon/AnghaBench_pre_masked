
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct call {TYPE_1__* uni; scalar_t__ mine; int cref; } ;
struct TYPE_2__ {int cause; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int,char*,int ,char*) ;
 int FUNC_2 (struct call*) ;

__attribute__((used)) static void
FUNC_3(struct call *VAR_3)
{
 FUNC_1(VAR_3->uni, VAR_2, 1, "call %u/%s T301 tick",
     VAR_3->cref, VAR_3->mine ? "mine" : "his");

 FUNC_0(VAR_3->uni->cause, VAR_0, VAR_1);
 FUNC_2(VAR_3);
}
