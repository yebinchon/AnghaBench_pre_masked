
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_header {int dummy; } ;
struct perf_file_section {void* offset; void* size; } ;
struct perf_evlist {int dummy; } ;
struct TYPE_2__ {int (* write ) (int,struct perf_header*,struct perf_evlist*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* FUNC_0 (int,void*,int ) ;
 scalar_t__ FUNC_1 (struct perf_header*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,struct perf_header*,struct perf_evlist*) ;

__attribute__((used)) static int FUNC_4(int VAR_3, struct perf_header *VAR_4, int VAR_5,
    struct perf_file_section **VAR_6,
    struct perf_evlist *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 if (FUNC_1(VAR_4, VAR_5)) {
  if (!VAR_2[VAR_5].write)
   return -1;

  (*VAR_6)->offset = FUNC_0(VAR_3, 0, VAR_0);

  VAR_8 = VAR_2[VAR_5].write(VAR_3, VAR_4, VAR_7);
  if (VAR_8 < 0) {
   FUNC_2("failed to write feature %d\n", VAR_5);


   FUNC_0(VAR_3, (*VAR_6)->offset, VAR_1);

   return -1;
  }
  (*VAR_6)->size = FUNC_0(VAR_3, 0, VAR_0) - (*VAR_6)->offset;
  (*VAR_6)++;
 }
 return VAR_9;
}
