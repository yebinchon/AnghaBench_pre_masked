
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rss_config {int rss_nbuckets; } ;



int
FUNC_0(struct rss_config *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (-1);
 return (VAR_0->rss_nbuckets);
}
