
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snprintf_state {int (* append_char ) (struct snprintf_state*,char) ;} ;


 int FUNC_0 (struct snprintf_state*,char) ;

__attribute__((used)) static size_t
FUNC_1(struct snprintf_state *VAR_0, int VAR_1, char VAR_2)
{
    size_t VAR_3 = 0;
    while(VAR_1-- > 0){
 (*VAR_0->append_char)(VAR_0, VAR_2);
 ++VAR_3;
    }
    return VAR_3;
}
