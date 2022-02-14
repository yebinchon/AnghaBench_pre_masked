
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debuginfo {int dummy; } ;


 scalar_t__ FUNC_0 (struct debuginfo*,char const*) ;
 int FUNC_1 (struct debuginfo*) ;
 struct debuginfo* FUNC_2 (int) ;

struct debuginfo *FUNC_3(const char *VAR_0)
{
 struct debuginfo *VAR_1 = FUNC_2(sizeof(struct debuginfo));
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_1, VAR_0) < 0) {
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }

 return VAR_1;
}
