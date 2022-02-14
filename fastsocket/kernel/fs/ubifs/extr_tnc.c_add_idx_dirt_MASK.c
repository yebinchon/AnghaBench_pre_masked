
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int calc_idx_sz; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct ubifs_info*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->calc_idx_sz -= FUNC_0(VAR_2, 8);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
