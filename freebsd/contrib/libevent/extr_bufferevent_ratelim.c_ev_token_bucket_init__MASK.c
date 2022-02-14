
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ev_token_bucket_cfg {scalar_t__ read_maximum; scalar_t__ write_maximum; scalar_t__ read_rate; scalar_t__ write_rate; } ;
struct ev_token_bucket {scalar_t__ read_limit; scalar_t__ write_limit; int last_updated; } ;
typedef int ev_uint32_t ;
typedef scalar_t__ ev_int64_t ;



int
FUNC_0(struct ev_token_bucket *VAR_0,
    const struct ev_token_bucket_cfg *VAR_1,
    ev_uint32_t VAR_2,
    int VAR_3)
{
 if (VAR_3) {





  if (VAR_0->read_limit > (ev_int64_t) VAR_1->read_maximum)
   VAR_0->read_limit = VAR_1->read_maximum;
  if (VAR_0->write_limit > (ev_int64_t) VAR_1->write_maximum)
   VAR_0->write_limit = VAR_1->write_maximum;
 } else {
  VAR_0->read_limit = VAR_1->read_rate;
  VAR_0->write_limit = VAR_1->write_rate;
  VAR_0->last_updated = VAR_2;
 }
 return 0;
}
