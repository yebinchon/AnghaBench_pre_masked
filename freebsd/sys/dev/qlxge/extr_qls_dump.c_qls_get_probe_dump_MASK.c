
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,int*,int *) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_4, uint32_t *VAR_5)
{

 uint8_t VAR_6[0x20] = {
  1,
  1,
  1,
  0,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  0,
  1,
  1,
  1,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
 };


 uint8_t VAR_7[0x20] = {
  1,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
 };


 uint8_t VAR_8[0x20] = {
  1,
  0,
  0,
  1,
  0,
  0,
  0,
  0,
  1,
  1,
  0,
  0,
  1,
  1,
  1,
  0,
  1,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
 };

 uint8_t VAR_9[0x20] = {
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
 };

 FUNC_1(VAR_4, 0x100e, 0x18a20000);

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_6, VAR_5);

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_7, VAR_5);

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_8, VAR_5);

 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_9, VAR_5);

 return(0);
}
