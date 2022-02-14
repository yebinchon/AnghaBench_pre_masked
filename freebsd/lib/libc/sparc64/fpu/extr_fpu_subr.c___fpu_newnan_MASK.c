
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpn {scalar_t__* fp_mant; scalar_t__ fp_sign; int fp_class; } ;
struct fpemu {struct fpn fe_f3; int fe_cx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

struct fpn *
FUNC_0(struct fpemu *VAR_3)
{
 struct fpn *VAR_4;

 VAR_3->fe_cx = VAR_2;
 VAR_4 = &VAR_3->fe_f3;
 VAR_4->fp_class = VAR_0;
 VAR_4->fp_sign = 0;
 VAR_4->fp_mant[0] = VAR_1 - 1;
 VAR_4->fp_mant[1] = VAR_4->fp_mant[2] = VAR_4->fp_mant[3] = ~0;
 return (VAR_4);
}
