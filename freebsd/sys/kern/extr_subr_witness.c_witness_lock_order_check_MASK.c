
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness {size_t w_index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct witness*,struct witness*) ;
 int** VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct witness *VAR_2, struct witness *VAR_3)
{

 if (VAR_2 != VAR_3 &&
     VAR_1[VAR_2->w_index][VAR_3->w_index]
     & VAR_0 &&
     FUNC_0(VAR_2, VAR_3))
  return (1);

 return (0);
}
