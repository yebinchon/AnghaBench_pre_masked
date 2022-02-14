
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
struct prof_tdata_merge_iter_arg_s {int cnt_all; void* tsdn; } ;
struct prof_gctx_merge_iter_arg_s {scalar_t__ leak_ngctx; void* tsdn; } ;
typedef int prof_tdata_t ;
typedef int prof_gctx_tree_t ;
typedef int prof_gctx_t ;
typedef int prof_cnt_t ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t*,int *,void**) ;
 int FUNC_1 (int *,int *,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (void*,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_1 ;
 int FUNC_8 (int *,int *) ;
 int VAR_2 ;
 int FUNC_9 (int *,int *,int ,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(tsd_t *VAR_5, prof_tdata_t *VAR_6,
    struct prof_tdata_merge_iter_arg_s *VAR_7,
    struct prof_gctx_merge_iter_arg_s *VAR_8,
    prof_gctx_tree_t *VAR_9) {
 size_t VAR_10;
 union {
  prof_gctx_t *p;
  void *v;
 } VAR_11;

 FUNC_7(VAR_5, VAR_6);





 FUNC_2(VAR_9);
 for (VAR_10 = 0; !FUNC_0(&VAR_0, &VAR_10, ((void*)0), &VAR_11.v);) {
  FUNC_6(FUNC_10(VAR_5), VAR_11.p, VAR_9);
 }





 VAR_7->tsdn = FUNC_10(VAR_5);
 FUNC_5(&VAR_7->cnt_all, 0, sizeof(prof_cnt_t));
 FUNC_3(FUNC_10(VAR_5), &VAR_4);
 FUNC_9(&VAR_3, ((void*)0), VAR_2,
     (void *)VAR_7);
 FUNC_4(FUNC_10(VAR_5), &VAR_4);


 VAR_8->tsdn = FUNC_10(VAR_5);
 VAR_8->leak_ngctx = 0;
 FUNC_1(VAR_9, ((void*)0), VAR_1,
     (void *)VAR_8);

 FUNC_8(VAR_5, VAR_6);
}
