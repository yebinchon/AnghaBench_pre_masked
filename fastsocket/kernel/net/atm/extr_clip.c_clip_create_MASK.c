
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct clip_priv {int number; struct net_device* next; int xoff_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clip_priv* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 struct net_device* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_4)
{
 struct net_device *VAR_5;
 struct clip_priv *VAR_6;
 int VAR_7;

 if (VAR_4 != -1) {
  for (VAR_5 = VAR_2; VAR_5; VAR_5 = FUNC_0(VAR_5)->next)
   if (FUNC_0(VAR_5)->number == VAR_4)
    return -VAR_0;
 } else {
  VAR_4 = 0;
  for (VAR_5 = VAR_2; VAR_5; VAR_5 = FUNC_0(VAR_5)->next)
   if (FUNC_0(VAR_5)->number >= VAR_4)
    VAR_4 = FUNC_0(VAR_5)->number + 1;
 }
 VAR_5 = FUNC_1(sizeof(struct clip_priv), "", VAR_3);
 if (!VAR_5)
  return -VAR_1;
 VAR_6 = FUNC_0(VAR_5);
 FUNC_6(VAR_5->name, "atm%d", VAR_4);
 FUNC_5(&VAR_6->xoff_lock);
 VAR_6->number = VAR_4;
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_5);
  return VAR_7;
 }
 VAR_6->next = VAR_2;
 VAR_2 = VAR_5;
 FUNC_3("registered (net:%s)\n", VAR_5->name);
 return VAR_4;
}
