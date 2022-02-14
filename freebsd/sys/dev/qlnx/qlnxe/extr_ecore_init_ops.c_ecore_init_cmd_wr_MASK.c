
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int offset; } ;
struct TYPE_4__ {TYPE_1__ runtime; int zeros_count; int inline_val; } ;
struct init_write_op {TYPE_2__ args; int data; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct init_write_op*,int,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int,int ,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int,int ,int ,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_5,
           struct ecore_ptt *VAR_6,
           struct init_write_op *VAR_7,
           bool VAR_8)
{
 u32 VAR_9 = FUNC_3(VAR_7->data);
 bool VAR_10 = FUNC_1(VAR_9, VAR_4);
 u32 VAR_11 = FUNC_1(VAR_9, VAR_2) << 2;
 enum _ecore_status_t VAR_12 = VAR_1;


 if (VAR_10 && !VAR_8) {
  FUNC_0(VAR_5, 1,
     "Need to write to %08x for Wide-bus but DMAE isn't allowed\n",
     VAR_11);
  return VAR_0;
 }

 switch (FUNC_1(VAR_9, VAR_3)) {
 case 130:
  VAR_9 = FUNC_3(VAR_7->args.inline_val);
  FUNC_8(VAR_5, VAR_6, VAR_11, VAR_9);
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_7->args.zeros_count);
  if (VAR_10 || (VAR_8 && (VAR_9 >= 64)))
   VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_11, VAR_9);
  else
   FUNC_5(VAR_5, VAR_6, VAR_11, 0, VAR_9);
  break;
 case 131:
  VAR_12 = FUNC_4(VAR_5, VAR_6, VAR_7,
       VAR_10, VAR_8);
  break;
 case 129:
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_11,
       FUNC_2(VAR_7->args.runtime.offset),
       FUNC_2(VAR_7->args.runtime.size),
       VAR_10);
  break;
 }

 return VAR_12;
}
