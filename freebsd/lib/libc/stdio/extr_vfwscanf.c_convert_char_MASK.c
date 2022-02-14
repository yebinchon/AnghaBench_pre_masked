
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 size_t FUNC_1 (char*,int ,int *) ;

__attribute__((used)) static __inline int
FUNC_2(FILE *VAR_3, char * VAR_4, int VAR_5, locale_t VAR_6)
{
 mbstate_t VAR_7;
 size_t VAR_8;
 wint_t VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_7 = VAR_2;
 while (VAR_5-- != 0 && (VAR_9 = FUNC_0(VAR_3, VAR_6)) != VAR_1) {
  if (VAR_4 != VAR_0) {
   VAR_8 = FUNC_1(VAR_4, VAR_9, &VAR_7);
   if (VAR_8 == (size_t)-1)
    return (-1);
   VAR_4 += VAR_8;
  }
  VAR_10++;
 }
 if (VAR_10 == 0)
  return (-1);
 return (VAR_10);
}
