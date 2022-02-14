
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
struct nvme_io_test {size_t num_threads; int time; int size; scalar_t__ opc; scalar_t__* io_completed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t,int,...) ;

__attribute__((used)) static void
FUNC_1(struct nvme_io_test *VAR_1, bool VAR_2)
{
 uint64_t VAR_3 = 0, VAR_4, VAR_5;
 uint32_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->num_threads; VAR_6++)
  VAR_3 += VAR_1->io_completed[VAR_6];

 VAR_4 = VAR_3/VAR_1->time;
 VAR_5 = VAR_4 * VAR_1->size / (1024*1024);

 FUNC_0("Threads: %2d Size: %6d %5s Time: %3d IO/s: %7ju MB/s: %4ju\n",
     VAR_1->num_threads, VAR_1->size,
     VAR_1->opc == VAR_0 ? "READ" : "WRITE",
     VAR_1->time, (uintmax_t)VAR_4, (uintmax_t)VAR_5);

 if (VAR_2)
  for (VAR_6 = 0; VAR_6 < VAR_1->num_threads; VAR_6++)
   FUNC_0("\t%3d: %8ju IO/s\n", VAR_6,
       (uintmax_t)VAR_1->io_completed[VAR_6]/VAR_1->time);
}
