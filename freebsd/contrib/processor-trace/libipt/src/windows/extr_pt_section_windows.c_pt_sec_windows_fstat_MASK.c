
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct _stat*) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, struct _stat *VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_3 || !VAR_4)
  return -VAR_2;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (VAR_5 == -1)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_5, VAR_4);

 FUNC_0(VAR_5);

 if (VAR_6)
  return -VAR_1;

 return 0;
}
