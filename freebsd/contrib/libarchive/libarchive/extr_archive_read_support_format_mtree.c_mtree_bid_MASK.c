
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;


 char* FUNC_0 (struct archive_read*,scalar_t__,int *) ;
 int FUNC_1 (struct archive_read*,int *) ;
 scalar_t__ FUNC_2 (char const*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_0, int VAR_1)
{
 const char *VAR_2 = "#mtree";
 const char *VAR_3;

 (void)VAR_1;


 VAR_3 = FUNC_0(VAR_0, FUNC_3(VAR_2), ((void*)0));
 if (VAR_3 == ((void*)0))
  return (-1);

 if (FUNC_2(VAR_3, VAR_2, FUNC_3(VAR_2)) == 0)
  return (8 * (int)FUNC_3(VAR_2));




 return (FUNC_1(VAR_0, ((void*)0)));
}
