
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_region {int dummy; } ;
struct _citrus_memory_stream {int dummy; } ;


 int FUNC_0 (struct _citrus_memory_stream*,struct _citrus_region*) ;
 int FUNC_1 (struct _citrus_region*,void*,size_t) ;

__attribute__((used)) static __inline void
FUNC_2(struct _citrus_memory_stream * __restrict VAR_0,
    void *VAR_1, size_t VAR_2)
{
 struct _citrus_region VAR_3;

 FUNC_1(&VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_0, &VAR_3);
}
