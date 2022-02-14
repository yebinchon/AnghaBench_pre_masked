
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int or_index; int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct transport*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

int
FUNC_3(struct transport *VAR_4)
{
 if (!FUNC_0(&VAR_4->table))
  return (VAR_0);

 FUNC_2(VAR_4->or_index);
 FUNC_1(&VAR_3, VAR_4, VAR_2);

 return (VAR_1);
}
