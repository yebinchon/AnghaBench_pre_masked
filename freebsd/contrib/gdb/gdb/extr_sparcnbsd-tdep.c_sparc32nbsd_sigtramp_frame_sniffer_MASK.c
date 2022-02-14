
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char**,int *,int *) ;
 int FUNC_1 (struct frame_info*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 struct frame_unwind const VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static const struct frame_unwind *
FUNC_4 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2 = FUNC_1 (VAR_1);
  char *VAR_3;

  FUNC_0 (VAR_2, &VAR_3, ((void*)0), ((void*)0));
  if (FUNC_2 (VAR_2, VAR_3))
    {
      if (VAR_3 == ((void*)0) || FUNC_3 (VAR_3, "__sigtramp_sigcontext", 21))
 return &VAR_0;
    }

  return ((void*)0);
}
