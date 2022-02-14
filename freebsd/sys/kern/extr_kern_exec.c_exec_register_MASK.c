
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct execsw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct execsw const** VAR_2 ;
 int FUNC_0 (struct execsw const**,int ) ;
 struct execsw** FUNC_1 (int,int ,int ) ;

int
FUNC_2(const struct execsw *VAR_3)
{
 const struct execsw **VAR_4, **VAR_5, **VAR_6;
 u_int VAR_7 = 2;

 if (VAR_2)
  for (VAR_4 = VAR_2; *VAR_4; VAR_4++)
   VAR_7++;
 VAR_6 = FUNC_1(VAR_7 * sizeof(*VAR_4), VAR_0, VAR_1);
 VAR_5 = VAR_6;
 if (VAR_2)
  for (VAR_4 = VAR_2; *VAR_4; VAR_4++)
   *VAR_5++ = *VAR_4;
 *VAR_5++ = VAR_3;
 *VAR_5 = ((void*)0);
 if (VAR_2)
  FUNC_0(VAR_2, VAR_0);
 VAR_2 = VAR_6;
 return (0);
}
