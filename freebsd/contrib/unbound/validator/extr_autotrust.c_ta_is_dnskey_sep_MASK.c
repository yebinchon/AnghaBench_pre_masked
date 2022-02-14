
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autr_ta {int dname_len; int rr_len; int rr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct autr_ta* VAR_1)
{
 return (FUNC_0(
  FUNC_3(VAR_1->rr, VAR_1->rr_len, VAR_1->dname_len),
  FUNC_1(VAR_1->rr, VAR_1->rr_len, VAR_1->dname_len),
  FUNC_2(VAR_1->rr, VAR_1->rr_len, VAR_1->dname_len)
  ) & VAR_0);
}
