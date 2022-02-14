
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_err_cqe {int syndrome; int vendor_err_synd; } ;
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
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_err_cqe*) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_14,
      struct mlx5_err_cqe *VAR_15,
      struct ib_wc *VAR_16)
{
 int VAR_17 = 1;

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
  VAR_17 = 0;
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
  VAR_17 = 0;
  break;
 case 130:
  VAR_16->status = VAR_12;
  VAR_17 = 0;
  break;
 case 134:
  VAR_16->status = VAR_7;
  break;
 default:
  VAR_16->status = VAR_1;
  break;
 }

 VAR_16->vendor_err = VAR_15->vendor_err_synd;
 if (VAR_17)
  FUNC_0(VAR_14, VAR_15);
}
