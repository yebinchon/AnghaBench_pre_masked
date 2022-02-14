
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_FILE_data {scalar_t__ can_skip; int f; } ;
struct archive {int dummy; } ;
typedef int skip ;
typedef int request ;
typedef int off_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,long,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,long,int ) ;
 scalar_t__ FUNC_3 (int ,long,int ) ;
 scalar_t__ FUNC_4 (int ,long,int ) ;

__attribute__((used)) static int64_t
FUNC_5(struct archive *VAR_1, void *VAR_2, int64_t VAR_3)
{
 struct read_FILE_data *VAR_4 = (struct read_FILE_data *)VAR_2;





 long VAR_5 = (long)VAR_3;

 int VAR_6 = sizeof(VAR_5) * 8 - 1;

 (void)VAR_1;





 if (!VAR_4->can_skip)
  return (0);
 if (VAR_3 == 0)
  return (0);


 if (sizeof(VAR_3) > sizeof(VAR_5)) {
  int64_t VAR_7 =
      (((int64_t)1 << (VAR_6 - 1)) - 1) * 2 + 1;
  if (VAR_3 > VAR_7)
   VAR_5 = VAR_7;
 }
 if (FUNC_2(VAR_4->f, VAR_5, VAR_0) != 0)

 {
  VAR_4->can_skip = 0;
  return (0);
 }
 return (VAR_3);
}
