
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum MAD_FIELDS { ____Placeholder_MAD_FIELDS } MAD_FIELDS ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(enum MAD_FIELDS VAR_3)
{
 if (VAR_1 >= VAR_0) {
  FUNC_0("Maximum (%d) fields have been suppressed; skipping %s",
         VAR_1, FUNC_1(VAR_3));
  return;
 }
 VAR_2[VAR_1++] = VAR_3;
}
