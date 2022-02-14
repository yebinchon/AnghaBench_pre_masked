
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_header {scalar_t__ needs_swap; } ;


 int FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (int,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct perf_header *VAR_0,
        int VAR_1, void *VAR_2, size_t VAR_3)
{
 if (FUNC_1(VAR_1, VAR_2, VAR_3) <= 0)
  return -1;

 if (VAR_0->needs_swap)
  FUNC_0(VAR_2, VAR_3);

 return 0;
}
