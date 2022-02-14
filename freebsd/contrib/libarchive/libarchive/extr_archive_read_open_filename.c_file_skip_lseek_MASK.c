
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int m; } ;
struct read_file_data {scalar_t__ filename_type; TYPE_1__ filename; scalar_t__ use_lseek; int fd; } ;
struct archive {int dummy; } ;
typedef int off_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,scalar_t__,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int64_t
FUNC_2(struct archive *VAR_5, void *VAR_6, int64_t VAR_7)
{
 struct read_file_data *VAR_8 = (struct read_file_data *)VAR_6;




 off_t VAR_9, VAR_10;
 if ((VAR_9 = FUNC_1(VAR_8->fd, 0, VAR_3)) >= 0 &&
     (VAR_10 = FUNC_1(VAR_8->fd, VAR_7, VAR_3)) >= 0)
  return (VAR_10 - VAR_9);


 VAR_8->use_lseek = 0;


 if (VAR_4 == VAR_0)
  return (0);


 if (VAR_8->filename_type == VAR_2)
  FUNC_0(VAR_5, VAR_4, "Error seeking in stdin");
 else if (VAR_8->filename_type == VAR_1)
  FUNC_0(VAR_5, VAR_4, "Error seeking in '%s'",
      VAR_8->filename.m);
 else
  FUNC_0(VAR_5, VAR_4, "Error seeking in '%S'",
      VAR_8->filename.w);
 return (-1);
}
