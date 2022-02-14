
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;
typedef scalar_t__ pcap_direction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int,int ,char*,char*) ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_9, pcap_direction_t VAR_10)
{
 (void) FUNC_2(VAR_9->errbuf, sizeof(VAR_9->errbuf),
     "This system doesn't support BIOCSSEESENT, so the direction can't be set");
 return (-1);

}
