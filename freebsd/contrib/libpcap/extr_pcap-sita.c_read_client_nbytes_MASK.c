
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unit_t ;


 int FUNC_0 (int,int*,int*,int **) ;
 int FUNC_1 (int,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, unsigned char *VAR_2) {
 unit_t *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_0, &VAR_4, &VAR_5, &VAR_3);
 while (VAR_1) {
  if ((VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_1, 0)) <= 0) return -1;
  VAR_1 -= VAR_6;
  VAR_2 += VAR_6;
 }
 return 0;
}
