
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee802_1x_mka_sci {int port; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

u64 FUNC_1(struct ieee802_1x_mka_sci *VAR_1)
{
 struct ieee802_1x_mka_sci VAR_2;

 FUNC_0(VAR_2.addr, VAR_1->addr, VAR_0);
 VAR_2.port = VAR_1->port;

 return *((u64 *) &VAR_2);
}
