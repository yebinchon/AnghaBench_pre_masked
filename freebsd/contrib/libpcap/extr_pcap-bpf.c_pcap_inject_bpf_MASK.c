
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,void const*,size_t) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_5, const void *VAR_6, size_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->fd, VAR_6, VAR_7);
 if (VAR_8 == -1) {
  FUNC_1(VAR_5->errbuf, VAR_2,
      VAR_4, "send");
  return (VAR_3);
 }
 return (VAR_8);
}
