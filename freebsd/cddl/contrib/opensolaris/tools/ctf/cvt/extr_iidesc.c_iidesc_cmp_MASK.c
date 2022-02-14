
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ii_type; int ii_name; } ;
typedef TYPE_1__ iidesc_t ;
struct TYPE_4__ {TYPE_1__* iif_ret; TYPE_1__* iif_tgt; } ;
typedef TYPE_2__ iidesc_find_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1)
{
 iidesc_t *VAR_2 = VAR_0;
 iidesc_find_t *VAR_3 = VAR_1;
 iidesc_t *VAR_4 = VAR_3->iif_tgt;

 if (VAR_2->ii_type != VAR_4->ii_type ||
     !FUNC_0(VAR_2->ii_name, VAR_4->ii_name))
  return (0);

 VAR_3->iif_ret = VAR_2;

 return (-1);
}
