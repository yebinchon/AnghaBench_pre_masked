
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ev_token_bucket_cfg {unsigned int read_maximum; unsigned int read_rate; unsigned int write_maximum; unsigned int write_rate; } ;
struct ev_token_bucket {void* last_updated; unsigned int read_limit; unsigned int write_limit; } ;
typedef void* ev_uint32_t ;


 unsigned int VAR_0 ;

int
FUNC_0(struct ev_token_bucket *VAR_1,
    const struct ev_token_bucket_cfg *VAR_2,
    ev_uint32_t VAR_3)
{


 unsigned VAR_4 = VAR_3 - VAR_1->last_updated;



 if (VAR_4 == 0 || VAR_4 > VAR_0)
  return 0;
 if ((VAR_2->read_maximum - VAR_1->read_limit) / VAR_4 < VAR_2->read_rate)
  VAR_1->read_limit = VAR_2->read_maximum;
 else
  VAR_1->read_limit += VAR_4 * VAR_2->read_rate;


 if ((VAR_2->write_maximum - VAR_1->write_limit) / VAR_4 < VAR_2->write_rate)
  VAR_1->write_limit = VAR_2->write_maximum;
 else
  VAR_1->write_limit += VAR_4 * VAR_2->write_rate;


 VAR_1->last_updated = VAR_3;

 return 1;
}
