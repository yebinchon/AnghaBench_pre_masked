
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 void* FUNC_0 (struct archive_read*,size_t,int *) ;

__attribute__((used)) static const void *
FUNC_1(struct archive_read *VAR_0, size_t VAR_1, ssize_t *VAR_2)
{
 const void *VAR_3;

 while (VAR_1 > 0) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3 != ((void*)0))
   return (VAR_3);
  VAR_1--;
 }
 return (((void*)0));
}
