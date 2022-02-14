
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (char*,scalar_t__,int *) ;

__attribute__((used)) static __inline int
FUNC_4(FILE *VAR_3, char * VAR_4, int VAR_5, locale_t VAR_6)
{
 mbstate_t VAR_7;
 size_t VAR_8;
 wint_t VAR_9;
 int VAR_10;

 VAR_7 = VAR_2;
 VAR_10 = 0;
 while ((VAR_9 = FUNC_0(VAR_3, VAR_6)) != VAR_1 && VAR_5-- != 0 &&
     !FUNC_2(VAR_9)) {
  if (VAR_4 != VAR_0) {
   VAR_8 = FUNC_3(VAR_4, VAR_9, &VAR_7);
   if (VAR_8 == (size_t)-1)
    return (-1);
   VAR_4 += VAR_8;
  }
  VAR_10++;
 }
 if (VAR_9 != VAR_1)
  FUNC_1(VAR_9, VAR_3, VAR_6);
 if (VAR_4 != VAR_0)
  *VAR_4 = 0;
 return (VAR_10);
}
