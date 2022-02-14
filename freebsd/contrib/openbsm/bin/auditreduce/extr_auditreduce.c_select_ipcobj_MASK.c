
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,char**,int) ;

__attribute__((used)) static int
FUNC_3(u_char VAR_10, uint32_t VAR_11, uint32_t *VAR_12)
{

 if (VAR_10 == VAR_0) {
  FUNC_1((*VAR_12), VAR_3);
  if (FUNC_0(VAR_6, VAR_3)) {
   if (VAR_11 != (uint32_t)FUNC_2(VAR_7, (char **)((void*)0),
       10))
    return (0);
  }
  return (1);
 } else if (VAR_10 == VAR_1) {
  FUNC_1((*VAR_12), VAR_4);
  if (FUNC_0(VAR_6, VAR_4)) {
   if (VAR_11 != (uint32_t)FUNC_2(VAR_8, (char **)((void*)0), 10))
    return (0);
  }
  return (1);
 } else if (VAR_10 == VAR_2) {
  FUNC_1((*VAR_12), VAR_5);
  if (FUNC_0(VAR_6, VAR_5)) {
   if (VAR_11 != (uint32_t)FUNC_2(VAR_9, (char **)((void*)0), 10))
    return (0);
  }
  return (1);
 }


 if (FUNC_0(VAR_6, VAR_3) || FUNC_0(VAR_6, VAR_4)
     || FUNC_0(VAR_6, VAR_5))
  return (0);

 return (1);
}
