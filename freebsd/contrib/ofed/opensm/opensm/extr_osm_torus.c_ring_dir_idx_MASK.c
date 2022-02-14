
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static
int FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 int VAR_3;
 unsigned VAR_4, VAR_5;

 if (VAR_1 == VAR_0)
  return 0;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_5);

 if (VAR_1 > VAR_0)
  VAR_3 = VAR_4 <= VAR_5 ? 1 : -1;
 else
  VAR_3 = VAR_4 <= VAR_5 ? -1 : 1;

 return VAR_3;
}
