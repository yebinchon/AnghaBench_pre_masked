
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__*,char const**) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char* VAR_9, uint8_t* VAR_10,
 size_t* VAR_11, int* VAR_12)
{
 size_t VAR_13;

 const char *VAR_14;
 uint8_t *VAR_15, *VAR_16, VAR_17;

 if(VAR_12) *VAR_12 = 0;
 VAR_13 = FUNC_2((char*)VAR_9);

 if (VAR_13 > VAR_0 * 4) {
  return FUNC_0(VAR_3, 0);
 }
 if (0 == VAR_13) {
  return FUNC_0(VAR_4, 0);
 }


 if (1 == VAR_13 && *VAR_9 == '.') {
  if(*VAR_11 < 1)
   return FUNC_0(VAR_2, 0);
  VAR_10[0] = 0;
  *VAR_11 = 1;
  return VAR_7;
 }
 VAR_13 = 0;
 if(*VAR_11 < 1)
  return FUNC_0(VAR_2, 0);
 VAR_15 = VAR_10+1;
 VAR_16 = VAR_10;
 VAR_17 = 0;
 for (VAR_14 = VAR_9; *VAR_14; VAR_14++, VAR_15++) {
  if (VAR_15 >= VAR_10 + *VAR_11)
   return FUNC_0(VAR_2, VAR_15-VAR_10);
  if (VAR_15 > VAR_10 + VAR_0)
   return FUNC_0(VAR_3, VAR_15-VAR_10);
  switch (*VAR_14) {
  case '.':
   if (VAR_17 > VAR_1) {
    return FUNC_0(VAR_6, VAR_15-VAR_10);
   }
   if (VAR_17 == 0) {
    return FUNC_0(VAR_5, VAR_15-VAR_10);
   }
   VAR_13 += VAR_17 + 1;
   *VAR_15 = 0;
   *VAR_16 = VAR_17;
   VAR_17 = 0;
   VAR_16 = VAR_15;
   break;
  case '\\':

   VAR_14 += 1;
   if (!FUNC_1(VAR_15, &VAR_14)) {
    *VAR_15 = 0;
    return FUNC_0(VAR_8, VAR_15-VAR_10);
   }
   VAR_14 -= 1;
   VAR_17++;
   break;
  default:
   *VAR_15 = (uint8_t)*VAR_14;
   VAR_17++;
  }
 }


 if(VAR_17 != 0) {
  if(VAR_12) *VAR_12 = 1;
  if (VAR_15 >= VAR_10 + *VAR_11)
   return FUNC_0(VAR_2, VAR_15-VAR_10);
  if (VAR_15 > VAR_10 + VAR_0) {
   return FUNC_0(VAR_3, VAR_15-VAR_10);
  }
                if (VAR_17 > VAR_1) {
                        return FUNC_0(VAR_6, VAR_15-VAR_10);
                }
                if (VAR_17 == 0) {
                        return FUNC_0(VAR_5, VAR_15-VAR_10);
                }
  VAR_13 += VAR_17 + 1;
  *VAR_16 = VAR_17;
  *VAR_15 = 0;
 }
 VAR_13++;
 *VAR_11 = VAR_13;

 return VAR_7;
}
