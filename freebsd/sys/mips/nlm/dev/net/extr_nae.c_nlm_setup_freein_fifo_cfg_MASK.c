
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {int num_free_descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(uint64_t VAR_3, struct nae_port_config *VAR_4)
{
 int VAR_5, VAR_6;
 uint32_t VAR_7;
 int VAR_8 = 0, VAR_9;

 if (FUNC_0())
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {

  VAR_5 = (VAR_4[VAR_6].num_free_descs / 2);
  if (VAR_5 == 0)
   VAR_5 = 8;
  VAR_7 = ((VAR_5 & 0x3ff ) << 20) |
      ((VAR_8 & 0x1ff) << 8) |
      (VAR_6 & 0x1f);

  FUNC_1(VAR_3, VAR_2, VAR_7);
  VAR_8 += VAR_5;
 }
}
