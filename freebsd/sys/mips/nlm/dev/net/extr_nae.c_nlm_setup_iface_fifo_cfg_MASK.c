
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {int iface_fifo_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_1, int VAR_2,
    struct nae_port_config *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5 = 12;
 int VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = VAR_3[VAR_6].iface_fifo_size;
  VAR_4 = ((VAR_5 << 25) |
      ((VAR_7 & 0x1ff) << 16) |
      ((VAR_8 & 0xff) << 8) |
      (VAR_6 & 0x1f));
  FUNC_0(VAR_1, VAR_0, VAR_4);
  VAR_8 += VAR_7;
 }
}
