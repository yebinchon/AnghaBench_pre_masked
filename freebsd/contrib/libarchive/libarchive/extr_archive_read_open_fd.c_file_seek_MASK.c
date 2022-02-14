
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_fd_data {int fd; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct archive*,scalar_t__,char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static int64_t
FUNC_2(struct archive *VAR_4, void *VAR_5, int64_t VAR_6, int VAR_7)
{
 struct read_fd_data *VAR_8 = (struct read_fd_data *)VAR_5;
 int64_t VAR_9;



 VAR_9 = FUNC_1(VAR_8->fd, VAR_6, VAR_7);
 if (VAR_9 >= 0)
  return VAR_9;

 if (VAR_3 == VAR_2) {
  FUNC_0(VAR_4, VAR_3,
      "A file descriptor(%d) is not seekable(PIPE)", VAR_8->fd);
  return (VAR_0);
 } else {

  FUNC_0(VAR_4, VAR_3,
      "Error seeking in a file descriptor(%d)", VAR_8->fd);
  return (VAR_1);
 }
}
