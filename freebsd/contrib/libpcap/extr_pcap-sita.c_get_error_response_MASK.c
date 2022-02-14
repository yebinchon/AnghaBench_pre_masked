
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ) ;

__attribute__((used)) static char *FUNC_1(int VAR_1, char *VAR_2) {
 char VAR_3;
 int VAR_4 = 0;

 while (1) {
  FUNC_0(VAR_1, &VAR_3, 1, 0);
  if (VAR_2 && (VAR_4++ < VAR_0)) {
   *VAR_2++ = VAR_3;
   *VAR_2 = '\0';
  }
  if (VAR_3 == '\0') {
   if (VAR_4 > 1) { return VAR_2; }
   else { return ((void*)0); }
  }
 }
}
