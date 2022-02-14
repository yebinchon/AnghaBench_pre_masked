
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_fd_data {int block_size; scalar_t__ use_lseek; int fd; } ;
struct archive {int dummy; } ;
typedef int skip ;
typedef int request ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,scalar_t__,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int64_t
FUNC_2(struct archive *VAR_3, void *VAR_4, int64_t VAR_5)
{
 struct read_fd_data *VAR_6 = (struct read_fd_data *)VAR_4;
 int64_t VAR_7 = VAR_5;
 int64_t VAR_8, VAR_9;
 int VAR_10 = sizeof(VAR_7) * 8 - 1;

 if (!VAR_6->use_lseek)
  return (0);


 if (sizeof(VAR_5) > sizeof(VAR_7)) {
  int64_t VAR_11 =
      (((int64_t)1 << (VAR_10 - 1)) - 1) * 2 + 1;
  if (VAR_5 > VAR_11)
   VAR_7 = VAR_11;
 }


 VAR_5 = (VAR_5 / VAR_6->block_size) * VAR_6->block_size;
 if (VAR_5 == 0)
  return (0);

 if (((VAR_8 = FUNC_1(VAR_6->fd, 0, VAR_1)) >= 0) &&
     ((VAR_9 = FUNC_1(VAR_6->fd, VAR_7, VAR_1)) >= 0))
  return (VAR_9 - VAR_8);


 VAR_6->use_lseek = 0;


 if (VAR_2 == VAR_0)
  return (0);






 FUNC_0(VAR_3, VAR_2, "Error seeking");
 return (-1);
}
