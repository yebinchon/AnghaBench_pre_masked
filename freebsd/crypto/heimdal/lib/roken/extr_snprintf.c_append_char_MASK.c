
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snprintf_state {int (* append_char ) (struct snprintf_state*,char) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snprintf_state*,char) ;
 int FUNC_1 (struct snprintf_state*,unsigned char) ;
 int FUNC_2 (struct snprintf_state*,char) ;

__attribute__((used)) static int
FUNC_3(struct snprintf_state *VAR_1,
     unsigned char VAR_2,
     int VAR_3,
     int VAR_4)
{
    int VAR_5 = 0;

    while(!(VAR_4 & VAR_0) && --VAR_3 > 0) {
 (*VAR_1->append_char) (VAR_1, ' ') ;
 ++VAR_5;
    }
    (*VAR_1->append_char) (VAR_1, VAR_2);
    ++VAR_5;
    while((VAR_4 & VAR_0) && --VAR_3 > 0) {
 (*VAR_1->append_char) (VAR_1, ' ');
 ++VAR_5;
    }
    return 0;
}
