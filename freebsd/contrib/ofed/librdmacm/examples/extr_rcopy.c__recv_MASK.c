
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int,char*,size_t,int ) ;

__attribute__((used)) static size_t FUNC_1(int VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += VAR_3) {
  VAR_3 = FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_2 - VAR_4, 0);
  if (VAR_3 <= 0)
   return VAR_3;
 }

 return VAR_2;
}
