
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int * begin; } ;
struct pt_encoder {TYPE_1__ config; int * pos; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const struct pt_encoder *VAR_2, uint64_t *VAR_3)
{
 const uint8_t *VAR_4, *VAR_5;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;


 VAR_4 = VAR_2->pos;
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_2->config.begin;
 if (!VAR_5)
  return -VAR_0;

 *VAR_3 = (uint64_t) (int64_t) (VAR_4 - VAR_5);
 return 0;
}
