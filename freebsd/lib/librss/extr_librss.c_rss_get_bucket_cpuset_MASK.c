
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rss_config {int rss_nbuckets; int * rss_bucket_map; } ;
typedef scalar_t__ rss_bucket_type_t ;
typedef int cpuset_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int
FUNC_2(struct rss_config *VAR_5, rss_bucket_type_t VAR_6,
    int VAR_7, cpuset_t *VAR_8)
{

 if (VAR_7 < 0 || VAR_7 >= VAR_5->rss_nbuckets) {
  VAR_4 = VAR_0;
  return (-1);
 }






 if (VAR_6 <= VAR_3 || VAR_6 > VAR_2) {
  VAR_4 = VAR_1;
  return (-1);
 }

 FUNC_1(VAR_8);
 FUNC_0(VAR_5->rss_bucket_map[VAR_7], VAR_8);

 return (0);
}
