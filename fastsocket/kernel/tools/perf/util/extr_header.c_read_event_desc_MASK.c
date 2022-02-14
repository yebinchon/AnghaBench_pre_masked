
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef size_t u32 ;
typedef int sz ;
struct perf_header {scalar_t__ needs_swap; } ;
struct perf_evsel {size_t idx; int needs_swap; size_t ids; size_t* id; int name; int attr; } ;
typedef scalar_t__ ssize_t ;
typedef int nre ;
typedef int nr ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 void* FUNC_2 (size_t,int) ;
 int FUNC_3 (int,struct perf_header*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct perf_evsel*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (int *,void*,size_t) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int,size_t*,int) ;

__attribute__((used)) static struct perf_evsel *
FUNC_10(struct perf_header *VAR_0, int VAR_1)
{
 struct perf_evsel *VAR_2, *VAR_3 = ((void*)0);
 u64 *VAR_4;
 void *VAR_5 = ((void*)0);
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 ssize_t VAR_11;
 size_t VAR_12;


 VAR_11 = FUNC_9(VAR_1, &VAR_6, sizeof(VAR_6));
 if (VAR_11 != (ssize_t)sizeof(VAR_6))
  goto error;

 if (VAR_0->needs_swap)
  VAR_6 = FUNC_0(VAR_6);

 VAR_11 = FUNC_9(VAR_1, &VAR_7, sizeof(VAR_7));
 if (VAR_11 != (ssize_t)sizeof(VAR_7))
  goto error;

 if (VAR_0->needs_swap)
  VAR_7 = FUNC_0(VAR_7);


 VAR_5 = FUNC_6(VAR_7);
 if (!VAR_5)
  goto error;


 VAR_3 = FUNC_2(VAR_6 + 1, sizeof(*VAR_3));
 if (!VAR_3)
  goto error;

 VAR_12 = sizeof(VAR_2->attr);
 if (VAR_7 < VAR_12)
  VAR_12 = VAR_7;

 for (VAR_9 = 0, VAR_2 = VAR_3; VAR_9 < VAR_6; VAR_2++, VAR_9++) {
  VAR_2->idx = VAR_9;





  VAR_11 = FUNC_9(VAR_1, VAR_5, VAR_7);
  if (VAR_11 != (ssize_t)VAR_7)
   goto error;

  if (VAR_0->needs_swap)
   FUNC_8(VAR_5);

  FUNC_7(&VAR_2->attr, VAR_5, VAR_12);

  VAR_11 = FUNC_9(VAR_1, &VAR_8, sizeof(VAR_8));
  if (VAR_11 != (ssize_t)sizeof(VAR_8))
   goto error;

  if (VAR_0->needs_swap) {
   VAR_8 = FUNC_0(VAR_8);
   VAR_2->needs_swap = 1;
  }

  VAR_2->name = FUNC_3(VAR_1, VAR_0);

  if (!VAR_8)
   continue;

  VAR_4 = FUNC_2(VAR_8, sizeof(*VAR_4));
  if (!VAR_4)
   goto error;
  VAR_2->ids = VAR_8;
  VAR_2->id = VAR_4;

  for (VAR_10 = 0 ; VAR_10 < VAR_8; VAR_10++) {
   VAR_11 = FUNC_9(VAR_1, VAR_4, sizeof(*VAR_4));
   if (VAR_11 != (ssize_t)sizeof(*VAR_4))
    goto error;
   if (VAR_0->needs_swap)
    *VAR_4 = FUNC_1(*VAR_4);
   VAR_4++;
  }
 }
out:
 if (VAR_5)
  FUNC_4(VAR_5);
 return VAR_3;
error:
 if (VAR_3)
  FUNC_5(VAR_3);
 VAR_3 = ((void*)0);
 goto out;
}
