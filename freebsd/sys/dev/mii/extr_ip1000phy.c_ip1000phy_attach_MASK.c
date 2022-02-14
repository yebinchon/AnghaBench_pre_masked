
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mii_attach_args {int mii_id2; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 struct mii_attach_args* FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct mii_attach_args *VAR_7;
 u_int VAR_8;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = VAR_1 | VAR_2;
 if (FUNC_0(VAR_7->mii_id2) == VAR_4 &&
      FUNC_2(VAR_6, "stge") &&
      (FUNC_4(VAR_6) & VAR_0) != 0)
  VAR_8 |= VAR_3;
 FUNC_3(VAR_6, VAR_8, &VAR_5, 1);
 return (0);
}
