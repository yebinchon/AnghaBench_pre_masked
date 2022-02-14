
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static off_t
FUNC_2(const char *VAR_1, const char *VAR_2)
{
    char *VAR_3;
    off_t VAR_4;

    VAR_0 = 0;
    VAR_4 = FUNC_1(VAR_1, &VAR_3, 0);

    if (VAR_0 || VAR_4 < 0 || (VAR_3[0] && VAR_3[1]) )
 FUNC_0(1, "%s: bad %s", VAR_1, VAR_2);
    if (*VAR_3) {
 switch (*VAR_3) {
 default:
     FUNC_0(1, "%s: bad %s", VAR_1, VAR_2);


 case 's':
 case 'S':
     VAR_4 <<= 9;
     break;

 case 'k':
 case 'K':
     VAR_4 <<= 10;
     break;

 case 'm':
 case 'M':
     VAR_4 <<= 20;
     break;

 case 'g':
 case 'G':
     VAR_4 <<= 30;
     break;

 case 'p':
 case 'P':
 case 'l':
 case 'L':
     FUNC_0(1, "%s: not supported yet %s", VAR_1, VAR_2);

 }
    }
    return VAR_4;
}
