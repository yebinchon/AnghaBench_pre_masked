
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct rpcap_header {int dummy; } ;
struct addrinfo {struct addrinfo* ai_next; scalar_t__ ai_addr; int ai_socktype; int ai_family; } ;
struct activehosts {struct activehosts* next; int sockctrl; int protocol_version; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct activehosts* VAR_4 ;
 int FUNC_0 (struct activehosts*) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 (char*,int ,char*,...) ;
 int FUNC_6 (struct rpcap_header*,int ,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int ) ;
 scalar_t__ FUNC_9 (int *,struct sockaddr_storage*) ;
 scalar_t__ FUNC_10 (int ,char*,int,char*,int ) ;

int FUNC_11(const char *VAR_5, char *VAR_6)
{
 struct activehosts *VAR_7, *VAR_8;
 struct addrinfo VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 VAR_7 = VAR_4;
 VAR_8 = ((void*)0);


 VAR_10 = ((void*)0);
 FUNC_4(&VAR_9, 0, sizeof(struct addrinfo));
 VAR_9.ai_family = VAR_1;
 VAR_9.ai_socktype = VAR_3;

 VAR_12 = FUNC_3(VAR_5, "0", &VAR_9, &VAR_10);
 if (VAR_12 != 0)
 {
  FUNC_5(VAR_6, VAR_0, "getaddrinfo() %s", FUNC_2(VAR_12));
  return -1;
 }

 while (VAR_7)
 {
  VAR_11 = VAR_10;
  while (VAR_11)
  {
   if (FUNC_9(&VAR_7->host, (struct sockaddr_storage *) VAR_11->ai_addr) == 0)
   {
    struct rpcap_header VAR_13;
    int VAR_14 = 0;


    FUNC_6(&VAR_13, VAR_7->protocol_version,
        VAR_2, 0, 0);





    if (FUNC_10(VAR_7->sockctrl,
        (char *)&VAR_13,
        sizeof(struct rpcap_header), VAR_6,
        VAR_0) < 0)
    {




     (void)FUNC_8(VAR_7->sockctrl, ((void*)0),
        0);
     VAR_14 = -1;
    }
    else
    {
     if (FUNC_8(VAR_7->sockctrl, VAR_6,
        VAR_0) == -1)
      VAR_14 = -1;
    }





    if (VAR_8)
     VAR_8->next = VAR_7->next;
    else
     VAR_4 = VAR_7->next;

    FUNC_1(VAR_10);

    FUNC_0(VAR_7);


    FUNC_7();

    return VAR_14;
   }

   VAR_11 = VAR_11->ai_next;
  }
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
 }

 if (VAR_10)
  FUNC_1(VAR_10);


 FUNC_7();

 FUNC_5(VAR_6, VAR_0, "The host you want to close the active connection is not known");
 return -1;
}
