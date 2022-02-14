
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct TYPE_3__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(pcap_t *VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
 struct pcap_win *VAR_7 = VAR_3->priv;
 BOOLEAN VAR_8;


 VAR_8 = FUNC_2(VAR_7->adapter, VAR_1);
 if(VAR_8 == VAR_0){
  FUNC_3(VAR_3->errbuf, VAR_2,
      "Error setting dump mode");
  return (-1);
 }


 VAR_8 = FUNC_1(VAR_7->adapter, VAR_4, (int)FUNC_4(VAR_4));
 if(VAR_8 == VAR_0){
  FUNC_3(VAR_3->errbuf, VAR_2,
      "Error setting kernel dump file name");
  return (-1);
 }


 VAR_8 = FUNC_0(VAR_7->adapter, VAR_5, VAR_6);
 if(VAR_8 == VAR_0) {
  FUNC_3(VAR_3->errbuf, VAR_2,
        "Error setting dump limit");
  return (-1);
 }

 return (0);
}
