
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {TYPE_1__* current_filesystem; } ;
struct TYPE_2__ {int xfer_align; void* min_xfer_size; void* max_xfer_size; void* incr_xfer_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int,int ) ;
 void* FUNC_1 (char const*,int ) ;

__attribute__((used)) static int
FUNC_2(struct tree *VAR_6, int VAR_7, const char *VAR_8)
{
 VAR_6->current_filesystem->xfer_align = -1;
 VAR_5 = 0;
 if (VAR_7 >= 0) {
  VAR_6->current_filesystem->incr_xfer_size =
      FUNC_0(VAR_7, VAR_1);
  VAR_6->current_filesystem->max_xfer_size =
      FUNC_0(VAR_7, VAR_2);
  VAR_6->current_filesystem->min_xfer_size =
      FUNC_0(VAR_7, VAR_3);
  VAR_6->current_filesystem->xfer_align =
      FUNC_0(VAR_7, VAR_4);
 } else if (VAR_8 != ((void*)0)) {
  VAR_6->current_filesystem->incr_xfer_size =
      FUNC_1(VAR_8, VAR_1);
  VAR_6->current_filesystem->max_xfer_size =
      FUNC_1(VAR_8, VAR_2);
  VAR_6->current_filesystem->min_xfer_size =
      FUNC_1(VAR_8, VAR_3);
  VAR_6->current_filesystem->xfer_align =
      FUNC_1(VAR_8, VAR_4);
 }

 if (VAR_6->current_filesystem->xfer_align == -1)
  return ((VAR_5 == VAR_0)?1:-1);
 else
  return (0);
}
