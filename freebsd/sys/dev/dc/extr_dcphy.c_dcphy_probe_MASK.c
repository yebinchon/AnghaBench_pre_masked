
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_attach_args {scalar_t__ mii_id1; scalar_t__ mii_id2; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mii_attach_args* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
 struct mii_attach_args *VAR_5;

 VAR_5 = FUNC_0(VAR_4);





 if (VAR_5->mii_id1 != VAR_2 ||
     VAR_5->mii_id2 != VAR_1)
  return (VAR_3);

 FUNC_1(VAR_4, "Intel 21143 NWAY media interface");

 return (VAR_0);
}
