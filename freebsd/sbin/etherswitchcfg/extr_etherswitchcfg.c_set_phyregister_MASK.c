
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg {int dummy; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct cfg*,int,int) ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (struct cfg*,int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct cfg *VAR_0, char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 char *VAR_5, *VAR_6;

 VAR_2 = FUNC_2(VAR_1, &VAR_5, 0);
 if (VAR_5==VAR_1)
  return (1);
 if (*VAR_5 != '.')
  return (1);
 VAR_6 = VAR_5+1;
 VAR_3 = FUNC_2(VAR_6, &VAR_5, 0);
 if (VAR_6 == VAR_5)
  return (1);
 if (*VAR_5 == '=') {
  VAR_4 = FUNC_3(VAR_5+1, ((void*)0), 0);
  FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4);
 }
 FUNC_0("\treg %d.0x%02x=0x%04x\n", VAR_2, VAR_3, FUNC_1(VAR_0, VAR_2, VAR_3));
 return (0);
}
