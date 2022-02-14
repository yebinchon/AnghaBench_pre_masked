
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, size_t VAR_3)
{
 off_t *VAR_4 = (off_t *)VAR_2;

 *VAR_4 += VAR_3;
 if (VAR_1 > 0)
  FUNC_0(&VAR_0, VAR_3);
 return 0;
}
