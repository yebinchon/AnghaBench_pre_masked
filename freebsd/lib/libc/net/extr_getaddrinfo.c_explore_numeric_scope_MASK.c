
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sockaddr_in6 {int sin6_scope_id; } ;
struct afd {int a_scoped; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo const*,char const*,char const*,struct addrinfo**,char const*) ;
 struct afd* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char*,struct sockaddr_in6*,int *) ;
 char* FUNC_5 (char const*,int ) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(const struct addrinfo *VAR_4, const char *VAR_5,
    const char *VAR_6, struct addrinfo **VAR_7)
{

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_5);
}
