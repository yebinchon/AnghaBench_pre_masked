
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(bool VAR_1, const char *VAR_2) {
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, 0644);
 if (VAR_3 == -1 && !VAR_1) {
  FUNC_2("<jemalloc>: creat(\"%s\"), 0644) failed\n",
      VAR_2);
  if (VAR_0) {
   FUNC_0();
  }
 }

 return VAR_3;
}
