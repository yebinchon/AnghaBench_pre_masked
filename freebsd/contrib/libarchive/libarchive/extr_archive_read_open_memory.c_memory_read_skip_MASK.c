
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_memory_data {scalar_t__ end; scalar_t__ p; scalar_t__ read_size; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int64_t
FUNC_0(struct archive *VAR_0, void *VAR_1, int64_t VAR_2)
{
 struct read_memory_data *VAR_3 = (struct read_memory_data *)VAR_1;

 (void)VAR_0;
 if ((int64_t)VAR_2 > (int64_t)(VAR_3->end - VAR_3->p))
  VAR_2 = VAR_3->end - VAR_3->p;

 VAR_2 /= VAR_3->read_size;
 VAR_2 *= VAR_3->read_size;
 VAR_3->p += VAR_2;
 return (VAR_2);
}
