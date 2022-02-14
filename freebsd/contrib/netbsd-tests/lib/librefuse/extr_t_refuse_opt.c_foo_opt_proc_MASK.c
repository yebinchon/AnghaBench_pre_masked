
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_args {int dummy; } ;
struct foofs_config {int * nonopt; } ;


 int VAR_0 ;
 int * FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, const char *VAR_2, int VAR_3, struct fuse_args *VAR_4) {
 struct foofs_config *VAR_5 = VAR_1;

 if (VAR_3 == VAR_0 && VAR_5->nonopt == ((void*)0)) {
  VAR_5->nonopt = FUNC_0(VAR_2);
  return 0;
 }
 else {
  return 1;
 }
}
