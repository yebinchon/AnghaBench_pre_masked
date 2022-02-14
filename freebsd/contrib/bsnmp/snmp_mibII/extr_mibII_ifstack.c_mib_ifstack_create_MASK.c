
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int * subs; } ;
struct mibifstack {TYPE_1__ index; } ;
struct mibif {int index; } ;


 int FUNC_0 (struct mibifstack*,int *) ;
 int FUNC_1 () ;
 struct mibifstack* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(const struct mibif *VAR_2, const struct mibif *VAR_3)
{
 struct mibifstack *VAR_4;

 if ((VAR_4 = FUNC_2(sizeof(*VAR_4))) == ((void*)0))
  return (-1);

 VAR_4->index.len = 2;
 VAR_4->index.subs[0] = VAR_3 ? VAR_3->index : 0;
 VAR_4->index.subs[1] = VAR_2 ? VAR_2->index : 0;

 FUNC_0(VAR_4, &VAR_1);

 VAR_0 = FUNC_1();

 return (0);
}
