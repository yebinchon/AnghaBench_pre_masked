
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int dummy; } ;
struct perf_evsel_str_handler {char* member_0; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct perf_session*) ;
 int FUNC_1 (struct perf_session*) ;
 int FUNC_2 (struct perf_session*,char*) ;
 struct perf_session* FUNC_3 (int ,int ,int ,int,int *) ;
 int FUNC_4 (struct perf_session*,int *) ;
 scalar_t__ FUNC_5 (struct perf_session*,struct perf_evsel_str_handler const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct perf_session*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_8 = -VAR_0;
 struct perf_session *VAR_9;
 const struct perf_evsel_str_handler VAR_10[] = {
  { "kmem:kmalloc", VAR_4, },
      { "kmem:kmem_cache_alloc", VAR_4, },
  { "kmem:kmalloc_node", VAR_5, },
      { "kmem:kmem_cache_alloc_node", VAR_5, },
  { "kmem:kfree", VAR_6, },
      { "kmem:kmem_cache_free", VAR_6, },
 };

 VAR_9 = FUNC_3(VAR_3, VAR_2, 0, 0, &VAR_7);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 if (FUNC_0(VAR_9) < 0)
  goto out_delete;

 if (!FUNC_2(VAR_9, "kmem record"))
  goto out_delete;

 if (FUNC_5(VAR_9, VAR_10)) {
  FUNC_6("Initializing perf session tracepoint handlers failed\n");
  return -1;
 }

 FUNC_8();
 VAR_8 = FUNC_4(VAR_9, &VAR_7);
 if (VAR_8 != 0)
  goto out_delete;
 FUNC_9();
 FUNC_7(VAR_9);
out_delete:
 FUNC_1(VAR_9);
 return VAR_8;
}
