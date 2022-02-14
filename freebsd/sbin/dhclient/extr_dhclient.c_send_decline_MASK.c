
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface_info {TYPE_1__* client; int name; } ;
struct TYPE_2__ {int packet_length; int packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;

void
FUNC_3(void *VAR_4)
{
 struct interface_info *VAR_5 = VAR_4;

 FUNC_1("DHCPDECLINE on %s to %s port %d", VAR_5->name,
     FUNC_0(VAR_2), VAR_0);


 FUNC_2(VAR_3, &VAR_5->client->packet,
     VAR_5->client->packet_length, VAR_1, VAR_2);
}
