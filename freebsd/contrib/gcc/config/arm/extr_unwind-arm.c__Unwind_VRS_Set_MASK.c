
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* r; } ;
struct TYPE_4__ {TYPE_1__ core; } ;
typedef TYPE_2__ phase1_vrs ;
typedef int _uw ;
typedef int _Unwind_VRS_Result ;
typedef int _Unwind_VRS_RegClass ;
typedef int _Unwind_VRS_DataRepresentation ;
typedef int _Unwind_Context ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

_Unwind_VRS_Result FUNC_0 (_Unwind_Context *VAR_4,
        _Unwind_VRS_RegClass VAR_5,
        _uw VAR_6,
        _Unwind_VRS_DataRepresentation VAR_7,
        void *VAR_8)
{
  phase1_vrs *VAR_9 = (phase1_vrs *) VAR_4;

  switch (VAR_5)
    {
    case 132:
      if (VAR_7 != VAR_0
   || VAR_6 > 15)
 return VAR_1;

      VAR_9->core.r[VAR_6] = *(_uw *) VAR_8;
      return VAR_3;

    case 130:
    case 131:
    case 128:
    case 129:
      return VAR_2;

    default:
      return VAR_1;
    }
}
