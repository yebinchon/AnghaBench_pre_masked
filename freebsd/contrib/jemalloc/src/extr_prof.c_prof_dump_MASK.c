
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
struct prof_tdata_merge_iter_arg_s {int cnt_all; } ;
struct prof_gctx_merge_iter_arg_s {int leak_ngctx; } ;
struct prof_gctx_dump_iter_arg_s {int dummy; } ;
typedef int prof_tdata_t ;
typedef int prof_gctx_tree_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,char const*,int,int *,struct prof_tdata_merge_iter_arg_s*,struct prof_gctx_merge_iter_arg_s*,struct prof_gctx_dump_iter_arg_s*,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *,struct prof_tdata_merge_iter_arg_s*,struct prof_gctx_merge_iter_arg_s*,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,char const*) ;
 int * FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool
FUNC_13(tsd_t *VAR_2, bool VAR_3, const char *VAR_4,
    bool VAR_5) {
 FUNC_1(VAR_0);
 FUNC_0(FUNC_11(VAR_2) == 0);

 prof_tdata_t * VAR_6 = FUNC_10(VAR_2, 1);
 if (VAR_6 == ((void*)0)) {
  return 1;
 }

 FUNC_5(VAR_2, ((void*)0));
 FUNC_2(FUNC_12(VAR_2), &VAR_1);

 prof_gctx_tree_t VAR_7;
 struct prof_tdata_merge_iter_arg_s VAR_8;
 struct prof_gctx_merge_iter_arg_s VAR_9;
 struct prof_gctx_dump_iter_arg_s VAR_10;
 FUNC_7(VAR_2, VAR_6, &VAR_8,
     &VAR_9, &VAR_7);
 bool VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     &VAR_8, &VAR_9,
     &VAR_10, &VAR_7);
 FUNC_8(VAR_2, &VAR_7);

 FUNC_3(FUNC_12(VAR_2), &VAR_1);
 FUNC_4(VAR_2);

 if (VAR_11) {
  return 1;
 }

 if (VAR_5) {
  FUNC_9(&VAR_8.cnt_all,
      VAR_9.leak_ngctx, VAR_4);
 }
 return 0;
}
