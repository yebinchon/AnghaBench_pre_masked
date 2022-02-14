
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _csmapper {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct _csmapper*) ;
 int FUNC_1 (struct _csmapper*) ;
 int FUNC_2 (struct _csmapper*) ;
 scalar_t__ FUNC_3 (struct _csmapper*) ;
 int FUNC_4 (struct _csmapper**,char const*,char const*,int ,unsigned long*) ;

__attribute__((used)) static int
FUNC_5(struct _csmapper **VAR_1, const char *VAR_2, const char *VAR_3,
    unsigned long *VAR_4)
{
 struct _csmapper *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(&VAR_5, VAR_2, VAR_3, 0, VAR_4);
 if (VAR_6)
  return (VAR_6);
 if (FUNC_2(VAR_5) != 1 || FUNC_1(VAR_5) != 1 ||
     FUNC_3(VAR_5) != 0) {
  FUNC_0(VAR_5);
  return (VAR_0);
 }

 *VAR_1 = VAR_5;

 return (0);
}
