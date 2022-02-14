
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_state {int dummy; } ;
typedef int locale_t ;
typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct io_state*,int const*,int,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct io_state *VAR_1, int VAR_2, const CHAR * __restrict VAR_3,
  locale_t VAR_4)
{
 int VAR_5;

 while (VAR_2 > 0) {
  VAR_5 = (VAR_2 >= VAR_0) ? VAR_0 : VAR_2;
  if (FUNC_0(VAR_1, VAR_3, VAR_5, VAR_4))
   return (-1);
  VAR_2 -= VAR_5;
 }
 return (0);
}
