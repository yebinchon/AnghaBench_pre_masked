
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ii_name; } ;
typedef TYPE_1__ iidesc_t ;


 int FUNC_0 (int,scalar_t__) ;

int
FUNC_1(int VAR_0, void *VAR_1)
{
 iidesc_t *VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (VAR_2->ii_name)
  return (FUNC_0(VAR_0, VAR_2->ii_name));

 return (VAR_3);
}
