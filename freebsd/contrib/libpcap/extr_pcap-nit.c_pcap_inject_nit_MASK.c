
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
typedef int sa ;
struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr*,int ,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,void const*,size_t,int ,struct sockaddr*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct sockaddr VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_6.sa_data, VAR_1, sizeof(VAR_6.sa_data));
 VAR_7 = FUNC_2(VAR_3->fd, VAR_4, VAR_5, 0, &VAR_6, sizeof(VAR_6));
 if (VAR_7 == -1) {
  FUNC_1(VAR_3->errbuf, VAR_0,
      VAR_2, "send");
  return (-1);
 }
 return (VAR_7);
}
