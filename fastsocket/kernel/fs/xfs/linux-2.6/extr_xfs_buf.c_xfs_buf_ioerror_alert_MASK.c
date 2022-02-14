
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_error; TYPE_1__* b_target; } ;
typedef int __uint64_t ;
struct TYPE_2__ {int bt_mount; } ;


 scalar_t__ FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (int ,char*,int ,char const*,int ,int ) ;

void
FUNC_3(
 struct xfs_buf *VAR_0,
 const char *VAR_1)
{
 FUNC_2(VAR_0->b_target->bt_mount,
"metadata I/O error: block 0x%llx (\"%s\") error %d buf count %zd",
  (__uint64_t)FUNC_0(VAR_0), VAR_1,
  VAR_0->b_error, FUNC_1(VAR_0));
}
