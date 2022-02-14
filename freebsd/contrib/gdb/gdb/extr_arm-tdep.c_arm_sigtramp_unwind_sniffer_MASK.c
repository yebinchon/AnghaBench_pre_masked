
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 struct frame_unwind const VAR_0 ;
 int FUNC_2 (struct frame_info*) ;

__attribute__((used)) static const struct frame_unwind *
FUNC_3 (struct frame_info *VAR_1)
{





  if (FUNC_1 ()
      && FUNC_0 (FUNC_2 (VAR_1), (char *) 0))
    return &VAR_0;

  return ((void*)0);
}
