
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dtsec_regs {int tdrp; int tncl; int txpf; int tbca; int tmca; int tpkt; int tbyt; int tfcs; int rdrp; int rjbr; int rfrg; int rovr; int rund; int rcse; int rcde; int rflr; int raln; int rxpf; int rbca; int rmca; int rpkt; int rbyt; int trmgv; int trmax; int tr1k; int tr511; int tr255; int tr127; int tr64; } ;
typedef enum dtsec_stat_counters { ____Placeholder_dtsec_stat_counters } dtsec_stat_counters ;
 int FUNC_0 (int *) ;

uint32_t FUNC_1(struct dtsec_regs *VAR_0,
  enum dtsec_stat_counters VAR_1)
{
 uint32_t VAR_2;

 switch (VAR_1) {
 case 131:
  VAR_2 = FUNC_0(&VAR_0->tr64);
  break;
 case 135:
  VAR_2 = FUNC_0(&VAR_0->tr127);
  break;
 case 133:
  VAR_2 = FUNC_0(&VAR_0->tr255);
  break;
 case 132:
  VAR_2 = FUNC_0(&VAR_0->tr511);
  break;
 case 134:
  VAR_2 = FUNC_0(&VAR_0->tr1k);
  break;
 case 130:
  VAR_2 = FUNC_0(&VAR_0->trmax);
  break;
 case 129:
  VAR_2 = FUNC_0(&VAR_0->trmgv);
  break;
 case 154:
  VAR_2 = FUNC_0(&VAR_0->rbyt);
  break;
 case 145:
  VAR_2 = FUNC_0(&VAR_0->rpkt);
  break;
 case 147:
  VAR_2 = FUNC_0(&VAR_0->rmca);
  break;
 case 155:
  VAR_2 = FUNC_0(&VAR_0->rbca);
  break;
 case 143:
  VAR_2 = FUNC_0(&VAR_0->rxpf);
  break;
 case 156:
  VAR_2 = FUNC_0(&VAR_0->raln);
  break;
 case 150:
  VAR_2 = FUNC_0(&VAR_0->rflr);
  break;
 case 153:
  VAR_2 = FUNC_0(&VAR_0->rcde);
  break;
 case 152:
  VAR_2 = FUNC_0(&VAR_0->rcse);
  break;
 case 144:
  VAR_2 = FUNC_0(&VAR_0->rund);
  break;
 case 146:
  VAR_2 = FUNC_0(&VAR_0->rovr);
  break;
 case 149:
  VAR_2 = FUNC_0(&VAR_0->rfrg);
  break;
 case 148:
  VAR_2 = FUNC_0(&VAR_0->rjbr);
  break;
 case 151:
  VAR_2 = FUNC_0(&VAR_0->rdrp);
  break;
 case 139:
  VAR_2 = FUNC_0(&VAR_0->tfcs);
  break;
 case 141:
  VAR_2 = FUNC_0(&VAR_0->tbyt);
  break;
 case 136:
  VAR_2 = FUNC_0(&VAR_0->tpkt);
  break;
 case 138:
  VAR_2 = FUNC_0(&VAR_0->tmca);
  break;
 case 142:
  VAR_2 = FUNC_0(&VAR_0->tbca);
  break;
 case 128:
  VAR_2 = FUNC_0(&VAR_0->txpf);
  break;
 case 137:
  VAR_2 = FUNC_0(&VAR_0->tncl);
  break;
 case 140:
  VAR_2 = FUNC_0(&VAR_0->tdrp);
  break;
 default:
  VAR_2 = 0;
 }

 return VAR_2;
}
