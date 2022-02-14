
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct kmem_cache {int dummy; } ;
struct inet_bind_hashbucket {int chain; } ;
struct inet_bind_bucket {unsigned short port; int node; int owners; scalar_t__ num_owners; scalar_t__ fastreuseport; scalar_t__ fastreuse; int ib_net; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct net*) ;
 struct inet_bind_bucket* FUNC_3 (struct kmem_cache*,int ) ;
 int FUNC_4 (int *,int ) ;

struct inet_bind_bucket *FUNC_5(struct kmem_cache *VAR_1,
       struct net *VAR_2,
       struct inet_bind_hashbucket *VAR_3,
       const unsigned short VAR_4)
{
 struct inet_bind_bucket *VAR_5 = FUNC_3(VAR_1, VAR_0);

 if (VAR_5 != ((void*)0)) {
  FUNC_4(&VAR_5->ib_net, FUNC_2(VAR_2));
  VAR_5->port = VAR_4;
  VAR_5->fastreuse = 0;
  VAR_5->fastreuseport = 0;
  VAR_5->num_owners = 0;
  FUNC_0(&VAR_5->owners);
  FUNC_1(&VAR_5->node, &VAR_3->chain);
 }
 return VAR_5;
}
