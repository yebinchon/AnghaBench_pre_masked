
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rss_config {struct rss_config* rss_bucket_map; } ;


 int FUNC_0 (struct rss_config*) ;

void
FUNC_1(struct rss_config *VAR_0)
{

 if ((VAR_0 != ((void*)0)) && VAR_0->rss_bucket_map)
  FUNC_0(VAR_0->rss_bucket_map);
 if (VAR_0 != ((void*)0))
  FUNC_0(VAR_0);
}
