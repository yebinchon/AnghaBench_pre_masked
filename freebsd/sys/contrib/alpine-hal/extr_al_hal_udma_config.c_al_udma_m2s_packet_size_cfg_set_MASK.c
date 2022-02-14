
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct al_udma_m2s_pkt_len_conf {scalar_t__ encode_64k_as_zero; scalar_t__ max_pkt_size; } ;
struct al_udma {scalar_t__ type; TYPE_3__* udma_regs; int name; } ;
struct TYPE_4__ {int cfg_len; } ;
struct TYPE_5__ {TYPE_1__ m2s; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;

int FUNC_4(struct al_udma *VAR_5,
    struct al_udma_m2s_pkt_len_conf *VAR_6)
{
 uint32_t VAR_7 = FUNC_2(&VAR_5->udma_regs->m2s.m2s.cfg_len);
 uint32_t VAR_8 = VAR_3;

 FUNC_0(VAR_5->type == VAR_4);

 if (VAR_6->encode_64k_as_zero == VAR_0)
  VAR_8 += 1;

 if (VAR_6->max_pkt_size > VAR_8) {
  FUNC_1("udma [%s]: requested max_pkt_size (0x%x) exceeds the"
   "supported limit (0x%x)\n", VAR_5->name,
    VAR_6->max_pkt_size, VAR_8);
  return -VAR_1;
 }

 VAR_7 &= ~VAR_2;
 if (VAR_6->encode_64k_as_zero == VAR_0)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;

 VAR_7 &= ~VAR_3;
 VAR_7 |= VAR_6->max_pkt_size;

 FUNC_3(&VAR_5->udma_regs->m2s.m2s.cfg_len, VAR_7);
 return 0;
}
