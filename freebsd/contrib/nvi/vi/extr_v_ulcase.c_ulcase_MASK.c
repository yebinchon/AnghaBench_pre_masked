
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int recno_t ;
typedef scalar_t__ UCHAR_T ;
typedef int SCR ;
typedef scalar_t__ CHAR_T ;
typedef scalar_t__ ARG_CHAR_T ;


 int FUNC_0 (int *,scalar_t__*,size_t) ;
 int FUNC_1 (int *,scalar_t__*,size_t,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*,size_t) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_0, recno_t VAR_1, CHAR_T *VAR_2, size_t VAR_3, size_t VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 int VAR_7, VAR_8;
 ARG_CHAR_T VAR_9;
 CHAR_T *VAR_10, *VAR_11, *VAR_12;

 FUNC_1(VAR_0, VAR_12, VAR_6, VAR_3);
 FUNC_4(VAR_12, VAR_2, VAR_3);

 VAR_7 = VAR_8 = 0;
 for (VAR_10 = VAR_12 + VAR_4, VAR_11 = VAR_12 + VAR_5 + 1; VAR_10 < VAR_11; ++VAR_10) {
  VAR_9 = (UCHAR_T)*VAR_10;
  if (FUNC_2(VAR_9)) {
   *VAR_10 = FUNC_6(VAR_9);
   VAR_7 = 1;
  } else if (FUNC_3(VAR_9)) {
   *VAR_10 = FUNC_5(VAR_9);
   VAR_7 = 1;
  }
 }

 if (VAR_7 && FUNC_7(VAR_0, VAR_1, VAR_12, VAR_3))
  VAR_8 = 1;

 FUNC_0(VAR_0, VAR_12, VAR_6);
 return (VAR_8);
}
