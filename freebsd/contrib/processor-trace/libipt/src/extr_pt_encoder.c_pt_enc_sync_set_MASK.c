
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int * end; int * begin; } ;
struct pt_encoder {int * pos; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct pt_encoder *VAR_2, uint64_t VAR_3)
{
 uint8_t *VAR_4, *VAR_5, *VAR_6;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = VAR_2->config.begin;
 VAR_5 = VAR_2->config.end;
 VAR_6 = VAR_4 + VAR_3;

 if (VAR_5 < VAR_6 || VAR_6 < VAR_4)
  return -VAR_0;

 VAR_2->pos = VAR_6;
 return 0;
}
