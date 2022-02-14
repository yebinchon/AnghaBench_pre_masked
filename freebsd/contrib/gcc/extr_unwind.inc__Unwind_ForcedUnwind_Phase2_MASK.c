
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _Unwind_Exception {int exception_class; scalar_t__ private_2; scalar_t__ private_1; } ;
struct _Unwind_Context {int dummy; } ;
typedef int (* _Unwind_Stop_Fn ) (int,int,int ,struct _Unwind_Exception*,struct _Unwind_Context*,void*) ;
typedef int _Unwind_Reason_Code ;
typedef scalar_t__ _Unwind_Ptr ;
struct TYPE_4__ {int (* personality ) (int,int,int ,struct _Unwind_Exception*,struct _Unwind_Context*) ;} ;
typedef TYPE_1__ _Unwind_FrameState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int ,struct _Unwind_Exception*,struct _Unwind_Context*,void*) ;
 int FUNC_1 (int,int,int ,struct _Unwind_Exception*,struct _Unwind_Context*) ;
 int FUNC_2 (struct _Unwind_Context*,TYPE_1__*) ;
 int FUNC_3 (struct _Unwind_Context*,TYPE_1__*) ;

__attribute__((used)) static _Unwind_Reason_Code
FUNC_4 (struct _Unwind_Exception *VAR_8,
        struct _Unwind_Context *VAR_9)
{
  _Unwind_Stop_Fn VAR_10 = (_Unwind_Stop_Fn) (_Unwind_Ptr) VAR_8->private_1;
  void *VAR_11 = (void *) (_Unwind_Ptr) VAR_8->private_2;
  _Unwind_Reason_Code VAR_12, VAR_13;

  while (1)
    {
      _Unwind_FrameState VAR_14;
      int VAR_15;


      VAR_12 = FUNC_3 (VAR_9, &VAR_14);
      if (VAR_12 != VAR_7 && VAR_12 != VAR_4)
 return VAR_5;


      VAR_15 = VAR_2 | VAR_0;
      if (VAR_12 == VAR_4)
 VAR_15 |= VAR_1;
      VAR_13 = (*VAR_10) (1, VAR_15, VAR_8->exception_class, VAR_8,
      VAR_9, VAR_11);
      if (VAR_13 != VAR_7)
 return VAR_5;



      if (VAR_12 == VAR_4)
 break;

      if (VAR_14.personality)
 {
   VAR_12 = (*VAR_14.personality) (1, VAR_2 | VAR_0,
        VAR_8->exception_class, VAR_8, VAR_9);
   if (VAR_12 == VAR_6)
     break;
   if (VAR_12 != VAR_3)
     return VAR_5;
 }



      FUNC_2 (VAR_9, &VAR_14);
    }

  return VAR_12;
}
