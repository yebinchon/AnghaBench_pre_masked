
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct frame_id FUNC_0 (int ,int ) ;
 int FUNC_1 (struct frame_info*) ;
 int FUNC_2 (struct frame_info*,scalar_t__) ;

__attribute__((used)) static struct frame_id
FUNC_3 (struct gdbarch *VAR_2, struct frame_info *VAR_3)
{
  return FUNC_0 (FUNC_2 (VAR_3, VAR_0 + VAR_1),
    FUNC_1 (VAR_3));
}
