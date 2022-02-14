
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_longest ;
struct snprintf_state {int (* append_char ) (struct snprintf_state*,char) ;} ;
typedef int nstr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct snprintf_state*,int,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct snprintf_state*,char) ;
 int FUNC_3 (struct snprintf_state*,char) ;
 int FUNC_4 (struct snprintf_state*,char const) ;
 int FUNC_5 (struct snprintf_state*,char) ;
 scalar_t__ FUNC_6 (int,int,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(struct snprintf_state *VAR_5,
       u_longest VAR_6, unsigned VAR_7, const char *VAR_8,
       int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    int VAR_13 = 0;
    u_longest VAR_14 = VAR_6;
    char VAR_15[64];
    int VAR_16, VAR_17;
    char VAR_18;


    if(VAR_10 != -1)
 VAR_11 &= ~VAR_4;
    else
 VAR_10 = 1;


    VAR_16 = sizeof(VAR_15);
    VAR_17 = 0;
    VAR_15[--VAR_16] = '\0';
    do {
 FUNC_0(VAR_16 > 0);
 VAR_15[--VAR_16] = VAR_8[VAR_14 % VAR_7];
 ++VAR_17;
 VAR_14 /= VAR_7;
    } while(VAR_14);


    if(VAR_10 == 0 && VAR_6 == 0) {
 VAR_17--;
 VAR_16++;
    }


    if(VAR_12)
 VAR_18 = '-';
    else if((VAR_11 & VAR_2))
 VAR_18 = '+';
    else if((VAR_11 & VAR_3))
 VAR_18 = ' ';
    else
 VAR_18 = '\0';

    if((VAR_11 & VAR_0) && VAR_7 == 8) {
 if(VAR_10 <= VAR_17 && VAR_15[VAR_16] != '0' && VAR_15[VAR_16] != '\0')
     VAR_10 = VAR_17 + 1;
    }
    if(!(VAR_11 & (VAR_1 | VAR_4))) {
 if(VAR_10 > VAR_17)
     VAR_9 -= VAR_10;
 else
     VAR_9 -= VAR_17;

 if(FUNC_6(VAR_11, VAR_6, VAR_7))
     VAR_9 -= 2;

 if(VAR_18 != '\0')
     VAR_9--;


 VAR_13 += FUNC_1(VAR_5, VAR_9, ' ');
    }
    if(VAR_18 != '\0') {
 (*VAR_5->append_char)(VAR_5, VAR_18);
 ++VAR_13;
    }
    if(FUNC_6(VAR_11, VAR_6, VAR_7)) {
 (*VAR_5->append_char)(VAR_5, '0');
 (*VAR_5->append_char)(VAR_5, VAR_8[10] + 23);
 VAR_13 += 2;
    }
    if(VAR_11 & VAR_4) {

 if(VAR_10 - VAR_17 > VAR_9 - VAR_13 - VAR_17)
     VAR_13 += FUNC_1(VAR_5, VAR_10 - VAR_17, '0');
 else
     VAR_13 += FUNC_1(VAR_5, VAR_9 - VAR_13 - VAR_17, '0');
    } else

 VAR_13 += FUNC_1(VAR_5, VAR_10 - VAR_17, '0');

    while(VAR_15[VAR_16] != '\0') {
 (*VAR_5->append_char)(VAR_5, VAR_15[VAR_16++]);
 ++VAR_13;
    }

    if(VAR_11 & VAR_1)
 VAR_13 += FUNC_1(VAR_5, VAR_9 - VAR_13, ' ');

    return VAR_13;
}
