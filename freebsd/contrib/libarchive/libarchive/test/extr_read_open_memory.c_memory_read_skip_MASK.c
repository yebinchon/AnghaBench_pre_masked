
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_memory_data {int end; int p; } ;
struct archive {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int int64_t ;



__attribute__((used)) static int64_t
FUNC_0(struct archive *VAR_0, void *VAR_1, int64_t VAR_2)
{
 struct read_memory_data *VAR_3 = (struct read_memory_data *)VAR_1;

 (void)VAR_0;

 if ((off_t)VAR_2 > (off_t)(VAR_3->end - VAR_3->p))
  VAR_2 = VAR_3->end - VAR_3->p;

 if (VAR_2 > 71)
  VAR_2 = 71;
 VAR_3->p += VAR_2;
 return (VAR_2);
}
