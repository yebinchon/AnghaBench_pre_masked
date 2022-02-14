
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mydata {int filename; int fd; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int64_t
FUNC_2(struct archive *VAR_2, void *VAR_3, int64_t VAR_4)
{
  struct mydata *VAR_5 = (struct mydata *)VAR_3;
  int64_t VAR_6 = FUNC_1(VAR_5->fd, VAR_0, VAR_4);
  if (VAR_6 >= 0)
    return VAR_6;
  FUNC_0(VAR_2, VAR_1, "Error seeking in '%s'", VAR_5->filename);
  return -1;
}
