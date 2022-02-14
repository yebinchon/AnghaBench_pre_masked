
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char**,int *,int *) ;
 int FUNC_2 (struct frame_info*) ;
 struct frame_unwind const VAR_0 ;

__attribute__((used)) static const struct frame_unwind *
FUNC_3 (struct frame_info *VAR_1)
{
  char *VAR_2;
  CORE_ADDR VAR_3 = FUNC_2 (VAR_1);

  FUNC_1 (VAR_3, &VAR_2, ((void*)0), ((void*)0));
  if (FUNC_0 (VAR_3, VAR_2))
    return &VAR_0;

  return ((void*)0);
}
