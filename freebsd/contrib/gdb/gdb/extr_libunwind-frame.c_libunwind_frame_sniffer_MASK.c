
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_cursor_t ;
typedef int unw_addr_space_t ;
typedef int unw_accessors_t ;
struct libunwind_descr {int * accessors; } ;
struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct frame_info*) ;
 struct libunwind_descr* FUNC_1 (int ) ;
 struct frame_unwind const VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,struct frame_info*) ;
 int FUNC_4 (int *) ;

const struct frame_unwind *
FUNC_5 (struct frame_info *VAR_5)
{
  unw_cursor_t VAR_6;
  unw_accessors_t *VAR_7;
  unw_addr_space_t VAR_8;
  struct libunwind_descr *VAR_9;
  int VAR_10, VAR_11;






  VAR_9 = FUNC_1 (FUNC_0 (VAR_5));
  VAR_7 = VAR_9->accessors;
  VAR_8 = FUNC_2 (VAR_7,
     VAR_1 == VAR_0
     ? VAR_2
     : VAR_3);

  VAR_11 = FUNC_3 (&VAR_6, VAR_8, VAR_5);

  if (VAR_11 >= 0)
    VAR_11 = FUNC_4 (&VAR_6);

  if (VAR_11 < 0)
    return ((void*)0);

  return &VAR_4;
}
