
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ unicode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char const*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_2, int VAR_3, wchar_t *VAR_4)
{
 int VAR_5;
 unicode_t VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_6);
 if (VAR_5 < 0 || VAR_6 > VAR_1) {
  *VAR_4 = 0x003f;
  return -VAR_0;
 }
 *VAR_4 = (wchar_t) VAR_6;
 return VAR_5;
}
