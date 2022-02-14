
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_fd_data {void* buffer; int fd; int block_size; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct archive*,scalar_t__,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,void*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive *VAR_2, void *VAR_3, const void **VAR_4)
{
 struct read_fd_data *VAR_5 = (struct read_fd_data *)VAR_3;
 ssize_t VAR_6;

 *VAR_4 = VAR_5->buffer;
 for (;;) {
  VAR_6 = FUNC_1(VAR_5->fd, VAR_5->buffer, VAR_5->block_size);
  if (VAR_6 < 0) {
   if (VAR_1 == VAR_0)
    continue;
   FUNC_0(VAR_2, VAR_1, "Error reading fd %d",
       VAR_5->fd);
  }
  return (VAR_6);
 }
}
