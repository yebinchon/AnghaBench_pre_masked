
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_err_cqe {int syndrome; int owner_sr_opcode; int vendor_err_syndrome; int wqe_index; int my_qpn; } ;
struct ib_wc {int vendor_err; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_err_cqe*) ;
 int FUNC_3 (char*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mlx4_err_cqe *VAR_15,
         struct ib_wc *VAR_16)
{
 if (VAR_15->syndrome == 136) {
  FUNC_3("local QP operation err "
         "(QPN %06x, WQE index %x, vendor syndrome %02x, "
         "opcode = %02x)\n",
         FUNC_1(VAR_15->my_qpn), FUNC_0(VAR_15->wqe_index),
         VAR_15->vendor_err_syndrome,
         VAR_15->owner_sr_opcode & ~VAR_14);
  FUNC_2(VAR_15);
 }

 switch (VAR_15->syndrome) {
 case 138:
  VAR_16->status = VAR_3;
  break;
 case 136:
  VAR_16->status = VAR_5;
  break;
 case 137:
  VAR_16->status = VAR_4;
  break;
 case 128:
  VAR_16->status = VAR_13;
  break;
 case 135:
  VAR_16->status = VAR_6;
  break;
 case 140:
  VAR_16->status = VAR_0;
  break;
 case 139:
  VAR_16->status = VAR_2;
  break;
 case 132:
  VAR_16->status = VAR_9;
  break;
 case 133:
  VAR_16->status = VAR_8;
  break;
 case 131:
  VAR_16->status = VAR_10;
  break;
 case 129:
  VAR_16->status = VAR_11;
  break;
 case 130:
  VAR_16->status = VAR_12;
  break;
 case 134:
  VAR_16->status = VAR_7;
  break;
 default:
  VAR_16->status = VAR_1;
  break;
 }

 VAR_16->vendor_err = VAR_15->vendor_err_syndrome;
}
