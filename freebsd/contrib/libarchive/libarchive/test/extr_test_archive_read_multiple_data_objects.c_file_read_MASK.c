
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mydata {void* buffer; int fd; } ;
struct archive {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive *VAR_1, void *VAR_2, const void **VAR_3)
{
  struct mydata *VAR_4 = (struct mydata *)VAR_2;
  (void)VAR_1;
  *VAR_3 = VAR_4->buffer;
  return FUNC_0(VAR_4->fd, VAR_4->buffer, VAR_0);
}
