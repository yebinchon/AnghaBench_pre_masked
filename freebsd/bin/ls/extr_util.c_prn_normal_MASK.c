
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int *,char const*,int ,int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (int ) ;

int
FUNC_6(const char *VAR_1)
{
 mbstate_t VAR_2;
 wchar_t VAR_3;
 int VAR_4, VAR_5;
 size_t VAR_6;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_5 = 0;
 while ((VAR_6 = FUNC_1(&VAR_3, VAR_1, VAR_0, &VAR_2)) != 0) {
  if (VAR_6 == (size_t)-2) {
   VAR_5 += FUNC_3("%s", VAR_1);
   break;
  }
  if (VAR_6 == (size_t)-1) {
   FUNC_2(&VAR_2, 0, sizeof(VAR_2));
   FUNC_4((unsigned char)*VAR_1);
   VAR_1++;
   VAR_5++;
   continue;
  }
  for (VAR_4 = 0; VAR_4 < (int)VAR_6; VAR_4++)
   FUNC_4((unsigned char)VAR_1[VAR_4]);
  VAR_1 += VAR_6;
  if (FUNC_0(VAR_3))
   VAR_5 += FUNC_5(VAR_3);
 }
 return (VAR_5);
}
