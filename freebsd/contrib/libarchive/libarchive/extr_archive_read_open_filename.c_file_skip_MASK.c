
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_file_data {scalar_t__ use_lseek; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (struct archive*,void*,int ) ;

__attribute__((used)) static int64_t
FUNC_1(struct archive *VAR_0, void *VAR_1, int64_t VAR_2)
{
 struct read_file_data *VAR_3 = (struct read_file_data *)VAR_1;


 if (VAR_3->use_lseek)
  return (FUNC_0(VAR_0, VAR_1, VAR_2));


 return (0);
}
