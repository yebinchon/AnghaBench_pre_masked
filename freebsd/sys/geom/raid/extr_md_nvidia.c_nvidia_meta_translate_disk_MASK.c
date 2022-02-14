
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_raid_conf {scalar_t__ type; int array_width; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nvidia_raid_conf *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 >= 0 && VAR_1->type == VAR_0) {
  VAR_3 = (VAR_2 / VAR_1->array_width) +
      (VAR_2 % VAR_1->array_width) * VAR_1->array_width;
 } else
  VAR_3 = VAR_2;
 return (VAR_3);
}
