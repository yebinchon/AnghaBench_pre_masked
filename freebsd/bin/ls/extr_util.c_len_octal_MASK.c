
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef int mbs ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int *,char const*,int,int *) ;
 int FUNC_2 (int *,int ,int) ;

size_t
FUNC_3(const char *VAR_0, int VAR_1)
{
 mbstate_t VAR_2;
 wchar_t VAR_3;
 size_t VAR_4, VAR_5;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_5 = 0;
 while (VAR_1 != 0 && (VAR_4 = FUNC_1(&VAR_3, VAR_0, VAR_1, &VAR_2)) != 0) {
  if (VAR_4 == (size_t)-1) {
   VAR_5 += 4;
   VAR_0++;
   VAR_1--;
   FUNC_2(&VAR_2, 0, sizeof(VAR_2));
   continue;
  }
  if (VAR_4 == (size_t)-2) {
   VAR_5 += 4 * VAR_1;
   break;
  }
  if (FUNC_0(VAR_3))
   VAR_5++;
  else
   VAR_5 += 4 * VAR_4;
  VAR_0 += VAR_4;
 }
 return (VAR_5);
}
