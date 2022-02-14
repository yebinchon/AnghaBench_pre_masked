
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct needs_frame_baton {int needs_frame; } ;
typedef int CORE_ADDR ;



__attribute__((used)) static CORE_ADDR
FUNC_0 (void *VAR_0, CORE_ADDR VAR_1)
{
  struct needs_frame_baton *VAR_2 = VAR_0;
  VAR_2->needs_frame = 1;
  return 1;
}
