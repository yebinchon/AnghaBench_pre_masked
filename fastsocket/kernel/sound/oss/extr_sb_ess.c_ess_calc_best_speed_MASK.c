
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int*,int*) ;

__attribute__((used)) static int FUNC_1
 (int VAR_0, int VAR_1, int VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6 = *VAR_5, VAR_7 = *VAR_5;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = FUNC_0 (VAR_0, VAR_1, &VAR_6, &VAR_10);
 VAR_9 = FUNC_0 (VAR_2, VAR_3, &VAR_7, &VAR_11);

 if (VAR_10 < VAR_11) {
  *VAR_4 = VAR_8;
  *VAR_5 = VAR_6;
  VAR_12 = 1;
 } else {

  *VAR_4 = 0x80 | VAR_9;
  *VAR_5 = VAR_7;
  VAR_12 = 2;
 }

 return VAR_12;
}
