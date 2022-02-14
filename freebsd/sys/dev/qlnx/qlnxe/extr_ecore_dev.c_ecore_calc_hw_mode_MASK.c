
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hw_mode; } ;
struct ecore_hwfn {TYPE_1__ hw_info; TYPE_2__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_9__ {int type; int num_ports_in_engine; scalar_t__ b_is_emul_full; int mf_bits; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_3 (struct ecore_hwfn*,int,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_18)
{
 int VAR_19 = 0;

 if (FUNC_5(VAR_18->p_dev)) {
  VAR_19 |= 1 << VAR_7;
 } else if (FUNC_4(VAR_18->p_dev)) {
  VAR_19 |= 1 << VAR_12;
 } else if (FUNC_7(VAR_18->p_dev)) {
  VAR_19 |= 1 << VAR_8;
 } else {
  FUNC_2(VAR_18, 1, "Unknown chip type %#x\n",
     VAR_18->p_dev->type);
  return VAR_0;
 }


 switch (VAR_18->p_dev->num_ports_in_engine) {
 case 1:
  VAR_19 |= 1 << VAR_15;
  break;
 case 2:
  VAR_19 |= 1 << VAR_16;
  break;
 case 4:
  VAR_19 |= 1 << VAR_17;
  break;
 default:
  FUNC_2(VAR_18, 1, "num_ports_in_engine = %d not supported\n",
     VAR_18->p_dev->num_ports_in_engine);
  return VAR_0;
 }

 if (FUNC_8(VAR_1,
     &VAR_18->p_dev->mf_bits))
  VAR_19 |= 1 << VAR_13;
 else
  VAR_19 |= 1 << VAR_14;


 if (FUNC_1(VAR_18->p_dev)) {
  if (FUNC_0(VAR_18->p_dev)) {
   VAR_19 |= 1 << VAR_11;
  } else {
   if (VAR_18->p_dev->b_is_emul_full)
    VAR_19 |= 1 << VAR_9;
   else
    VAR_19 |= 1 << VAR_10;
  }
 } else

 VAR_19 |= 1 << VAR_6;

 if (FUNC_6(VAR_18->p_dev))
  VAR_19 |= 1 << VAR_5;

 VAR_18->hw_info.hw_mode = VAR_19;

 FUNC_3(VAR_18, (VAR_3 | VAR_2),
     "Configuring function for hw_mode: 0x%08x\n",
     VAR_18->hw_info.hw_mode);

 return VAR_4;
}
