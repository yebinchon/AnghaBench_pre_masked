
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * end; int * begin; } ;
struct pt_encoder {TYPE_1__ config; int * pos; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct pt_encoder *VAR_2, unsigned int VAR_3)
{
 const uint8_t *VAR_4, *VAR_5, *VAR_6;

 if (!VAR_2)
  return -VAR_1;


 VAR_6 = VAR_2->pos;
 if (!VAR_6)
  return -VAR_1;

 VAR_4 = VAR_2->config.begin;
 VAR_5 = VAR_2->config.end;

 VAR_6 += VAR_3;
 if (VAR_6 < VAR_4 || VAR_5 < VAR_6)
  return -VAR_0;

 return 0;
}
