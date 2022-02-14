
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char**,int *,int *) ;
 int FUNC_1 (struct frame_info*) ;
 int VAR_0 ;
 struct frame_unwind const VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;

const struct frame_unwind *
FUNC_3(struct frame_info *VAR_2)
{

 char *VAR_3;
 CORE_ADDR VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 VAR_3 = ((void*)0);
 FUNC_0(VAR_4, &VAR_3, ((void*)0), ((void*)0));
 if (VAR_3 == ((void*)0)) {
  VAR_0 = 0;
  return (((void*)0));
 }
 if (!FUNC_2(VAR_3, "undefinedinstruction"))
  VAR_0 = 1;
 if (FUNC_2(VAR_3, "Laddress_exception_entry") == 0 ||
     FUNC_2(VAR_3, "undefined_entry") == 0 ||
     FUNC_2(VAR_3, "exception_exit") == 0 ||
     FUNC_2(VAR_3, "Laddress_exception_msg") == 0 ||
     FUNC_2(VAR_3, "irq_entry") == 0)
  return (&VAR_1);
 if (!FUNC_2(VAR_3, "undefinedinstruction"))
  VAR_0 = 1;
 else
  VAR_0 = 0;

 return (((void*)0));
}
