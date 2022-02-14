
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char**,int *,int *) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 struct frame_unwind const VAR_1 ;
 struct frame_unwind const VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;

const struct frame_unwind *
FUNC_3(struct frame_info *VAR_3)
{
 char *VAR_4;
 CORE_ADDR VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 >= VAR_0)
  return (&VAR_2);
 VAR_4 = ((void*)0);
 FUNC_0(VAR_5, &VAR_4, ((void*)0), ((void*)0));
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 if (FUNC_2(VAR_4, "dblfault_handler") == 0)
  return (&VAR_1);
 if (FUNC_2(VAR_4, "calltrap") == 0 ||
     (VAR_4[0] == 'X' && VAR_4[1] != '_'))
  return (&VAR_2);

 return (((void*)0));
}
