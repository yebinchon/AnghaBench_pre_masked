
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*,int ) ;
 struct type* FUNC_1 (struct type*,int ) ;
 scalar_t__ FUNC_2 (struct type*) ;

char *
FUNC_3 (struct type *VAR_1, char *VAR_2)
{
  if (FUNC_2 (VAR_1))
    return FUNC_3 (FUNC_1 (VAR_1, 0),
       VAR_2 +
       FUNC_0 (VAR_1,
            0) / VAR_0);
  else
    return VAR_2;
}
