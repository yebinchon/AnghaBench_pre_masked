
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int selectable_fd; int * priv; int * required_select_timeout; int handle; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int ,char*) ;

__attribute__((used)) static pcap_t *
FUNC_3(char *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 pcap_t *VAR_6;







 VAR_5 = FUNC_0(sizeof (pcap_t) + VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_3, VAR_1,
      VAR_2, "malloc");
  return (((void*)0));
 }
 FUNC_1(VAR_5, 0, sizeof (pcap_t) + VAR_4);




 VAR_6 = (pcap_t *)VAR_5;




 VAR_6->fd = -1;

 VAR_6->selectable_fd = -1;
 VAR_6->required_select_timeout = ((void*)0);



 if (VAR_4 == 0) {

  VAR_6->priv = ((void*)0);
 } else {




  VAR_6->priv = (void *)(VAR_5 + sizeof (pcap_t));
 }

 return (VAR_6);
}
