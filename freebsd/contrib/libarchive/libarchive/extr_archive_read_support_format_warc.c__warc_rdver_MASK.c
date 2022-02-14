
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int magic ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const*,char const*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2(const char *VAR_0, size_t VAR_1)
{
 static const char VAR_2[] = "WARC/";
 const char *VAR_3;
 unsigned int VAR_4 = 0U;
 unsigned int VAR_5 = 0U;

 if (VAR_1 < 12 || FUNC_1(VAR_0, VAR_2, sizeof(VAR_2) - 1U) != 0) {

  return VAR_4;
 }

 VAR_0 += sizeof(VAR_2) - 1U;

 if (FUNC_0((unsigned char)VAR_0[0U]) && (VAR_0[1U] == '.') &&
     FUNC_0((unsigned char)VAR_0[2U])) {

  if (FUNC_0((unsigned char)VAR_0[3U]))
   VAR_5 = 1U;

  VAR_4 = (VAR_0[0U] - '0') * 10000U;

  if (VAR_5 == 1U) {
   VAR_4 += (VAR_0[2U] - '0') * 1000U;
   VAR_4 += (VAR_0[3U] - '0') * 100U;
  } else
   VAR_4 += (VAR_0[2U] - '0') * 100U;




  VAR_3 = VAR_0 + 3U + VAR_5;
  if (VAR_4 >= 1200U) {
   if (FUNC_1(VAR_3, "\r\n", 2U) != 0)
    VAR_4 = 0U;
  } else if (VAR_4 < 1200U) {
   if (*VAR_3 != ' ' && *VAR_3 != '\t')
    VAR_4 = 0U;
  }
 }
 return VAR_4;
}
