
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in6 {short sin6_family; TYPE_1__ sin6_addr; } ;
struct sockaddr_in {short sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {void* sa_family; } ;
struct hostent {void* h_addrtype; int h_name; int h_length; int h_addr; } ;
struct addrinfo {void* ai_family; int ai_addrlen; int ai_flags; int ai_canonname; TYPE_3__* ai_addr; } ;
struct TYPE_6__ {int sa_len; void* sa_family; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,void*,struct hostent**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_8 ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,char const*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int * FUNC_7 (char const*,char) ;

__attribute__((used)) static int
FUNC_8(
 const char *VAR_9,
 struct addrinfo *VAR_10,
 const struct addrinfo *VAR_11)
{
 struct hostent *VAR_12 = ((void*)0);
 struct sockaddr_in *VAR_13;
 struct sockaddr_in6 *VAR_14;
 int VAR_15;

 VAR_10->ai_addr = FUNC_2(sizeof(struct sockaddr_storage), 1);
 if (VAR_10->ai_addr == ((void*)0))
  return (VAR_5);






 if (VAR_9 == ((void*)0)) {
  if (VAR_10->ai_family == VAR_0)
  {
   VAR_10->ai_addrlen = sizeof(struct sockaddr_in);
   VAR_13 = (struct sockaddr_in *)VAR_10->ai_addr;
   VAR_13->sin_family = (short) VAR_10->ai_family;
   VAR_13->sin_addr.s_addr = FUNC_4(VAR_7);
  }
  else
  {
   VAR_10->ai_addrlen = sizeof(struct sockaddr_in6);
   VAR_14 = (struct sockaddr_in6 *)VAR_10->ai_addr;
   VAR_14->sin6_family = (short) VAR_10->ai_family;







  }




  return (0);
 }




 if(FUNC_7(VAR_9, ':') != ((void*)0)) {
  if (FUNC_5(VAR_1, VAR_9,
      &((struct sockaddr_in6 *)VAR_10->ai_addr)->sin6_addr) == 1) {
   ((struct sockaddr_in6 *)VAR_10->ai_addr)->sin6_family = VAR_1;
   VAR_10->ai_family = VAR_1;
   VAR_10->ai_addrlen = sizeof(struct sockaddr_in6);
   return (0);
  }
 }




 if (FUNC_5(VAR_0, VAR_9,
     &((struct sockaddr_in *)VAR_10->ai_addr)->sin_addr) == 1) {
  ((struct sockaddr *)VAR_10->ai_addr)->sa_family = VAR_0;
  VAR_10->ai_family = VAR_0;
  VAR_10->ai_addrlen = sizeof(struct sockaddr_in);
  return (0);
 }




 if (VAR_11 != ((void*)0) && (VAR_11->ai_flags & VAR_3))
  return (VAR_6);





 VAR_15 = FUNC_0(VAR_9, VAR_0, &VAR_12);

 if (VAR_12 == ((void*)0)) {
  if (VAR_15 == VAR_8 || VAR_15 == VAR_4)
   return (VAR_4);
  else if (VAR_15 == VAR_6) {
   if (FUNC_5(VAR_0, VAR_9,
       &((struct sockaddr_in *)VAR_10->ai_addr)->sin_addr) == 1) {
    ((struct sockaddr *)VAR_10->ai_addr)->sa_family = VAR_0;
    VAR_10->ai_family = VAR_0;
    VAR_10->ai_addrlen = sizeof(struct sockaddr_in);
    return (0);
   }
   return (VAR_15);
  }
  else
  {
   return (VAR_15);
  }
 }
 VAR_10->ai_family = VAR_12->h_addrtype;
 VAR_10->ai_addrlen = sizeof(struct sockaddr);
 VAR_13 = (struct sockaddr_in *)VAR_10->ai_addr;
 FUNC_6(&VAR_13->sin_addr, VAR_12->h_addr, VAR_12->h_length);
 VAR_10->ai_addr->sa_family = VAR_12->h_addrtype;



 if (VAR_11 != ((void*)0) && (VAR_11->ai_flags & VAR_2))
  VAR_10->ai_canonname = FUNC_3(VAR_12->h_name);
 return (0);
}
