
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (size_t,int *,int *,size_t,size_t,int ,int*) ;
 int FUNC_1 (size_t,int *,int *,size_t,size_t,int,int*) ;
 int FUNC_2 (char const*,char const*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,size_t) ;

int
FUNC_5(const char *VAR_15, const char *VAR_16, size_t VAR_17, int VAR_18, size_t VAR_19,
  int *VAR_20)
{
 int VAR_21;
 size_t VAR_22;
 size_t VAR_23;

 *VAR_20 = 0;






 if (VAR_19 > VAR_14) {
  *VAR_20 = VAR_3;
  VAR_19 = VAR_14;
 }

 if (VAR_18 == 0) {
  VAR_18 = VAR_9;
 } else {
  VAR_21 = VAR_18 & (VAR_9 | VAR_8 |
      VAR_7);
  if (VAR_21 == 0) {
   VAR_18 |= VAR_9;
  } else if (VAR_21 != VAR_9 && VAR_21 != VAR_8 &&
      VAR_21 != VAR_7) {
   *VAR_20 = VAR_2;
   VAR_18 = VAR_9;
  }

  VAR_21 = VAR_18 & (VAR_5 | VAR_6 | VAR_4);
  if (VAR_21 && VAR_21 != VAR_11 && VAR_21 != VAR_10 &&
      VAR_21 != VAR_13 && VAR_21 != VAR_12) {
   *VAR_20 = VAR_2;
   VAR_18 = VAR_9;
  }
 }

 if (VAR_18 == VAR_9) {
  return (VAR_17 == 0 ? FUNC_2(VAR_15, VAR_16) : FUNC_4(VAR_15, VAR_16, VAR_17));
 }

 VAR_22 = FUNC_3(VAR_15);
 VAR_23 = FUNC_3(VAR_16);
 if (VAR_17 != 0) {
  if (VAR_17 < VAR_22)
   VAR_22 = VAR_17;
  if (VAR_17 < VAR_23)
   VAR_23 = VAR_17;
 }





 if (VAR_18 == VAR_8) {
  return (FUNC_0(VAR_19, (uchar_t *)VAR_15, (uchar_t *)VAR_16,
      VAR_22, VAR_23, VAR_1, VAR_20));
 } else if (VAR_18 == VAR_7) {
  return (FUNC_0(VAR_19, (uchar_t *)VAR_15, (uchar_t *)VAR_16,
      VAR_22, VAR_23, VAR_0, VAR_20));
 }

 return (FUNC_1(VAR_19, (uchar_t *)VAR_15, (uchar_t *)VAR_16, VAR_22, VAR_23,
     VAR_18, VAR_20));
}
