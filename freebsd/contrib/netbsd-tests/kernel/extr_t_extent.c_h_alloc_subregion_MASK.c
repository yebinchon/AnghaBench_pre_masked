
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,int ,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(u_long VAR_3, u_long VAR_4, u_long VAR_5,
    u_long VAR_6, u_long VAR_7, int VAR_8, u_long VAR_9)
{
 u_long VAR_10;






 VAR_2 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5,
     VAR_6, 0, VAR_7, 0, &VAR_10);

 if (VAR_2 != VAR_8)
  FUNC_0("extent_alloc_subregion1(ex, %#lx, %#lx, %#lx, %#lx, 0, " "%#lx, 0, &result): " "%s", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, FUNC_2(VAR_0));

 if (VAR_8 == 0 && VAR_10 != VAR_9)
  FUNC_0("extent_alloc_subregion1(ex, %#lx, %#lx, %#lx, %#lx, 0, " "%#lx, 0, &result): " "result should be: %#lx, got: %#lx", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10);

}
