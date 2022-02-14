
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gid_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(gid_t VAR_0, gid_t *VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 1; VAR_5 < FUNC_0(VAR_2, *VAR_3); VAR_5++) {
  if (VAR_1[VAR_5] == VAR_0)
   return 1;
 }

 VAR_4 = 1;
 if (*VAR_3 < VAR_2)
  VAR_1[*VAR_3] = VAR_0;
 else
  VAR_4 = 0;

 (*VAR_3)++;

 return VAR_4;
}
