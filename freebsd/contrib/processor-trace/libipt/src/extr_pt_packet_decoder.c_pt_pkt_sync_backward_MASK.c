
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_2__ {int const* end; } ;
struct pt_packet_decoder {int const* pos; int const* sync; TYPE_1__ config; } ;


 int FUNC_0 (int const**,int const*,TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct pt_packet_decoder *VAR_1)
{
 const uint8_t *VAR_2, *VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->pos;
 if (!VAR_2)
  VAR_2 = VAR_1->config.end;

 VAR_4 = FUNC_0(&VAR_3, VAR_2, &VAR_1->config);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->sync = VAR_3;
 VAR_1->pos = VAR_3;

 return 0;
}
