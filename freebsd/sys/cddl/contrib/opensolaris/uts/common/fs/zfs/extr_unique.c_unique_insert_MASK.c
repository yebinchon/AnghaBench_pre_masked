
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int un_value; } ;
typedef TYPE_1__ unique_t ;
typedef int uint64_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,int) ;
 int VAR_2 ;
 int VAR_3 ;

uint64_t
FUNC_6(uint64_t VAR_4)
{
 avl_index_t VAR_5;
 unique_t *VAR_6 = FUNC_2(sizeof (unique_t), VAR_0);

 VAR_6->un_value = VAR_4;

 FUNC_3(&VAR_3);
 while (VAR_6->un_value == 0 || VAR_6->un_value & ~VAR_1 ||
     FUNC_0(&VAR_2, VAR_6, &VAR_5)) {
  FUNC_4(&VAR_3);
  (void) FUNC_5((void*)&VAR_6->un_value,
      sizeof (VAR_6->un_value));
  VAR_6->un_value &= VAR_1;
  FUNC_3(&VAR_3);
 }

 FUNC_1(&VAR_2, VAR_6, VAR_5);
 FUNC_4(&VAR_3);

 return (VAR_6->un_value);
}
