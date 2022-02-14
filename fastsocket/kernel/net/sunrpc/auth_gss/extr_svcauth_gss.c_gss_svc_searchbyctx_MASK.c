
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; int data; } ;
struct rsc {int h; int handle; } ;
typedef int rsci ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct rsc*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct rsc*) ;
 struct rsc* FUNC_4 (struct rsc*) ;

__attribute__((used)) static struct rsc *
FUNC_5(struct xdr_netobj *VAR_1)
{
 struct rsc VAR_2;
 struct rsc *VAR_3;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 if (FUNC_1(&VAR_2.handle, VAR_1->data, VAR_1->len))
  return ((void*)0);
 VAR_3 = FUNC_4(&VAR_2);
 FUNC_3(&VAR_2);
 if (!VAR_3)
  return ((void*)0);
 if (FUNC_0(&VAR_0, &VAR_3->h, ((void*)0)))
  return ((void*)0);
 return VAR_3;
}
