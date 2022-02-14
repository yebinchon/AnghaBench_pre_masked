
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ldst_mps_rplc {void* rplc31_0; void* rplc63_32; void* rplc95_64; void* rplc127_96; void* rplc159_128; void* rplc191_160; void* rplc223_192; void* rplc255_224; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_8, struct fw_ldst_mps_rplc *VAR_9)
{
 if (FUNC_1(VAR_8)) {
  VAR_9->rplc255_224 = FUNC_0(FUNC_2(VAR_8,
         VAR_3));
  VAR_9->rplc223_192 = FUNC_0(FUNC_2(VAR_8,
         VAR_2));
  VAR_9->rplc191_160 = FUNC_0(FUNC_2(VAR_8,
         VAR_1));
  VAR_9->rplc159_128 = FUNC_0(FUNC_2(VAR_8,
         VAR_0));
 } else {
  VAR_9->rplc255_224 = FUNC_0(FUNC_2(VAR_8,
         VAR_7));
  VAR_9->rplc223_192 = FUNC_0(FUNC_2(VAR_8,
         VAR_6));
  VAR_9->rplc191_160 = FUNC_0(FUNC_2(VAR_8,
         VAR_5));
  VAR_9->rplc159_128 = FUNC_0(FUNC_2(VAR_8,
         VAR_4));
 }
 VAR_9->rplc127_96 = FUNC_0(FUNC_2(VAR_8, VAR_3));
 VAR_9->rplc95_64 = FUNC_0(FUNC_2(VAR_8, VAR_2));
 VAR_9->rplc63_32 = FUNC_0(FUNC_2(VAR_8, VAR_1));
 VAR_9->rplc31_0 = FUNC_0(FUNC_2(VAR_8, VAR_0));
}
