
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const**,int ,int*,int*) ;

int
FUNC_2(const char **VAR_1, int VAR_2, int *VAR_3, int *VAR_4, int *VAR_5)
{
    int VAR_6 = FUNC_0(VAR_1);
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;

    *VAR_4 = 0;
    if (VAR_6 != 0) {
 FUNC_1(VAR_1, VAR_0, &VAR_7, &VAR_8);
 VAR_10 = (VAR_8 + (VAR_6 * 2));
 VAR_9 = VAR_2 - VAR_10;

 if ((*VAR_3 = VAR_9 / (VAR_6 + 3)) <= 0) {
     if ((*VAR_3 = VAR_9 / (VAR_6 + 1)) <= 0)
  *VAR_3 = 1;
     *VAR_4 = *VAR_3;
 } else {
     *VAR_4 = *VAR_3 * 2;
 }
 *VAR_5 = *VAR_3 + (VAR_10 + VAR_6 - 1) / VAR_6;
 VAR_11 = (*VAR_3 > 0) && (VAR_9 >= 0);
    } else {
 VAR_11 = 0;
    }
    return VAR_11;
}
