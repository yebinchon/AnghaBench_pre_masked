
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct auth_chunk {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct auth_chunk*,int) ;
 int FUNC_1 (struct auth_chunk*,int,size_t,int **,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int **,size_t*) ;
 int FUNC_2 (struct auth_chunk**,int*,size_t*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(struct auth_chunk* VAR_2, int VAR_3, size_t VAR_4,
 uint8_t* VAR_5, uint16_t VAR_6, uint16_t VAR_7,
 uint32_t VAR_8, uint16_t VAR_9, uint8_t* VAR_10,
 size_t VAR_11, uint32_t VAR_12, uint32_t VAR_13)
{
 uint32_t VAR_14;

 FUNC_2(&VAR_2, &VAR_3, &VAR_4, VAR_11);
 if(FUNC_0(VAR_2, VAR_3)) {

  FUNC_4(VAR_1, "IXFR has no second SOA record");
  return 0;
 }
 if(!FUNC_1(VAR_2, VAR_3, VAR_4,
  &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9,
  &VAR_10, &VAR_11)) {
  FUNC_4(VAR_1, "IXFR cannot parse second SOA record");

  return 0;
 }
 if(VAR_6 != VAR_0) {
  FUNC_4(VAR_1, "IXFR second record is not type SOA");
  return 0;
 }
 if(VAR_9 < 22) {
  FUNC_4(VAR_1, "IXFR, second SOA has short rdlength");
  return 0;
 }
 VAR_14 = FUNC_3(VAR_10+VAR_9-20);
 if(VAR_14 == VAR_12) {

  FUNC_4(VAR_1, "IXFR second serial same as first");
  return 0;
 }
 if(VAR_14 != VAR_13) {


  FUNC_4(VAR_1, "IXFR is from serial %u to %u but %u "
   "in memory, rejecting the zone transfer",
   (unsigned)VAR_14, (unsigned)VAR_12,
   (unsigned)VAR_13);
  return 0;
 }

 return 1;
}
