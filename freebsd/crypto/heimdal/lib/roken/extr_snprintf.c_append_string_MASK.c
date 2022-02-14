
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snprintf_state {int (* append_char ) (struct snprintf_state*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snprintf_state*,int,char) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct snprintf_state*,int ) ;
 int FUNC_3 (struct snprintf_state*,int ) ;

__attribute__((used)) static size_t
FUNC_4 (struct snprintf_state *VAR_1,
        const unsigned char *VAR_2,
        int VAR_3,
        int VAR_4,
        int VAR_5)
{
    size_t VAR_6 = 0;

    if(VAR_2 == ((void*)0))
 VAR_2 = (const unsigned char*)"(null)";

    if(VAR_4 != -1)
 VAR_3 -= VAR_4;
    else
 VAR_3 -= FUNC_1((const char *)VAR_2);
    if(!(VAR_5 & VAR_0))
 VAR_6 += FUNC_0(VAR_1, VAR_3, ' ');

    if (VAR_4 != -1) {
 while (*VAR_2 && VAR_4--) {
     (*VAR_1->append_char) (VAR_1, *VAR_2++);
     ++VAR_6;
 }
    } else {
 while (*VAR_2) {
     (*VAR_1->append_char) (VAR_1, *VAR_2++);
     ++VAR_6;
 }
    }
    if(VAR_5 & VAR_0)
 VAR_6 += FUNC_0(VAR_1, VAR_3, ' ');
    return VAR_6;
}
