
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pacct_struct {int ac_stime; int ac_utime; } ;


 int VAR_0 ;
 int FUNC_0 (struct pacct_struct*,int ,int) ;

void FUNC_1(struct pacct_struct *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(struct pacct_struct));
 VAR_1->ac_utime = VAR_1->ac_stime = VAR_0;
}
