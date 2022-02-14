
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int ** guest_msrs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct vmx *VAR_11, int VAR_12)
{
 uint64_t *VAR_13 = VAR_11->guest_msrs[VAR_12];


 FUNC_0(VAR_10);
 FUNC_1(VAR_7, VAR_13[VAR_2]);
 FUNC_1(VAR_5, VAR_13[VAR_0]);
 FUNC_1(VAR_9, VAR_13[VAR_4]);
 FUNC_1(VAR_8, VAR_13[VAR_3]);
 FUNC_1(VAR_6, VAR_13[VAR_1]);
}
