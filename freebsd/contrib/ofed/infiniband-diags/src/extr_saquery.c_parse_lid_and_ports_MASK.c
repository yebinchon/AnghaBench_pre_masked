
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_handle {int dummy; } ;


 int FUNC_0 (struct sa_handle*,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_3(struct sa_handle * VAR_0,
          char *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 char *VAR_5, *VAR_6;

 if (VAR_3)
  *VAR_3 = -1;
 if (VAR_4)
  *VAR_4 = -1;

 VAR_5 = FUNC_1(VAR_1, '/');
 if (VAR_5)
  *VAR_5 = '\0';
 if (VAR_2)
  *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_5)
  return 0;
 VAR_1 = VAR_5 + 1;
 VAR_5 = FUNC_1(VAR_1, '/');
 if (VAR_5)
  *VAR_5 = '\0';
 if (VAR_3) {
  *VAR_3 = FUNC_2(VAR_1, &VAR_6, 0);
  if (VAR_6 == VAR_1)
   *VAR_3 = -1;
 }

 if (!VAR_5)
  return 0;
 VAR_1 = VAR_5 + 1;
 if (VAR_4) {
  *VAR_4 = FUNC_2(VAR_1, &VAR_6, 0);
  if (VAR_6 == VAR_1)
   *VAR_4 = -1;
 }

 return 0;
}
