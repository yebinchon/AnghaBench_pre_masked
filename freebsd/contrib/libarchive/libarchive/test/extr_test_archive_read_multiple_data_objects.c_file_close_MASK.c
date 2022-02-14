
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mydata {struct mydata* filename; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,struct mydata*,int *) ;
 int FUNC_1 (struct mydata*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_2, void *VAR_3)
{
  struct mydata *VAR_4 = (struct mydata *)VAR_3;
  if (VAR_4 == ((void*)0))
    return (VAR_0);
  FUNC_0(VAR_2, VAR_4, ((void*)0));
  FUNC_1(VAR_4->filename);
  FUNC_1(VAR_4);
  return (VAR_1);
}
