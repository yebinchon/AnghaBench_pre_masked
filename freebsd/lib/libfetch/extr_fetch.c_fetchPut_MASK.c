
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int scheme; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct url*,char const*) ;
 int * FUNC_1 (struct url*,char const*) ;
 int * FUNC_2 (struct url*,char const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

FILE *
FUNC_5(struct url *VAR_5, const char *VAR_6)
{

 if (FUNC_3(VAR_5->scheme, VAR_0) == 0)
  return (FUNC_1(VAR_5, VAR_6));
 else if (FUNC_3(VAR_5->scheme, VAR_1) == 0)
  return (FUNC_0(VAR_5, VAR_6));
 else if (FUNC_3(VAR_5->scheme, VAR_2) == 0)
  return (FUNC_2(VAR_5, VAR_6));
 else if (FUNC_3(VAR_5->scheme, VAR_3) == 0)
  return (FUNC_2(VAR_5, VAR_6));
 FUNC_4(VAR_4);
 return (((void*)0));
}
