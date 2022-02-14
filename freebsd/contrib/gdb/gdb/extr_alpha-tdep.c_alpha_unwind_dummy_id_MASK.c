
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
typedef int ULONGEST ;


 int VAR_0 ;
 struct frame_id FUNC_0 (int ,int ) ;
 int FUNC_1 (struct frame_info*) ;
 int FUNC_2 (struct frame_info*,int ,int *) ;

__attribute__((used)) static struct frame_id
FUNC_3 (struct gdbarch *VAR_1, struct frame_info *VAR_2)
{
  ULONGEST VAR_3;
  FUNC_2 (VAR_2, VAR_0, &VAR_3);
  return FUNC_0 (VAR_3, FUNC_1 (VAR_2));
}
