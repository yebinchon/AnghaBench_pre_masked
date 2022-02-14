
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(int (*VAR_2)(void), const char *VAR_3) {
 int VAR_4 = VAR_2();
 if (VAR_4 == 0) {
  VAR_1++;
 } else {
  VAR_0++;
  FUNC_0("FAILED: %s (at line %d)\n", VAR_3, VAR_4);
 }
}
