
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int * ai_addr; struct addrinfo* ai_next; int ai_protocol; int ai_socktype; int ai_family; } ;
struct mx_hostentry {int pref; int addr; struct addrinfo ai; int sa; int host; } ;
typedef int servname ;
typedef int hints ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct sockaddr*,int ,int ,int,int *,int ,int ) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 struct mx_hostentry* FUNC_5 (struct mx_hostentry*,size_t) ;
 size_t FUNC_6 (size_t,int const) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_9(int VAR_4, const char *VAR_5, int VAR_6, struct mx_hostentry **VAR_7, size_t *VAR_8)
{
 struct addrinfo VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 char VAR_12[10];
 struct mx_hostentry *VAR_13;
 const int VAR_14 = 10;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ai_family = VAR_2;
 VAR_9.ai_socktype = VAR_3;
 VAR_9.ai_protocol = VAR_0;

 FUNC_7(VAR_12, sizeof(VAR_12), "%d", VAR_6);
 switch (FUNC_2(VAR_5, VAR_12, &VAR_9, &VAR_11)) {
 case 0:
  break;
 case 129:
 case 128:
  goto out;
 default:
  return(-1);
 }

 for (VAR_10 = VAR_11; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next) {
  if (*VAR_8 + 1 >= FUNC_6(*VAR_8, VAR_14)) {
   size_t VAR_15 = FUNC_6(*VAR_8 + 2, VAR_14);
   *VAR_7 = FUNC_5(*VAR_7, VAR_15 * sizeof(**VAR_7));
   if (*VAR_7 == ((void*)0))
    goto out;
  }

  VAR_13 = &(*VAR_7)[*VAR_8];
  FUNC_8(VAR_13->host, VAR_5, sizeof(VAR_13->host));
  VAR_13->pref = VAR_4;
  VAR_13->ai = *VAR_10;
  VAR_13->ai.ai_addr = ((void*)0);
  FUNC_0(VAR_10->ai_addr, &VAR_13->sa, VAR_13->ai.ai_addrlen);

  FUNC_3((struct sockaddr *)&VAR_13->sa, VAR_13->ai.ai_addrlen,
       VAR_13->addr, sizeof(VAR_13->addr),
       ((void*)0), 0, VAR_1);

  (*VAR_8)++;
 }
 FUNC_1(VAR_11);

 return (0);

out:
 if (VAR_11 != ((void*)0))
  FUNC_1(VAR_11);
 return (1);
}
