
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int rr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int *,size_t*,size_t*,int,int *,int ,int *,int ) ;
 int FUNC_5 (int *,size_t,size_t) ;
 int FUNC_6 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_7(const char* VAR_1, uint8_t** VAR_2, uint16_t* VAR_3,
 uint16_t* VAR_4)
{
 uint8_t VAR_5[VAR_0];
 size_t VAR_6 = sizeof(VAR_5), VAR_7 = 0;
 int VAR_8 = FUNC_4(VAR_1, VAR_5, &VAR_6, &VAR_7, 3600,
  ((void*)0), 0, ((void*)0), 0);
 if(VAR_8 != 0) {
  FUNC_1("error parsing local-data at %d '%s': %s",
   FUNC_0(VAR_8), VAR_1,
   FUNC_3(VAR_8));
  return 0;
 }
 *VAR_2 = FUNC_2(VAR_5, VAR_7);
 *VAR_3 = FUNC_5(VAR_5, VAR_6, VAR_7);
 *VAR_4 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if(!*VAR_2) {
  FUNC_1("out of memory");
  return 0;
 }
 return 1;
}
