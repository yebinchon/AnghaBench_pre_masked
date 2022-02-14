
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_softc {int clients; } ;
struct client_info {scalar_t__ activated; int client; } ;
typedef int device_t ;


 int FUNC_0 (struct host1x_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct client_info*,int ) ;
 int FUNC_2 (struct host1x_softc*) ;
 struct host1x_softc* FUNC_3 (int ) ;
 int VAR_3 ;
 struct client_info* FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, device_t VAR_5)
{
 struct host1x_softc *VAR_6;
 struct client_info *VAR_7;

 VAR_6 = FUNC_3(VAR_4);

 VAR_7 = FUNC_4(sizeof(struct client_info), VAR_0, VAR_1 | VAR_2);
 VAR_7->client = VAR_5;
 VAR_7->activated = 0;

 FUNC_0(VAR_6);
 FUNC_1(&VAR_6->clients, VAR_7, VAR_3);
 FUNC_2(VAR_6);

 return (0);
}
