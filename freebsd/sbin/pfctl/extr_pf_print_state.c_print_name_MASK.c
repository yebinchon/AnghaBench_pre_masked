
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin_len; int sin_family; int sin6_len; int sin6_family; int sin6_addr; int sin_addr; } ;
struct sockaddr_in {int sin_len; int sin_family; int sin6_len; int sin6_family; int sin6_addr; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct pf_addr {int v6; int v4; } ;
typedef int sin6 ;
typedef int sin ;
typedef int sa_family_t ;
typedef int host ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 int FUNC_1 (struct sockaddr_in6*,int ,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(struct pf_addr *VAR_2, sa_family_t VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_3(VAR_4, "?", sizeof(VAR_4));
 switch (VAR_3) {
 case 129: {
  struct sockaddr_in VAR_5;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.sin_len = sizeof(VAR_5);
  VAR_5.sin_family = 129;
  VAR_5.sin_addr = VAR_2->v4;
  FUNC_0((struct sockaddr *)&VAR_5, VAR_5.sin_len,
      VAR_4, sizeof(VAR_4), ((void*)0), 0, VAR_1);
  break;
 }
 case 128: {
  struct sockaddr_in6 VAR_6;

  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  VAR_6 = sizeof(VAR_6);
  VAR_6 = 128;
  VAR_6 = VAR_2->v6;
  FUNC_0((struct sockaddr *)&VAR_6, VAR_6,
      VAR_4, sizeof(VAR_4), ((void*)0), 0, VAR_1);
  break;
 }
 }
 FUNC_2("%s", VAR_4);
}
