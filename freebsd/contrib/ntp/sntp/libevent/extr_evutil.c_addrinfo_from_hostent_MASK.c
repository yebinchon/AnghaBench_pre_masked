
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; void* sin6_port; int sin6_family; int sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr_in {int sin6_addr; void* sin6_port; int sin6_family; int sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_name; scalar_t__* h_addr_list; } ;
struct evutil_addrinfo {int ai_flags; int * ai_canonname; } ;
typedef int sin6 ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 struct evutil_addrinfo* FUNC_1 (struct evutil_addrinfo*,struct evutil_addrinfo*) ;
 int FUNC_2 (struct evutil_addrinfo*) ;
 struct evutil_addrinfo* FUNC_3 (struct sockaddr*,int,struct evutil_addrinfo const*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,scalar_t__,int) ;
 int FUNC_6 (struct sockaddr_in6*,int ,int) ;
 int * FUNC_7 (scalar_t__) ;

__attribute__((used)) static struct evutil_addrinfo *
FUNC_8(const struct hostent *VAR_5,
    int VAR_6, const struct evutil_addrinfo *VAR_7)
{
 int VAR_8;
 struct sockaddr_in VAR_9;
 struct sockaddr_in6 VAR_10;
 struct sockaddr *VAR_11;
 int VAR_12;
 struct evutil_addrinfo *VAR_13=((void*)0), *VAR_14;
 void *VAR_15;

 if (VAR_5->h_addrtype == VAR_3) {
  FUNC_6(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.sin_family = VAR_0;
  VAR_9.sin_port = FUNC_4(VAR_6);
  VAR_11 = (struct sockaddr *)&VAR_9;
  VAR_12 = sizeof(struct sockaddr_in);
  VAR_15 = &VAR_9.sin_addr;
  if (VAR_5->h_length != sizeof(VAR_9.sin_addr)) {
   FUNC_0("Weird h_length from gethostbyname");
   return ((void*)0);
  }
 } else if (VAR_5->h_addrtype == VAR_4) {
  FUNC_6(&VAR_10, 0, sizeof(VAR_10));
  VAR_10 = VAR_1;
  VAR_10 = FUNC_4(VAR_6);
  VAR_11 = (struct sockaddr *)&VAR_10;
  VAR_12 = sizeof(struct sockaddr_in);
  VAR_15 = &VAR_10;
  if (VAR_5->h_length != sizeof(VAR_10)) {
   FUNC_0("Weird h_length from gethostbyname");
   return ((void*)0);
  }
 } else
  return ((void*)0);

 for (VAR_8 = 0; VAR_5->h_addr_list[VAR_8]; ++VAR_8) {
  FUNC_5(VAR_15, VAR_5->h_addr_list[VAR_8], VAR_5->h_length);
  VAR_14 = FUNC_3(VAR_11, VAR_12, VAR_7);
  if (!VAR_14) {
   FUNC_2(VAR_13);
   return ((void*)0);
  }
  VAR_13 = FUNC_1(VAR_13, VAR_14);
 }

 if (VAR_13 && ((VAR_7->ai_flags & VAR_2) && VAR_5->h_name)) {
  VAR_13->ai_canonname = FUNC_7(VAR_5->h_name);
  if (VAR_13->ai_canonname == ((void*)0)) {
   FUNC_2(VAR_13);
   return ((void*)0);
  }
 }

 return VAR_13;
}
