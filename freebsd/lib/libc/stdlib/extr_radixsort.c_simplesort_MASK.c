
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef size_t u_char ;


 int FUNC_0 (size_t const*,size_t const*,size_t const*) ;

__attribute__((used)) static inline void
FUNC_1(const u_char **VAR_0, int VAR_1, int VAR_2, const u_char *VAR_3, u_int VAR_4)
{
 u_char VAR_5;
 const u_char **VAR_6, **VAR_7, *VAR_8, *VAR_9;

 for (VAR_6 = VAR_0+1; --VAR_1 >= 1; VAR_6++)
  for (VAR_7 = VAR_6; VAR_7 > VAR_0; VAR_7--) {
   for (VAR_8 = VAR_7[0] + VAR_2, VAR_9 = VAR_7[-1] + VAR_2;
       (VAR_5 = VAR_3[*VAR_8]) != VAR_4; VAR_8++, VAR_9++)
    if (VAR_5 != VAR_3[*VAR_9])
     break;
   if (VAR_5 >= VAR_3[*VAR_9])
    break;
   FUNC_0(VAR_7[0], VAR_7[-1], VAR_8);
  }
}
