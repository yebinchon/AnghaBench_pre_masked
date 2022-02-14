
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,int ,int,union ib_gid*,int ) ;
 int FUNC_1 (struct ib_device*,int ,int,union ib_gid*,int *) ;
 int FUNC_2 (union ib_gid*,int *,int) ;
 int FUNC_3 (struct ib_device*,int ) ;
 scalar_t__ FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (struct ib_device*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_3, u8 VAR_4, int VAR_5,
        union ib_gid *VAR_6)
{
 int VAR_7;

 if (FUNC_4(VAR_3, VAR_4))
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 0);

 if (!FUNC_5(VAR_3, VAR_4))
  return -VAR_1;

 if (!FUNC_3(VAR_3, VAR_4))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));
 if (VAR_7 == -VAR_0) {
  FUNC_2(VAR_6, &VAR_2, sizeof(*VAR_6));
  return 0;
 }

 return VAR_7;
}
