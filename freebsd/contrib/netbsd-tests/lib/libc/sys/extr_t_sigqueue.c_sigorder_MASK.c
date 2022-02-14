
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int const*,size_t) ;
 int FUNC_1 (int*,size_t,int,int ) ;

__attribute__((used)) static size_t
FUNC_2(int *VAR_2, const int *VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_2, VAR_3, VAR_4 * sizeof(*VAR_3));
 FUNC_1(VAR_2, VAR_4, sizeof(*VAR_2), VAR_1);
 if (VAR_4 == 1)
  return VAR_4;
 size_t VAR_5, VAR_6;
 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4 - 1; VAR_5++) {
  if (VAR_2[VAR_5] >= VAR_0)
   continue;
  if (VAR_6 == 0)
   VAR_6 = VAR_5 + 1;
  while (VAR_2[VAR_5] == VAR_2[VAR_6] && VAR_6 < VAR_4)
   VAR_6++;
  if (VAR_6 == VAR_4)
   break;
  VAR_2[VAR_5 + 1] = VAR_2[VAR_6];
 }
 return VAR_5 + 1;

}
