
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct addrinfo {int ai_family; int s_addr; int ai_flags; } ;
struct pf_addr {struct addrinfo v6; struct addrinfo v4; } ;
typedef int hints ;




 int VAR_0 ;
 int FUNC_0 (struct addrinfo*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,int ,int,char const**) ;

void
FUNC_9(char *VAR_1, struct pf_addr *VAR_2)
{
 char *VAR_3;
 const char *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct addrinfo VAR_9, *VAR_10;

 if ((VAR_3 = FUNC_7(VAR_1, '/')) == ((void*)0))
  return;

 *VAR_3++ = '\0';
 VAR_5 = FUNC_8(VAR_3, 0, 128, &VAR_4);
 if (VAR_4)
  FUNC_1(1, "prefix is %s: %s", VAR_4, VAR_3);

 FUNC_0(&VAR_9, sizeof(VAR_9));

 VAR_9.ai_flags |= VAR_0;

 if ((VAR_6 = FUNC_4(VAR_1, ((void*)0), &VAR_9, &VAR_10))) {
  FUNC_1(1, "getaddrinfo: %s", FUNC_3(VAR_6));

 }

 if (VAR_10->ai_family == 129 && VAR_5 > 32)
  FUNC_1(1, "prefix too long for AF_INET");
 else if (VAR_10->ai_family == 128 && VAR_5 > 128)
  FUNC_1(1, "prefix too long for AF_INET6");

 VAR_7 = VAR_5 >> 3;
 VAR_8 = VAR_5 & 7;
 switch (VAR_10->ai_family) {
 case 129:
  FUNC_0(&VAR_2->v4, sizeof(VAR_2->v4));
  VAR_2->v4.s_addr = FUNC_5((u_int32_t)
      (0xffffffffffULL << (32 - VAR_5)));
  break;
 case 128:
  FUNC_0(&VAR_2->v6, sizeof(VAR_2->v6));
  if (VAR_7 > 0)
   FUNC_6((void *)&VAR_2->v6, 0xff, VAR_7);
  if (VAR_8 > 0)
   *((u_char *)&VAR_2->v6 + VAR_7) =
       (0xff00 >> VAR_8) & 0xff;
  break;
 }
 FUNC_2(VAR_10);
}
