
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_4(u_int32_t *VAR_3)
{
 FUNC_1(sizeof(*VAR_3));
 if (VAR_2 < sizeof(*VAR_3))
  FUNC_0(((void*)0), 0);
 FUNC_2(VAR_3, VAR_1 + VAR_0 - VAR_2, sizeof(*VAR_3));
 FUNC_3(VAR_1 + VAR_0 - VAR_2, 0, sizeof(*VAR_3));
 VAR_2 -= sizeof(*VAR_3);
 return;
}
