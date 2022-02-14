
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {unsigned char s_addr; } ;
struct hostent {scalar_t__ h_addr; } ;


 struct hostent* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,struct in_addr*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, struct in_addr *VAR_1)
{
    if(FUNC_1(VAR_0, VAR_1) == 0){


 struct hostent *VAR_2 = FUNC_0(VAR_0);
 if(VAR_2) {
     unsigned char *VAR_3 = (unsigned char*)VAR_2->h_addr;
     VAR_1->s_addr = (VAR_3[0] << 24) | (VAR_3[1] << 16) | (VAR_3[2] << 8) | VAR_3[3];
 } else {
     return -1;
 }
    }
    return 0;
}
