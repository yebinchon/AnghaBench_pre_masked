
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitset {int * __bits; } ;


 int FUNC_0 (int,struct bitset*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*,char*,int *) ;

__attribute__((used)) static int
FUNC_4(struct bitset *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4;
 const char *VAR_5;

 FUNC_0(VAR_1, VAR_0);
 VAR_5 = VAR_2;
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
  if (*VAR_5 == ',') {
   VAR_5++;
   continue;
  }
  VAR_4 = FUNC_3(VAR_5, "%lx", &VAR_0->__bits[VAR_3]);
  if (VAR_4 == 0 || VAR_4 == -1)
   break;
  while (FUNC_2(*VAR_5))
   VAR_5++;
 }
 return (VAR_5 - VAR_2);
}
