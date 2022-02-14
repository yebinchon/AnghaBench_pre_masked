
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct limits {float limdiv; int limconst; } ;
typedef scalar_t__ RLIM_TYPE ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 float FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ FUNC_4 (float) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static RLIM_TYPE
FUNC_7(struct limits *VAR_7, Char **VAR_8)
{
    float VAR_9;
    Char *VAR_10 = *VAR_8++;

    VAR_9 = FUNC_1(FUNC_5(VAR_10));
    while (FUNC_0(*VAR_10) || *VAR_10 == '.' || *VAR_10 == 'e' || *VAR_10 == 'E')
 VAR_10++;
    if (*VAR_10 == 0) {
 if (*VAR_8 == 0)
     return FUNC_4((VAR_9 * VAR_7->limdiv) + 0.5);
 VAR_10 = *VAR_8;
    }
    switch (*VAR_10) {
    case 'm':







 FUNC_3(VAR_10, "megabytes", "mbytes");
 VAR_9 *= 1024.0 * 1024.0;
 break;







    case 'G':
 *VAR_10 = 'g';

    case 'g':




 FUNC_3(VAR_10, "gigabytes", "gbytes");
 VAR_9 *= 1024.0 * 1024.0 * 1024.0;
 break;
    case 'M':




 *VAR_10 = 'm';
 FUNC_3(VAR_10, "megabytes", "mbytes");
 VAR_9 *= 1024.0 * 1024.0;
 break;
    case 'k':




 FUNC_3(VAR_10, "kilobytes", "kbytes");
 VAR_9 *= 1024.0;
 break;
    case 'b':




 FUNC_2(VAR_10, "blocks");
 VAR_9 *= 512.0;
 break;
    case 'u':
 FUNC_2(VAR_10, "unlimited");
 return ((RLIM_TYPE) VAR_6);
    default:



 FUNC_6(VAR_0 | VAR_1);
    }



    VAR_9 += 0.5;
    if (VAR_9 > (float) ((RLIM_TYPE) VAR_6))
 return ((RLIM_TYPE) VAR_6);
    else
 return ((RLIM_TYPE) VAR_9);

}
