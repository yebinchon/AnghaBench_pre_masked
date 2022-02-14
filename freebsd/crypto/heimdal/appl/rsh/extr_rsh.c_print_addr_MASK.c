
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int addr_str ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (scalar_t__,int *,char*,int) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3 (const struct sockaddr *VAR_2)
{
    char VAR_3[256];
    char *VAR_4;
    const char *VAR_5 = ((void*)0);

    if(VAR_2->sa_family == VAR_0)
 VAR_5 = FUNC_1 (VAR_2->sa_family, &((struct sockaddr_in*)VAR_2)->sin_addr,
   VAR_3, sizeof(VAR_3));





    if(VAR_5 == ((void*)0))
 return ((void*)0);
    VAR_4 = FUNC_2(VAR_5);
    if (VAR_4 == ((void*)0))
 FUNC_0 (1, "malloc: out of memory");
    return VAR_4;
}
