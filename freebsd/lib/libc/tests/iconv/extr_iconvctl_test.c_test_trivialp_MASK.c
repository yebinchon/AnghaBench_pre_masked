
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (scalar_t__,int ,int*) ;

void
FUNC_4(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 iconv_t VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 FUNC_0(VAR_4 != (iconv_t)-1);

 VAR_6 = FUNC_3(VAR_4, VAR_0, &VAR_5);
 FUNC_0(VAR_6 == 0);

 FUNC_0(VAR_5 == VAR_3);

 VAR_6 = FUNC_1(VAR_4);
 FUNC_0(VAR_6 == 0);
}
