
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,...) ;

int
FUNC_5(device_t VAR_0, device_t VAR_1)
{
 int VAR_2 = 0, VAR_3;

 VAR_2 += FUNC_0(VAR_0, VAR_1);
 VAR_2 += FUNC_4(" on %s drive %d", FUNC_2(VAR_0),
        FUNC_3(VAR_1));
 if ((VAR_3 = FUNC_1(VAR_0)) != 0)
  VAR_2 += FUNC_4(" flags %#x", VAR_3);
 VAR_2 += FUNC_4("\n");

 return (VAR_2);
}
