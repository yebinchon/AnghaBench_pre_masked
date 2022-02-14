
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf_rss_info {int* key; int cfg; int rss_size; int* ind_tbl; scalar_t__ hash_bits; int enable; } ;
struct nicvf {scalar_t__ cpi_alg; int rx_queues; struct nicvf_rss_info rss_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nicvf*) ;
 int FUNC_2 (struct nicvf*) ;
 int FUNC_3 (struct nicvf*,int ,int) ;
 int FUNC_4 (struct nicvf*) ;

__attribute__((used)) static int
FUNC_5(struct nicvf *VAR_8)
{
 struct nicvf_rss_info *VAR_9;
 int VAR_10;

 FUNC_2(VAR_8);

 VAR_9 = &VAR_8->rss_info;
 if (VAR_8->cpi_alg != VAR_0) {
  VAR_9->enable = VAR_2;
  VAR_9->hash_bits = 0;
  return (VAR_1);
 }

 VAR_9->enable = VAR_7;


 VAR_9->key[0] = 0xFEED0BADFEED0BADUL;
 VAR_9->key[1] = 0xFEED0BADFEED0BADUL;
 VAR_9->key[2] = 0xFEED0BADFEED0BADUL;
 VAR_9->key[3] = 0xFEED0BADFEED0BADUL;
 VAR_9->key[4] = 0xFEED0BADFEED0BADUL;

 FUNC_4(VAR_8);

 VAR_9->cfg = VAR_4 | VAR_5 | VAR_6;
 FUNC_3(VAR_8, VAR_3, VAR_9->cfg);

 VAR_9->hash_bits = FUNC_0(VAR_9->rss_size) - 1;
 for (VAR_10 = 0; VAR_10 < VAR_9->rss_size; VAR_10++)
  VAR_9->ind_tbl[VAR_10] = VAR_10 % VAR_8->rx_queues;

 FUNC_1(VAR_8);

 return (0);
}
