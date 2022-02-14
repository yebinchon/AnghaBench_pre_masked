
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct uio {size_t uio_resid; scalar_t__ uio_offset; } ;
struct tools_context {TYPE_1__* tdev; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int fdev; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct tools_context *VAR_1, struct uio *VAR_2, ssize_t *VAR_3)
{
 uint64_t VAR_4, VAR_5;
 size_t VAR_6;

 VAR_6 = VAR_2->uio_resid;
 if (VAR_6 < 1) {
  *VAR_3 = 0;
  return;
 }
 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 VAR_4 = FUNC_0(VAR_1->tdev->fdev);
 VAR_5 = FUNC_1(VAR_1->tdev->fdev);
 if (VAR_2->uio_offset > VAR_4)
  *VAR_3 = 0;
 else if (VAR_2->uio_offset + *VAR_3 > VAR_4 + VAR_5)
  *VAR_3 = VAR_4 + VAR_5 - VAR_2->uio_offset;
 else
  *VAR_3 = VAR_6;
}
