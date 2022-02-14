
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_septel {int dummy; } ;
struct TYPE_4__ {int setnonblock_op; int getnonblock_op; int activate_op; } ;
typedef TYPE_1__ pcap_t ;


 TYPE_1__* FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char) ;

pcap_t *FUNC_3(const char *VAR_3, char *VAR_4, int *VAR_5) {
 const char *VAR_6;
 pcap_t *VAR_7;


 VAR_6 = FUNC_2(VAR_3, '/');
 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_3;
 if (FUNC_1(VAR_6, "septel") != 0) {

  *VAR_5 = 0;
  return ((void*)0);
 }


 *VAR_5 = 1;

 VAR_7 = FUNC_0(VAR_4, sizeof (struct pcap_septel));
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->activate_op = VAR_0;







 VAR_7->getnonblock_op = VAR_1;
 VAR_7->setnonblock_op = VAR_2;
 return VAR_7;
}
