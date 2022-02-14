
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0);
 if (VAR_5 <= 0)
  return (VAR_5);

 if (FUNC_0(VAR_4, "rl") || FUNC_0(VAR_4, "re"))
  return (FUNC_1(VAR_4, VAR_2, VAR_0));
 return (VAR_1);
}
