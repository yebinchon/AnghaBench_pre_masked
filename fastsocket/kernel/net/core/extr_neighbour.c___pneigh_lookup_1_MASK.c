
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pneigh_entry {struct pneigh_entry* next; struct net_device* dev; int key; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int memcmp (int ,void const*,int) ;
 scalar_t__ net_eq (int ,struct net*) ;
 int pneigh_net (struct pneigh_entry*) ;

__attribute__((used)) static struct pneigh_entry *__pneigh_lookup_1(struct pneigh_entry *n,
           struct net *net,
           const void *pkey,
           int key_len,
           struct net_device *dev)
{
 while (n) {
  if (!memcmp(n->key, pkey, key_len) &&
      net_eq(pneigh_net(n), net) &&
      (n->dev == dev || !n->dev))
   return n;
  n = n->next;
 }
 return ((void*)0);
}
