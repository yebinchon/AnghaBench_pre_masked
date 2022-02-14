
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static unsigned
FUNC_1(const char *VAR_0, const char *VAR_1)
{
    const char *VAR_2;
    const char *VAR_3;
    unsigned VAR_4 = 0;
    unsigned VAR_5 = 0;

    while (*VAR_0 != 0) {
 if (*VAR_0 != *VAR_1) {
     VAR_4 = 0;
     break;
 }
 if (VAR_5 != 0) {
     VAR_4 += VAR_5;
     VAR_5 = 0;
 }
 if (*VAR_0 == '$' && *VAR_1 == '$') {
     VAR_2 = FUNC_0(VAR_0);
     VAR_3 = FUNC_0(VAR_1);
     if (VAR_2 != VAR_0 && VAR_3 != VAR_1) {
  VAR_5 += (unsigned) (VAR_3 - VAR_1);
  VAR_1 = VAR_3;
  VAR_0 = VAR_2;
  continue;
     }
 }
 ++VAR_4;
 ++VAR_0;
 ++VAR_1;
    }
    return VAR_4;
}
