
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_sig_err_cqe {int mkey; int err_offset; int actual_trans_sig; int expected_trans_sig; int actual_reftag; int expected_reftag; int syndrome; } ;
struct ib_sig_err {int expected; int actual; int key; int sig_err_offset; int err_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct mlx5_sig_err_cqe *VAR_6,
        struct ib_sig_err *VAR_7)
{
 u16 VAR_8 = FUNC_0(VAR_6->syndrome);





 if (VAR_8 & (1 << 13)) {
  VAR_7->err_type = VAR_3;
  VAR_7->expected = FUNC_1(VAR_6->expected_trans_sig) >> 16;
  VAR_7->actual = FUNC_1(VAR_6->actual_trans_sig) >> 16;
 } else
 if (VAR_8 & (1 << 11)) {
  VAR_7->err_type = VAR_4;
  VAR_7->expected = FUNC_1(VAR_6->expected_reftag);
  VAR_7->actual = FUNC_1(VAR_6->actual_reftag);
 } else
 if (VAR_8 & (1 << 12)) {
  VAR_7->err_type = VAR_2;
  VAR_7->expected = FUNC_1(VAR_6->expected_trans_sig) & 0xffff;
  VAR_7->actual = FUNC_1(VAR_6->actual_trans_sig) & 0xffff;
 } else {
  FUNC_3("Got signature completion error with bad syndrome %04x\n",
         VAR_8);
 }

 VAR_7->sig_err_offset = FUNC_2(VAR_6->err_offset);
 VAR_7->key = FUNC_1(VAR_6->mkey);
}
