
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct nlist*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int ) ;

int
FUNC_3(const char *VAR_2, struct nlist *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_1 | VAR_0, 0);
 if (VAR_4 < 0)
  return (-1);
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 (void)FUNC_1(VAR_4);
 return (VAR_5);
}
