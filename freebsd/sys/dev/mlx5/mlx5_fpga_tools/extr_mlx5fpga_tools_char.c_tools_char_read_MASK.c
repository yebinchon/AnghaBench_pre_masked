
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct tools_context {int access_type; TYPE_1__* tdev; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int fdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (TYPE_1__*,void*,size_t,scalar_t__,int ,size_t*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tools_context*,struct uio*,size_t*) ;
 int FUNC_7 (void*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct tools_context *VAR_5;
 void *VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1((void **)&VAR_5);
 if (VAR_9 != 0)
  return (VAR_9);
 FUNC_0(FUNC_5(VAR_5->tdev->fdev),
     "tools char device reading %zu bytes at 0x%jx\n", VAR_3->uio_resid,
      (uintmax_t)VAR_3->uio_offset);

 FUNC_6(VAR_5, VAR_3, &VAR_7);
 if (VAR_7 == 0)
  return (0);

 VAR_6 = FUNC_3(VAR_7, VAR_0, VAR_1);
 VAR_9 = FUNC_4(VAR_5->tdev, VAR_6, VAR_7, VAR_3->uio_offset,
     VAR_5->access_type, &VAR_8);
 if (VAR_9 == 0)
  VAR_9 = FUNC_7(VAR_6, VAR_8, VAR_3);
 FUNC_2(VAR_6, VAR_0);
 return (VAR_9);
}
