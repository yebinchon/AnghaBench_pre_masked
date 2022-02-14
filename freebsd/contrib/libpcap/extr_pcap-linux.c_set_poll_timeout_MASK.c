
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* release; } ;
struct pcap_linux {int timeout; scalar_t__ tp_version; int poll_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char**,int) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

__attribute__((used)) static void
FUNC_2(struct pcap_linux *VAR_1)
{
 if (VAR_1->timeout == 0) {
   VAR_1->poll_timeout = -1;
 } else if (VAR_1->timeout > 0) {
   VAR_1->poll_timeout = VAR_1->timeout;
 } else {





  VAR_1->poll_timeout = 0;
 }
}
