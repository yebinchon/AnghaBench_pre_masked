
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int ULONGEST ;
struct TYPE_3__ {int (* to_xfer_partial ) (TYPE_1__*,int,char const*,void*,void const*,int ,int ) ;} ;
typedef int LONGEST ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int,char const*,long,long,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,char const*,void*,void const*,int ,int ) ;

__attribute__((used)) static LONGEST
FUNC_4 (struct target_ops *VAR_2, enum target_object VAR_3,
         const char *VAR_4, void *VAR_5, const void *VAR_6,
         ULONGEST VAR_7, LONGEST VAR_8)
{
  LONGEST VAR_9;

  VAR_9 = VAR_0.to_xfer_partial (&VAR_0, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8);

  FUNC_0 (VAR_1,
        "target_xfer_partial (%d, %s, 0x%lx,  0x%lx,  0x%s, %s) = %s\n",
        (int) VAR_3, (VAR_4 ? VAR_4 : "(null)"),
        (long) VAR_5, (long) VAR_6, FUNC_2 (VAR_7),
        FUNC_1 (VAR_8), FUNC_1 (VAR_9));

  return VAR_9;
}
