
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radius_msg {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct radius_msg*,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct radius_msg *VAR_0, u8 VAR_1,
         u32 *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 VAR_4 = FUNC_1(VAR_0, VAR_1, (u8 *) &VAR_3, 4);
 if (VAR_4 != 4)
  return -1;

 *VAR_2 = FUNC_0(VAR_3);
 return 0;
}
