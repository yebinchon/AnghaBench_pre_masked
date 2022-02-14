
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfp_regs {int * d; } ;
struct TYPE_3__ {int* r; } ;
struct TYPE_4__ {int demand_save_flags; TYPE_1__ core; struct vfp_regs vfp; } ;
typedef TYPE_2__ phase1_vrs ;
typedef int _uw ;
typedef int _Unwind_VRS_Result ;
typedef int _Unwind_VRS_RegClass ;
typedef int _Unwind_VRS_DataRepresentation ;
typedef int _Unwind_Context ;


 int VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vfp_regs*) ;
 int FUNC_1 (struct vfp_regs*) ;

_Unwind_VRS_Result FUNC_2 (_Unwind_Context *VAR_8,
        _Unwind_VRS_RegClass VAR_9,
        _uw VAR_10,
        _Unwind_VRS_DataRepresentation VAR_11)
{
  phase1_vrs *VAR_12 = (phase1_vrs *) VAR_8;

  switch (VAR_9)
    {
    case 132:
      {
 _uw *VAR_13;
 _uw VAR_14;
 int VAR_15;

 if (VAR_11 != VAR_3)
   return VAR_5;

 VAR_14 = VAR_10 & 0xffff;
 VAR_13 = (_uw *) VAR_12->core.r[VAR_1];

 for (VAR_15 = 0; VAR_15 < 16; VAR_15++)
   {
     if (VAR_14 & (1 << VAR_15))
       VAR_12->core.r[VAR_15] = *(VAR_13++);
   }

 if ((VAR_14 & (1 << VAR_1)) == 0)
   VAR_12->core.r[VAR_1] = (_uw) VAR_13;
      }
      return VAR_7;

    case 130:
      {
 _uw VAR_16 = VAR_10 >> 16;
 _uw VAR_17 = VAR_10 & 0xffff;
 struct vfp_regs VAR_18;
 _uw *VAR_19;
 _uw *VAR_20;

 if ((VAR_11 != VAR_4 && VAR_11 != VAR_2)
     || VAR_16 + VAR_17 > 16)
   return VAR_5;

 if (VAR_12->demand_save_flags & VAR_0)
   {

     VAR_12->demand_save_flags &= ~VAR_0;
     FUNC_1 (&VAR_12->vfp);
   }





 FUNC_1 (&VAR_18);



 VAR_19 = (_uw *) VAR_12->core.r[VAR_1];
 VAR_20 = (_uw *) &VAR_18.d[VAR_16];
 VAR_17 *= 2;
 while (VAR_17--)
   *(VAR_20++) = *(VAR_19++);


 if (VAR_11 == VAR_4)
   VAR_19++;


 VAR_12->core.r[VAR_1] = (_uw) VAR_19;


 FUNC_0 (&VAR_18);
      }
      return VAR_7;

    case 131:
    case 128:
    case 129:
      return VAR_6;

    default:
      return VAR_5;
    }
}
