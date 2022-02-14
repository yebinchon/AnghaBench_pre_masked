
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wind_profile_flags ;
typedef int uint32_t ;
typedef int out ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,size_t,int *,size_t*) ;
 int FUNC_1 (int const*,size_t,int *,size_t*,int) ;
 int FUNC_2 (int *,size_t,int *,size_t*) ;
 int FUNC_3 (int *,size_t,int) ;
 int FUNC_4 (int *,size_t,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (int *,int *,int) ;

int
FUNC_8(const uint32_t *VAR_5, size_t VAR_6,
  uint32_t *VAR_7, size_t *VAR_8,
  wind_profile_flags VAR_9)
{
    size_t VAR_10 = VAR_6 * 3;
    uint32_t *VAR_11;
    int VAR_12;
    size_t VAR_13;

    if (VAR_6 == 0) {
 *VAR_8 = 0;
 return 0;
    }

    VAR_11 = FUNC_6(VAR_10 * sizeof(uint32_t));
    if (VAR_11 == ((void*)0))
 return VAR_0;

    VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_11, &VAR_10, VAR_9);
    if (VAR_12) {
 FUNC_5(VAR_11);
 return VAR_12;
    }

    VAR_13 = *VAR_8;
    VAR_12 = FUNC_2(VAR_11, VAR_10, VAR_11, &VAR_13);
    if (VAR_12) {
 FUNC_5(VAR_11);
 return VAR_12;
    }
    VAR_12 = FUNC_3(VAR_11, VAR_13, VAR_9);
    if (VAR_12) {
 FUNC_5(VAR_11);
 return VAR_12;
    }
    VAR_12 = FUNC_4(VAR_11, VAR_13, VAR_9);
    if (VAR_12) {
 FUNC_5(VAR_11);
 return VAR_12;
    }


    if (VAR_9 & VAR_2) {
 VAR_12 = FUNC_0(VAR_11, VAR_13, VAR_7, VAR_8);





    } else {
 FUNC_7(VAR_7, VAR_11, sizeof(VAR_7[0]) * VAR_13);
 *VAR_8 = VAR_13;
    }
    FUNC_5(VAR_11);

    return VAR_12;
}
