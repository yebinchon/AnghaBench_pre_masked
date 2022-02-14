
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct guids {scalar_t__ before; int found; int after; } ;
struct TYPE_3__ {int info; } ;
typedef TYPE_1__ ibnd_node_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(ibnd_node_t *VAR_1, void *VAR_2)
{
 struct guids *VAR_3;
 uint64_t VAR_4;

 VAR_3 = (struct guids *)VAR_2;

 VAR_4 = FUNC_0(VAR_1->info, 0, VAR_0);
 if (VAR_4 == VAR_3->before) {
  FUNC_1(VAR_1->info, 0, VAR_0,
    VAR_3->after);
  VAR_3->found++;
 }
}
