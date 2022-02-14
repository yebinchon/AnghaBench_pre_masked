
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int* fp_mant; int fp_sticky; int fp_sign; } ;
struct fpemu {int fe_fsr; int fe_cx; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;





__attribute__((used)) static int
FUNC_4(struct fpemu *VAR_2, struct fpn *VAR_3)
{
 u_int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = VAR_3->fp_mant[0];
 VAR_5 = VAR_3->fp_mant[1];
 VAR_6 = VAR_3->fp_mant[2];
 VAR_7 = VAR_3->fp_mant[3];
 VAR_8 = VAR_7 & 3;
 VAR_9 = VAR_3->fp_sticky;


 VAR_7 = (VAR_7 >> VAR_0) | (VAR_6 << (32 - VAR_0));
 VAR_6 = (VAR_6 >> VAR_0) | (VAR_5 << (32 - VAR_0));
 VAR_5 = (VAR_5 >> VAR_0) | (VAR_4 << (32 - VAR_0));
 VAR_4 >>= VAR_0;

 if ((VAR_8 | VAR_9) == 0)
  goto rounddown;

 VAR_2->fe_cx |= VAR_1;


 switch (FUNC_3(VAR_2->fe_fsr)) {
 case 131:
 default:





  if ((VAR_8 & 2) == 0)
   goto rounddown;
  if ((VAR_8 & 1) || VAR_3->fp_sticky || (VAR_7 & 1))
   break;
  goto rounddown;

 case 128:

  goto rounddown;

 case 130:

  if (VAR_3->fp_sign)
   break;
  goto rounddown;

 case 129:

  if (!VAR_3->fp_sign)
   break;
  goto rounddown;
 }


 FUNC_2(VAR_7, VAR_7, 1);
 FUNC_1(VAR_6, VAR_6, 0);
 FUNC_1(VAR_5, VAR_5, 0);
 FUNC_0(VAR_4, VAR_4, 0);
 VAR_3->fp_mant[0] = VAR_4;
 VAR_3->fp_mant[1] = VAR_5;
 VAR_3->fp_mant[2] = VAR_6;
 VAR_3->fp_mant[3] = VAR_7;
 return (1);

rounddown:
 VAR_3->fp_mant[0] = VAR_4;
 VAR_3->fp_mant[1] = VAR_5;
 VAR_3->fp_mant[2] = VAR_6;
 VAR_3->fp_mant[3] = VAR_7;
 return (0);
}
