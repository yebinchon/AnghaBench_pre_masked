
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_FILE_data {int f; } ;
struct archive {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct archive*,scalar_t__,char*) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (void const*,int,size_t,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive *VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct write_FILE_data *VAR_6;
 size_t VAR_7;

 VAR_6 = VAR_3;
 for (;;) {
  VAR_7 = FUNC_1(VAR_4, 1, VAR_5, VAR_6->f);
  if (VAR_7 <= 0) {
   if (VAR_1 == VAR_0)
    continue;
   FUNC_0(VAR_2, VAR_1, "Write error");
   return (-1);
  }
  return (VAR_7);
 }
}
