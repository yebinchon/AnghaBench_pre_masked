
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
struct ccl {int dummy; } ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (struct ccl const*,scalar_t__) ;
 int VAR_2 ;
 size_t FUNC_3 (char*,scalar_t__,int *) ;

__attribute__((used)) static __inline int
FUNC_4(FILE *VAR_3, char * VAR_4, int VAR_5, const struct ccl *VAR_6,
    locale_t VAR_7)
{
 mbstate_t VAR_8;
 size_t VAR_9;
 wint_t VAR_10;
 int VAR_11;

 VAR_11 = 0;
 VAR_8 = VAR_2;
 while ((VAR_10 = FUNC_0(VAR_3, VAR_7)) != VAR_1 &&
     VAR_5-- != 0 && FUNC_2(VAR_6, VAR_10)) {
  if (VAR_4 != VAR_0) {
   VAR_9 = FUNC_3(VAR_4, VAR_10, &VAR_8);
   if (VAR_9 == (size_t)-1)
    return (-1);
   VAR_4 += VAR_9;
  }
  VAR_11++;
 }
 if (VAR_10 != VAR_1)
  FUNC_1(VAR_10, VAR_3, VAR_7);
 if (VAR_4 != VAR_0)
  *VAR_4 = 0;
 return (VAR_11);
}
