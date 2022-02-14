
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int64_t ;
struct TYPE_6__ {int arcs_size; } ;
struct TYPE_5__ {int arcs_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static uint64_t
FUNC_3(uint64_t VAR_7)
{
 uint64_t VAR_8 = 0;
 int64_t VAR_9;
 VAR_9 = FUNC_0((int64_t)(VAR_7 - VAR_3),
     (int64_t)(FUNC_2(&VAR_1->arcs_size) +
     FUNC_2(&VAR_5->arcs_size) - VAR_6));

 VAR_8 += FUNC_1(VAR_5, 0, VAR_9, VAR_0);






 VAR_9 = FUNC_0((int64_t)(VAR_7 - VAR_3),
     (int64_t)(FUNC_2(&VAR_4->arcs_size) -
     (VAR_2 - VAR_6)));

 VAR_8 += FUNC_1(VAR_4, 0, VAR_9, VAR_0);

 return (VAR_8);
}
