
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_entry {int refcount; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 struct tracepoint_entry* FUNC_2 (char const*) ;
 int FUNC_3 (struct tracepoint_entry*) ;
 void* FUNC_4 (struct tracepoint_entry*,void*) ;

__attribute__((used)) static void *FUNC_5(const char *VAR_1, void *VAR_2)
{
 struct tracepoint_entry *VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 VAR_4 = FUNC_4(VAR_3, VAR_2);
 if (FUNC_1(VAR_4))
  return VAR_4;
 if (!VAR_3->refcount)
  FUNC_3(VAR_3);
 return VAR_4;
}
