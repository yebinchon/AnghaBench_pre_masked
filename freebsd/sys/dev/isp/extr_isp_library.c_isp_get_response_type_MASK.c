
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int ispsoftc_t ;
struct TYPE_3__ {int rqs_entry_type; int rqs_entry_count; } ;
typedef TYPE_1__ isphdr_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2(ispsoftc_t *VAR_0, isphdr_t *VAR_1)
{
 uint8_t VAR_2;
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0, &VAR_1->rqs_entry_count, VAR_2);
 } else {
  FUNC_0(VAR_0, &VAR_1->rqs_entry_type, VAR_2);
 }
 return ((int)VAR_2);
}
