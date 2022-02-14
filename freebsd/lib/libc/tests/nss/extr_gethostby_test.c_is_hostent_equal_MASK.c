
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char** h_addr_list; int h_addrtype; int h_length; int h_name; } ;
struct addrinfo {int dummy; } ;


 int FUNC_0 (struct addrinfo*,char*,int ,int ) ;
 int FUNC_1 (struct addrinfo*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct hostent *VAR_0, struct addrinfo *VAR_1)
{
 char **VAR_2;
 int VAR_3;





 VAR_3 = FUNC_1(VAR_1, VAR_0->h_name);
 if (VAR_3 != 0) {
  FUNC_2("not equal - he->h_name couldn't be found\n");
  return (VAR_3);
 }

 for (VAR_2 = VAR_0->h_addr_list; *VAR_2; ++VAR_2) {
  VAR_3 = FUNC_0(VAR_1, *VAR_2, VAR_0->h_length,
   VAR_0->h_addrtype);
  if (VAR_3 != 0) {
   FUNC_2("not equal - one of he->h_addr_list couldn't be found\n");
   return (VAR_3);
  }
 }





 return (0);
}
