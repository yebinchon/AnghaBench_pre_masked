
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {struct addrinfo* ai_next; scalar_t__ ai_addr; int ai_socktype; int ai_family; } ;
struct activehosts {struct activehosts* next; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct activehosts* VAR_3 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int FUNC_4 (char*,int ,char*,int ) ;
 scalar_t__ FUNC_5 (int *,struct sockaddr_storage*) ;

__attribute__((used)) static struct activehosts *
FUNC_6(const char *VAR_4, int *VAR_5, char *VAR_6)
{
 struct activehosts *VAR_7;
 struct addrinfo VAR_8, *VAR_9, *VAR_10;
 int VAR_11;


 VAR_9 = ((void*)0);
 FUNC_3(&VAR_8, 0, sizeof(struct addrinfo));
 VAR_8.ai_family = VAR_1;
 VAR_8.ai_socktype = VAR_2;

 VAR_11 = FUNC_2(VAR_4, "0", &VAR_8, &VAR_9);
 if (VAR_11 != 0)
 {
  FUNC_4(VAR_6, VAR_0, "getaddrinfo() %s",
      FUNC_1(VAR_11));
  *VAR_5 = 1;
  return ((void*)0);
 }

 VAR_7 = VAR_3;

 while (VAR_7)
 {
  VAR_10 = VAR_9;
  while (VAR_10)
  {
   if (FUNC_5(&VAR_7->host, (struct sockaddr_storage *) VAR_10->ai_addr) == 0)
   {
    *VAR_5 = 0;
    FUNC_0(VAR_9);
    return VAR_7;
   }

   VAR_10 = VAR_10->ai_next;
  }
  VAR_7 = VAR_7->next;
 }

 if (VAR_9)
  FUNC_0(VAR_9);





 *VAR_5 = 0;
 return ((void*)0);
}
