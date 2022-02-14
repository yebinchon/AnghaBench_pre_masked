
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mydata {int fd; int * buffer; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct archive*,struct mydata*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct archive *VAR_1, void *VAR_2, void *VAR_3)
{
  struct mydata *VAR_4 = (struct mydata *)VAR_2;
  struct mydata *VAR_5 = (struct mydata *)VAR_3;
  int VAR_6 = (VAR_0);

  (void)VAR_1;
  if (VAR_4 && VAR_4->fd >= 0)
  {
    FUNC_0(VAR_4->fd);
    FUNC_2(VAR_4->buffer);
    VAR_4->buffer = ((void*)0);
    VAR_4->fd = -1;
  }
  if (VAR_5)
  {
    VAR_6 = FUNC_1(VAR_1, VAR_5);
  }
  return (VAR_6);
}
