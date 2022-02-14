
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct in_addr {int dummy; } ;
struct hostent {char** h_addr_list; } ;
struct TYPE_12__ {scalar_t__ n_len; int * n_bytes; } ;
struct TYPE_11__ {int ep_len; TYPE_5__* ep_val; } ;
struct TYPE_13__ {TYPE_3__ pkey; int key_type; TYPE_2__ ep; scalar_t__ name; } ;
typedef TYPE_4__ nis_server ;
typedef scalar_t__ nis_name ;
typedef int hname ;
struct TYPE_14__ {int * proto; int * family; int * uaddr; } ;
typedef TYPE_5__ endpoint ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int) ;
 struct hostent* FUNC_1 (char*) ;
 char* FUNC_2 (struct in_addr) ;
 int FUNC_3 (char*,int,char*,char*) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static nis_server *
FUNC_5(struct sockaddr_in *VAR_1, char *VAR_2, nis_server *VAR_3,
    endpoint VAR_4[], int VAR_5)
{
 char VAR_6[256];
 int VAR_7 = 0, VAR_8;
 struct hostent *VAR_9;
 struct hostent VAR_10;
 char *VAR_11[2];
 endpoint *VAR_12;

 if (VAR_2 == ((void*)0) && VAR_1 == ((void*)0))
  return (((void*)0));

 if (VAR_1 == ((void*)0)) {
  VAR_9 = FUNC_1(VAR_2);
  if (VAR_9 == ((void*)0))
   return(((void*)0));
 } else {
  VAR_9 = &VAR_10;
  VAR_11[0] = (char *)&VAR_1->sin_addr.s_addr;
  VAR_11[1] = ((void*)0);
  VAR_10.h_addr_list = VAR_11;
 }





 for (VAR_8 = 0, VAR_12 = VAR_4; (VAR_9->h_addr_list[VAR_8] != ((void*)0)) && (VAR_7 < VAR_5);
     VAR_8++, VAR_12++, VAR_7++) {
  struct in_addr *VAR_13;

  VAR_13 = (struct in_addr *)VAR_9->h_addr_list[VAR_8];
  FUNC_3(VAR_6, sizeof(VAR_6), "%s.0.111", FUNC_2(*VAR_13));
  VAR_12->uaddr = FUNC_4(VAR_6);
  VAR_12->family = FUNC_4("inet");
  VAR_12->proto = FUNC_4("tcp");
  if (VAR_12->uaddr == ((void*)0) || VAR_12->family == ((void*)0) || VAR_12->proto == ((void*)0)) {
   FUNC_0(VAR_4, VAR_7 + 1);
   return (((void*)0));
  }
 }

 for (VAR_8 = 0; (VAR_9->h_addr_list[VAR_8] != ((void*)0)) && (VAR_7 < VAR_5);
     VAR_8++, VAR_12++, VAR_7++) {
  struct in_addr *VAR_14;

  VAR_14 = (struct in_addr *)VAR_9->h_addr_list[VAR_8];
  FUNC_3(VAR_6, sizeof(VAR_6), "%s.0.111", FUNC_2(*VAR_14));
  VAR_12->uaddr = FUNC_4(VAR_6);
  VAR_12->family = FUNC_4("inet");
  VAR_12->proto = FUNC_4("udp");
  if (VAR_12->uaddr == ((void*)0) || VAR_12->family == ((void*)0) || VAR_12->proto == ((void*)0)) {
   FUNC_0(VAR_4, VAR_7 + 1);
   return (((void*)0));
  }
 }

 VAR_3->name = (nis_name) VAR_2;
 VAR_3->ep.ep_len = VAR_7;
 VAR_3->ep.ep_val = VAR_4;
 VAR_3->key_type = VAR_0;
 VAR_3->pkey.n_bytes = ((void*)0);
 VAR_3->pkey.n_len = 0;
 return (VAR_3);
}
