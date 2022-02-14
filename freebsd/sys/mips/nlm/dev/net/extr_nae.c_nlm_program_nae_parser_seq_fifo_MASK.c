
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {int pseq_fifo_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_1, int VAR_2,
    struct nae_port_config *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5 = 0, VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_3[VAR_7].pseq_fifo_size;
  VAR_4 = (((VAR_6 & 0x1fff) << 17) |
      ((VAR_5 & 0xfff) << 5) |
      (VAR_7 & 0x1f));
  FUNC_0(VAR_1, VAR_0, VAR_4);
  VAR_5 += VAR_6;
 }
}
