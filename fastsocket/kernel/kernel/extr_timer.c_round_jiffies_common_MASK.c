
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_2, int VAR_3,
  bool VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = VAR_2;
 VAR_2 += VAR_3 * 3;

 VAR_5 = VAR_2 % VAR_0;
 if (VAR_5 < VAR_0/4 && !VAR_4)
  VAR_2 = VAR_2 - VAR_5;
 else
  VAR_2 = VAR_2 - VAR_5 + VAR_0;


 VAR_2 -= VAR_3 * 3;

 if (VAR_2 <= VAR_1)
  return VAR_6;
 return VAR_2;
}
