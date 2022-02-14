
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbstate_t ;
typedef int mbs ;
typedef int Char ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 size_t FUNC_2 (char*,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_2, char *VAR_3, size_t VAR_4)
{
 mbstate_t VAR_5;
 size_t VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 while (VAR_4 >= VAR_1) {
  VAR_6 = FUNC_2(VAR_3, FUNC_0(*VAR_2), &VAR_5);
  if (VAR_6 == (size_t)-1) {

   *VAR_3 = (char)FUNC_0(*VAR_2);
   VAR_6 = 1;
   FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  }
  if (FUNC_0(*VAR_2) == VAR_0)
   return (0);
  VAR_2++;
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
 }
 return (1);
}
