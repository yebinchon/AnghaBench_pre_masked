
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_2 += FUNC_5(FUNC_2(VAR_1));
 if (!FUNC_3(VAR_1))
  VAR_2 += FUNC_4(" disabled");
 VAR_2 += FUNC_0(VAR_0, VAR_1);
 return (VAR_2);
}
