
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*,char const**) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int ,char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive *VAR_3, const char *VAR_4)
{
 const char *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  return (0);

 while ((VAR_6 = FUNC_1(
     VAR_3, &VAR_5)) == VAR_1)
  FUNC_3(0, "%s: %s", VAR_5, VAR_4);
 if (VAR_6 == VAR_0)
  FUNC_2(1, VAR_2, "Out of memory");

 return (FUNC_0(VAR_3));
}
