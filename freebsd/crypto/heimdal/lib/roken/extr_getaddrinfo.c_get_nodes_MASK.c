
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct addrinfo {int ai_family; int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,struct addrinfo***,int ,struct hostent*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hostent*) ;
 struct hostent* FUNC_2 (char const*,int,int ,int*) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_6,
    const struct addrinfo *VAR_7,
    int VAR_8, int VAR_9, int VAR_10,
    struct addrinfo **VAR_11)
{
    struct addrinfo *VAR_12 = ((void*)0);
    struct addrinfo **VAR_13 = &VAR_12;
    int VAR_14 = VAR_3;
    int VAR_15 = 0;
    int VAR_16 = VAR_0;
    int VAR_17;

    if (VAR_7 != ((void*)0)) {
 VAR_14 = VAR_7->ai_family;
 VAR_15 = VAR_7->ai_flags;
    }
    if (VAR_14 == VAR_1 || VAR_14 == VAR_3) {
 struct hostent *VAR_18;

 VAR_18 = FUNC_2 (VAR_6, VAR_1, 0, &VAR_17);

 if (VAR_18 != ((void*)0)) {
     VAR_16 = FUNC_0 (VAR_8, VAR_9, VAR_10,
          &VAR_13, VAR_4, VAR_18, &VAR_15);
     FUNC_1 (VAR_18);
 }
    }
    *VAR_11 = VAR_12;
    return VAR_16;
}
