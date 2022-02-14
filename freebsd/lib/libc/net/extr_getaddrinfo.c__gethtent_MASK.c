
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct addrinfo {scalar_t__ ai_family; int ai_flags; scalar_t__ ai_protocol; int ai_socktype; struct addrinfo* ai_next; scalar_t__ ai_addr; } ;
typedef int hints ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (struct addrinfo*) ;
 scalar_t__ FUNC_4 (struct addrinfo const*,struct addrinfo*,char*) ;
 int FUNC_5 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static struct addrinfo *
FUNC_9(FILE **VAR_6, const char *VAR_7, const struct addrinfo *VAR_8)
{
 char *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 struct addrinfo VAR_13, *VAR_14, *VAR_15;
 int VAR_16;
 const char *VAR_17;
 char VAR_18[8*1024];

 if (!*VAR_6 && !(*VAR_6 = FUNC_2(VAR_5, "re")))
  return (((void*)0));
again:
 if (!(VAR_9 = FUNC_1(VAR_18, sizeof VAR_18, *VAR_6)))
  return (((void*)0));
 if (*VAR_9 == '#')
  goto again;
 VAR_10 = FUNC_8(VAR_9, "#\n");
 if (VAR_10 != ((void*)0))
  *VAR_10 = '\0';
 if (!(VAR_10 = FUNC_8(VAR_9, " \t")))
  goto again;
 *VAR_10++ = '\0';
 VAR_17 = VAR_9;
 VAR_12 = ((void*)0);

 while (VAR_10 && *VAR_10) {
  if (*VAR_10 == ' ' || *VAR_10 == '\t') {
   VAR_10++;
   continue;
  }
  VAR_11 = VAR_10;
  if (VAR_12 == ((void*)0))
   VAR_12 = VAR_10;
  if ((VAR_10 = FUNC_8(VAR_10, " \t")) != ((void*)0))
   *VAR_10++ = '\0';
  if (FUNC_7(VAR_7, VAR_11) == 0)
   goto found;
 }
 goto again;

found:

 FUNC_6(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.ai_family = VAR_8->ai_family;
 VAR_13.ai_socktype = VAR_4;
 VAR_13.ai_protocol = 0;
 VAR_13.ai_flags = VAR_2;
 if (VAR_8->ai_family == VAR_0 &&
     (VAR_8->ai_flags & VAR_3) == VAR_3)
  VAR_13.ai_flags |= VAR_3;
 VAR_16 = FUNC_5(VAR_17, "0", &VAR_13, &VAR_14);
 if (VAR_16)
  goto again;
 for (VAR_15 = VAR_14; VAR_15; VAR_15 = VAR_15->ai_next) {

  VAR_15->ai_flags = VAR_8->ai_flags;
  VAR_15->ai_socktype = VAR_8->ai_socktype;
  VAR_15->ai_protocol = VAR_8->ai_protocol;

  if (VAR_8->ai_flags & VAR_1) {
   if (FUNC_4(VAR_8, VAR_15, VAR_12) != 0) {
    FUNC_3(VAR_14);
    goto again;
   }
  }
 }
 return VAR_14;
}
