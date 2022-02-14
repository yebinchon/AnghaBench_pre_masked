
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 int32_t VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5 != VAR_0) {
  VAR_6 = FUNC_3(VAR_1, 0, 0, 0);

  if (VAR_6 > 0)
   VAR_3 = VAR_6;
 }

 if (VAR_2) {
  FUNC_2("Found SMCCC version %u.%u\n",
      FUNC_0(VAR_3),
      FUNC_1(VAR_3));
 }
}
