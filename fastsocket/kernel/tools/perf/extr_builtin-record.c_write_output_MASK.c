
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_record {int bytes_written; int output; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct perf_record *VAR_0, void *VAR_1, size_t VAR_2)
{
 while (VAR_2) {
  int VAR_3 = FUNC_1(VAR_0->output, VAR_1, VAR_2);

  if (VAR_3 < 0) {
   FUNC_0("failed to write\n");
   return -1;
  }

  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;

  VAR_0->bytes_written += VAR_3;
 }

 return 0;
}
