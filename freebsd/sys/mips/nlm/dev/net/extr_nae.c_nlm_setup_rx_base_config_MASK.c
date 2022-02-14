
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {scalar_t__ num_channels; } ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(uint64_t VAR_0, int VAR_1,
    struct nae_port_config *VAR_2)
{
 int VAR_3 = 0;
 uint32_t VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < (VAR_1/2); VAR_5++) {
  VAR_6 = 0x12 + VAR_5;

  VAR_4 = (VAR_3 & 0x3ff);
  VAR_3 += VAR_2[(VAR_5 * 2)].num_channels;

  VAR_4 |= ((VAR_3 & 0x3ff) << 16);
  VAR_3 += VAR_2[(VAR_5 * 2) + 1].num_channels;

  FUNC_1(VAR_0, FUNC_0(7, 0, VAR_6), VAR_4);
 }
}
