
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mydata {int fd; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int64_t
FUNC_1(struct archive *VAR_1, void *VAR_2, int64_t VAR_3, int VAR_4)
{
  struct mydata *VAR_5 = (struct mydata *)VAR_2;
  int64_t VAR_6;

  (void)VAR_1;
  VAR_6 = FUNC_0(VAR_5->fd, VAR_3, VAR_4);
  if (VAR_6 >= 0)
    return VAR_6;
  return (VAR_0);
}
