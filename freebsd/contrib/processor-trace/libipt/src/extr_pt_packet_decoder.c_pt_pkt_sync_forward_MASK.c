
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_2__ {int const* begin; } ;
struct pt_packet_decoder {int const* pos; int const* sync; TYPE_1__ config; } ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const**,int const*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct pt_packet_decoder *VAR_3)
{
 const uint8_t *VAR_4, *VAR_5, *VAR_6;
 ptrdiff_t VAR_7;
 int VAR_8;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = VAR_3->config.begin;
 VAR_5 = VAR_3->sync;
 VAR_4 = VAR_3->pos;
 if (!VAR_4)
  VAR_4 = VAR_6;

 if (VAR_4 == VAR_5)
  VAR_4 += VAR_2;

 if (VAR_4 < VAR_6)
  return -VAR_0;




 VAR_7 = VAR_4 - VAR_6;
 if (VAR_2 <= VAR_7)
  VAR_7 = VAR_2 - 1;

 VAR_4 -= VAR_7;

 VAR_8 = FUNC_0(&VAR_5, VAR_4, &VAR_3->config);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_3->sync = VAR_5;
 VAR_3->pos = VAR_5;

 return 0;
}
