
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int link; } ;
struct key {TYPE_1__ type_data; scalar_t__ description; } ;
struct TYPE_6__ {int next; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct key *VAR_2)
{
 int VAR_3;

 if (VAR_2->description) {
  VAR_3 = FUNC_1(VAR_2->description);

  FUNC_3(&VAR_1);

  if (!VAR_0[VAR_3].next)
   FUNC_0(&VAR_0[VAR_3]);

  FUNC_2(&VAR_2->type_data.link,
         &VAR_0[VAR_3]);

  FUNC_4(&VAR_1);
 }
}
