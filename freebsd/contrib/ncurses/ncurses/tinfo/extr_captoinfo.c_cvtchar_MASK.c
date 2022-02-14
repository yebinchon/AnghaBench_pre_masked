
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(register const char *VAR_1)

{
    unsigned char VAR_2 = 0;
    int VAR_3;

    switch (*VAR_1) {
    case '\\':
 switch (*++VAR_1) {
 case '\'':
 case '$':
 case '\\':
 case '%':
     VAR_2 = (unsigned char) (*VAR_1);
     VAR_3 = 2;
     break;
 case '\0':
     VAR_2 = '\\';
     VAR_3 = 1;
     break;
 case '0':
 case '1':
 case '2':
 case '3':
     VAR_3 = 1;
     while (FUNC_1(FUNC_0(*VAR_1))) {
  VAR_2 = (unsigned char) (8 * VAR_2 + (*VAR_1++ - '0'));
  VAR_3++;
     }
     break;
 default:
     VAR_2 = (unsigned char) (*VAR_1);
     VAR_3 = 2;
     break;
 }
 break;
    case '^':
 VAR_2 = (unsigned char) (*++VAR_1 & 0x1f);
 VAR_3 = 2;
 break;
    default:
 VAR_2 = (unsigned char) (*VAR_1);
 VAR_3 = 1;
    }
    if (FUNC_2(VAR_2) && VAR_2 != ',' && VAR_2 != '\'' && VAR_2 != '\\' && VAR_2 != ':') {
 VAR_0 = FUNC_4(VAR_0, "%\'");
 VAR_0 = FUNC_3(VAR_0, VAR_2);
 VAR_0 = FUNC_3(VAR_0, '\'');
    } else {
 VAR_0 = FUNC_4(VAR_0, "%{");
 if (VAR_2 > 99)
     VAR_0 = FUNC_3(VAR_0, VAR_2 / 100 + '0');
 if (VAR_2 > 9)
     VAR_0 = FUNC_3(VAR_0, ((int) (VAR_2 / 10)) % 10 + '0');
 VAR_0 = FUNC_3(VAR_0, VAR_2 % 10 + '0');
 VAR_0 = FUNC_3(VAR_0, '}');
    }
    return VAR_3;
}
