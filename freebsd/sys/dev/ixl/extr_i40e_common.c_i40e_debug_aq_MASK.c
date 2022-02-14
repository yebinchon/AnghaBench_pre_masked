
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct i40e_hw {int debug_mask; } ;
struct TYPE_5__ {int addr_low; int addr_high; } ;
struct TYPE_4__ {int param1; int param0; } ;
struct TYPE_6__ {TYPE_2__ external; TYPE_1__ internal; } ;
struct i40e_aq_desc {scalar_t__ datalen; scalar_t__ opcode; scalar_t__ flags; scalar_t__ retval; TYPE_3__ params; int cookie_low; int cookie_high; } ;
typedef enum i40e_debug_mask { ____Placeholder_i40e_debug_mask } i40e_debug_mask ;
typedef int d_buf ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*,int,char*,...) ;
 int FUNC_3 (char*,int ,int) ;

void FUNC_4(struct i40e_hw *VAR_0, enum i40e_debug_mask VAR_1, void *VAR_2,
     void *VAR_3, u16 VAR_4)
{
 struct i40e_aq_desc *VAR_5 = (struct i40e_aq_desc *)VAR_2;
 u8 *VAR_6 = (u8 *)VAR_3;
 u16 VAR_7;
 u16 VAR_8 = 0;

 if ((!(VAR_1 & VAR_0->debug_mask)) || (VAR_2 == ((void*)0)))
  return;

 VAR_7 = FUNC_0(VAR_5->datalen);

 FUNC_2(VAR_0, VAR_1,
     "AQ CMD: opcode 0x%04X, flags 0x%04X, datalen 0x%04X, retval 0x%04X\n",
     FUNC_0(VAR_5->opcode),
     FUNC_0(VAR_5->flags),
     FUNC_0(VAR_5->datalen),
     FUNC_0(VAR_5->retval));
 FUNC_2(VAR_0, VAR_1, "\tcookie (h,l) 0x%08X 0x%08X\n",
     FUNC_1(VAR_5->cookie_high),
     FUNC_1(VAR_5->cookie_low));
 FUNC_2(VAR_0, VAR_1, "\tparam (0,1)  0x%08X 0x%08X\n",
     FUNC_1(VAR_5->params.internal.param0),
     FUNC_1(VAR_5->params.internal.param1));
 FUNC_2(VAR_0, VAR_1, "\taddr (h,l)   0x%08X 0x%08X\n",
     FUNC_1(VAR_5->params.external.addr_high),
     FUNC_1(VAR_5->params.external.addr_low));

 if ((VAR_3 != ((void*)0)) && (VAR_5->datalen != 0)) {
  FUNC_2(VAR_0, VAR_1, "AQ CMD Buffer:\n");
  if (VAR_4 < VAR_7)
   VAR_7 = VAR_4;

  for (VAR_8 = 0; VAR_8 < (VAR_7 - 16); VAR_8 += 16)
   FUNC_2(VAR_0, VAR_1,
       "\t0x%04X  %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n",
       VAR_8, VAR_6[VAR_8], VAR_6[VAR_8+1], VAR_6[VAR_8+2], VAR_6[VAR_8+3],
       VAR_6[VAR_8+4], VAR_6[VAR_8+5], VAR_6[VAR_8+6], VAR_6[VAR_8+7],
       VAR_6[VAR_8+8], VAR_6[VAR_8+9], VAR_6[VAR_8+10], VAR_6[VAR_8+11],
       VAR_6[VAR_8+12], VAR_6[VAR_8+13], VAR_6[VAR_8+14], VAR_6[VAR_8+15]);

  if (VAR_8 < VAR_7) {
   char VAR_9[16];
   int VAR_10, VAR_11;

   VAR_11 = VAR_8;
   FUNC_3(VAR_9, 0, sizeof(VAR_9));
   for (VAR_10 = 0; VAR_8 < VAR_7; VAR_10++, VAR_8++)
    VAR_9[VAR_10] = VAR_6[VAR_8];
   FUNC_2(VAR_0, VAR_1,
       "\t0x%04X  %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n",
       VAR_11, VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
       VAR_9[4], VAR_9[5], VAR_9[6], VAR_9[7],
       VAR_9[8], VAR_9[9], VAR_9[10], VAR_9[11],
       VAR_9[12], VAR_9[13], VAR_9[14], VAR_9[15]);
  }
 }
}
