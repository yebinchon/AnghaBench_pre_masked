
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sklist; int sklist_lock; } ;
struct net {TYPE_1__ packet; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct net*,char*,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2)
{
 FUNC_2(&VAR_2->packet.sklist_lock);
 FUNC_0(&VAR_2->packet.sklist);

 if (!FUNC_1(VAR_2, "packet", 0, &VAR_1))
  return -VAR_0;

 return 0;
}
