
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int clear_bits; int set_bits; int reg_addr; scalar_t__ mmd_addr; } ;
struct cphy {int dummy; } ;


 int FUNC_0 (struct cphy*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct cphy*,scalar_t__,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_0, const struct reg_val *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1->mmd_addr && !VAR_2; VAR_1++) {
  if (VAR_1->clear_bits == 0xffff)
   VAR_2 = FUNC_0(VAR_0, VAR_1->mmd_addr, VAR_1->reg_addr,
      VAR_1->set_bits);
  else
   VAR_2 = FUNC_1(VAR_0, VAR_1->mmd_addr,
        VAR_1->reg_addr, VAR_1->clear_bits,
        VAR_1->set_bits);
 }
 return VAR_2;
}
