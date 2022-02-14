
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_state {int dummy; } ;
typedef int locale_t ;
typedef int CHAR ;


 int FUNC_0 (struct io_state*,int,int const*,int ) ;
 scalar_t__ FUNC_1 (struct io_state*,int const*,int,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct io_state *VAR_0, const CHAR *VAR_1, const CHAR *VAR_2,
        int VAR_3, const CHAR * __restrict VAR_4, locale_t VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_2 - VAR_1;
 if (VAR_6 > VAR_3)
  VAR_6 = VAR_3;
 if (VAR_6 > 0) {
  if (FUNC_1(VAR_0, VAR_1, VAR_6, VAR_5))
   return (-1);
 } else {
  VAR_6 = 0;
 }
 return (FUNC_0(VAR_0, VAR_3 - VAR_6, VAR_4, VAR_5));
}
