
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int *,size_t*,size_t*,int,int *,int ,int *,int ) ;
 int FUNC_5 (int *,size_t,size_t) ;
 int FUNC_6 (int *,size_t,size_t) ;
 int * FUNC_7 (int *,size_t,size_t) ;
 scalar_t__ FUNC_8 (int *,size_t,size_t) ;
 int FUNC_9 (int *,size_t,size_t) ;

int
FUNC_10(const char* VAR_0, uint8_t** VAR_1, uint16_t* VAR_2,
 uint16_t* VAR_3, time_t* VAR_4, uint8_t* VAR_5, size_t VAR_6,
 uint8_t** VAR_7, size_t* VAR_8)
{
 size_t VAR_9 = 0;
 int VAR_10 = FUNC_4(VAR_0, VAR_5, &VAR_6, &VAR_9, 3600,
  ((void*)0), 0, ((void*)0), 0);
 if(VAR_10) {
  FUNC_1("error parsing local-data at %d: '%s': %s",
   FUNC_0(VAR_10), VAR_0,
   FUNC_3(VAR_10));
  return 0;
 }
 *VAR_1 = FUNC_2(VAR_5, VAR_9);
 if(!*VAR_1) {
  FUNC_1("out of memory");
  return 0;
 }
 *VAR_3 = FUNC_5(VAR_5, VAR_6, VAR_9);
 *VAR_2 = FUNC_9(VAR_5, VAR_6, VAR_9);
 *VAR_4 = (time_t)FUNC_8(VAR_5, VAR_6, VAR_9);
 *VAR_7 = FUNC_7(VAR_5, VAR_6, VAR_9);
 *VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_9)+2;
 return 1;
}
