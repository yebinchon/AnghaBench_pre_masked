
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {scalar_t__ type; int num_channels; int rxbuf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_3, int VAR_4,
    struct nae_port_config *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_5[VAR_7].type == VAR_2)
   continue;
  for (VAR_9 = 0; VAR_9 < VAR_5[VAR_7].num_channels; VAR_9++) {

   FUNC_0(VAR_3, VAR_1,
       (VAR_10+VAR_9));


   VAR_8 = VAR_5[VAR_7].rxbuf_size;
   VAR_6 = 0x80000000 | ((VAR_11 << 2) & 0x3fff);
   VAR_6 |= (((VAR_8 << 2) & 0x3fff) << 16);

   FUNC_0(VAR_3, VAR_0, VAR_6);
   FUNC_0(VAR_3, VAR_0,
       (0x7fffffff & VAR_6));
   VAR_11 += VAR_8;
  }
  VAR_10 += VAR_5[VAR_7].num_channels;
 }
}
