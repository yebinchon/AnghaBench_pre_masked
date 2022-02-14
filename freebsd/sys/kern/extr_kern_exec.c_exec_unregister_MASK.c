
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execsw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct execsw const** VAR_3 ;
 int FUNC_0 (struct execsw const**,int ) ;
 struct execsw** FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3(const struct execsw *VAR_4)
{
 const struct execsw **VAR_5, **VAR_6, **VAR_7;
 int VAR_8 = 1;

 if (VAR_3 == ((void*)0))
  FUNC_2("unregister with no handlers left?\n");

 for (VAR_5 = VAR_3; *VAR_5; VAR_5++) {
  if (*VAR_5 == VAR_4)
   break;
 }
 if (*VAR_5 == ((void*)0))
  return (VAR_0);
 for (VAR_5 = VAR_3; *VAR_5; VAR_5++)
  if (*VAR_5 != VAR_4)
   VAR_8++;
 VAR_7 = FUNC_1(VAR_8 * sizeof(*VAR_5), VAR_1, VAR_2);
 VAR_6 = VAR_7;
 for (VAR_5 = VAR_3; *VAR_5; VAR_5++)
  if (*VAR_5 != VAR_4)
   *VAR_6++ = *VAR_5;
 *VAR_6 = ((void*)0);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_1);
 VAR_3 = VAR_7;
 return (0);
}
