
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct invariant*,int*,unsigned int*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_2 (struct invariant *VAR_1, unsigned *VAR_2,
      unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
  int VAR_6, VAR_7;

  FUNC_0 (VAR_1, &VAR_6, VAR_2);
  VAR_0++;

  VAR_7 = (FUNC_1 (VAR_3 + *VAR_2,
         VAR_4, VAR_5)
        - FUNC_1 (VAR_3, VAR_4, VAR_5));

  return VAR_6 - VAR_7;
}
