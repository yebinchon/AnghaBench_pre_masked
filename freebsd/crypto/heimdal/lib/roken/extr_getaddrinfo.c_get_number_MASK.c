
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef struct in_addr in6_addr ;
struct addrinfo {int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,struct addrinfo***,int ,struct in_addr*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char const*,struct in_addr*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_6,
     const struct addrinfo *VAR_7,
     int VAR_8, int VAR_9, int VAR_10,
     struct addrinfo **VAR_11)
{
    struct addrinfo *VAR_12 = ((void*)0);
    struct addrinfo **VAR_13 = &VAR_12;
    int VAR_14 = VAR_3;
    int VAR_15;

    if (VAR_7 != ((void*)0)) {
 VAR_14 = VAR_7->ai_family;
    }
    if (VAR_14 == VAR_1 || VAR_14 == VAR_3) {
 struct in_addr VAR_16;

 if (FUNC_1 (VAR_1, VAR_6, &VAR_16) == 1) {
     VAR_15 = FUNC_0 (VAR_8, VAR_9, VAR_10,
      &VAR_13, VAR_4, &VAR_16, ((void*)0));
     *VAR_11 = VAR_12;
     return VAR_15;
 }
    }
    return VAR_0;
}
