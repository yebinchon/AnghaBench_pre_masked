
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;


 void* FUNC_0 (struct archive_read*,int,int *) ;
 scalar_t__ FUNC_1 (void const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_0, int VAR_1)
{
 const void *VAR_2;

 (void)VAR_1;





 if ((VAR_2 = FUNC_0(VAR_0, 8, ((void*)0))) == ((void*)0))
  return (-1);
 if (FUNC_1(VAR_2, "!<arch>\n", 8) == 0) {
  return (64);
 }
 return (-1);
}
