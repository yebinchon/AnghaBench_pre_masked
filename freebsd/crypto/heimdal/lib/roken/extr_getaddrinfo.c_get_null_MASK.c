
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct in6_addr {int s_addr; } ;
struct addrinfo {int ai_family; int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int,struct addrinfo***,int ,struct in_addr*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 struct in_addr VAR_8 ;
 struct in_addr VAR_9 ;

__attribute__((used)) static int
FUNC_2 (const struct addrinfo *VAR_10,
   int VAR_11, int VAR_12, int VAR_13,
   struct addrinfo **VAR_14)
{
    struct in_addr VAR_15;



    struct addrinfo *VAR_16 = ((void*)0);
    struct addrinfo **VAR_17 = &VAR_16;
    int VAR_18 = VAR_5;
    int VAR_19;

    if (VAR_10 != ((void*)0))
 VAR_18 = VAR_10->ai_family;

    if (VAR_10 && VAR_10->ai_flags & VAR_0) {
 VAR_15.s_addr = VAR_1;



    } else {
 VAR_15.s_addr = FUNC_1(VAR_2);



    }







    if (VAR_18 == VAR_3 || VAR_18 == VAR_5) {
 VAR_19 = FUNC_0 (VAR_11, VAR_12, VAR_13,
         &VAR_17, VAR_6, &VAR_15, ((void*)0));
    }
    *VAR_14 = VAR_16;
    return 0;
}
