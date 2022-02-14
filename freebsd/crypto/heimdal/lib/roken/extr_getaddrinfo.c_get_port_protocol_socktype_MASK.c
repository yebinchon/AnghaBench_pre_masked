
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
struct protoent {char* p_name; int p_proto; } ;
struct addrinfo {scalar_t__ ai_protocol; int ai_socktype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct protoent* FUNC_0 (scalar_t__) ;
 struct servent* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_6,
       const struct addrinfo *VAR_7,
       int *VAR_8,
       int *VAR_9,
       int *VAR_10)
{
    struct servent *VAR_11;
    const char *VAR_12 = ((void*)0);

    *VAR_10 = 0;

    if (VAR_7 != ((void*)0) && VAR_7->ai_protocol != 0) {
 struct protoent *VAR_13 = FUNC_0 (VAR_7->ai_protocol);

 if (VAR_13 == ((void*)0))
     return VAR_1;

 VAR_12 = VAR_13->p_name;
 *VAR_9 = VAR_13->p_proto;
    }

    if (VAR_7 != ((void*)0))
 *VAR_10 = VAR_7->ai_socktype;

    if (*VAR_10 == VAR_5) {
 VAR_11 = FUNC_1 (VAR_6, VAR_12 ? VAR_12 : "tcp");
 if (VAR_12 == ((void*)0))
     *VAR_9 = VAR_2;
    } else if (*VAR_10 == VAR_4) {
 VAR_11 = FUNC_1 (VAR_6, VAR_12 ? VAR_12 : "udp");
 if (VAR_12 == ((void*)0))
     *VAR_9 = VAR_3;
    } else if (*VAR_10 == 0) {
 if (VAR_12 != ((void*)0)) {
     VAR_11 = FUNC_1 (VAR_6, VAR_12);
 } else {
     VAR_11 = FUNC_1 (VAR_6, "tcp");
     *VAR_9 = VAR_2;
     *VAR_10 = VAR_5;
     if (VAR_11 == ((void*)0)) {
  VAR_11 = FUNC_1 (VAR_6, "udp");
  *VAR_9 = VAR_3;
  *VAR_10 = VAR_4;
     }
 }
    } else
 return VAR_1;

    if (VAR_11 == ((void*)0)) {
 char *VAR_14;

 *VAR_8 = FUNC_2(FUNC_3 (VAR_6, &VAR_14, 10));
 if (VAR_6 == VAR_14)
     return VAR_0;
    } else {
 *VAR_8 = VAR_11->s_port;
    }
    return 0;
}
