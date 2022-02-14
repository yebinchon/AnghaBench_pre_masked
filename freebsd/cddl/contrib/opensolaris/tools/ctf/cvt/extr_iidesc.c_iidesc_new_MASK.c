
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ii_name; } ;
typedef TYPE_1__ iidesc_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;

iidesc_t *
FUNC_2(char *VAR_0)
{
 iidesc_t *VAR_1;

 VAR_1 = FUNC_0(sizeof (iidesc_t));
 if (VAR_0)
  VAR_1->ii_name = FUNC_1(VAR_0);

 return (VAR_1);
}
