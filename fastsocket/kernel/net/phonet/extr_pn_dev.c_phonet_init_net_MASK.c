
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int list; } ;
struct phonet_net {TYPE_1__ pndevs; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct phonet_net*) ;
 struct phonet_net* FUNC_2 (int,int ) ;
 int FUNC_3 (struct net*,int ,struct phonet_net*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct net*,char*,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_4)
{
 struct phonet_net *VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_4(VAR_4, "phonet", 0, &VAR_3)) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 FUNC_0(&VAR_5->pndevs.list);
 FUNC_5(&VAR_5->pndevs.lock);
 FUNC_3(VAR_4, VAR_2, VAR_5);
 return 0;
}
