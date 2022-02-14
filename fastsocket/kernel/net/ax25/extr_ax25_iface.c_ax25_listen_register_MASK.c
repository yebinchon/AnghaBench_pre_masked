
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct listen_struct {struct listen_struct* next; struct net_device* dev; int callsign; } ;
typedef int ax25_address ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct net_device*) ;
 struct listen_struct* FUNC_1 (int,int ) ;
 struct listen_struct* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(ax25_address *VAR_4, struct net_device *VAR_5)
{
 struct listen_struct *VAR_6;

 if (FUNC_0(VAR_4, VAR_5))
  return 0;

 if ((VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1)) == ((void*)0))
  return -VAR_0;

 VAR_6->callsign = *VAR_4;
 VAR_6->dev = VAR_5;

 FUNC_2(&VAR_3);
 VAR_6->next = VAR_2;
 VAR_2 = VAR_6;
 FUNC_3(&VAR_3);

 return 0;
}
