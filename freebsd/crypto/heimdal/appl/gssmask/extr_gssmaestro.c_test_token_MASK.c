
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct client*,scalar_t__,struct client*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct client*,scalar_t__,struct client*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct client*,scalar_t__,struct client*,scalar_t__,int,int) ;

__attribute__((used)) static int32_t
FUNC_3(struct client *VAR_1, int32_t VAR_2, struct client *VAR_3, int32_t VAR_4, int VAR_5)
{
    int32_t VAR_6;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2);


 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_6) return VAR_6;
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2, 0);
 if (VAR_6) return VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 1);
 if (VAR_6) return VAR_6;
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2, 1);
 if (VAR_6) return VAR_6;

 if (VAR_5) {

     VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, 1, 0);
     if (VAR_6) return VAR_6;
     VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2, 1, 0);
     if (VAR_6) return VAR_6;

     VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, 1, 1);
     if (VAR_6) return VAR_6;
     VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2, 1, 1);
     if (VAR_6) return VAR_6;

     VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, 0, 0);
     if (VAR_6) return VAR_6;
     VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2, 0, 0);
     if (VAR_6) return VAR_6;

     VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, 0, 1);
     if (VAR_6) return VAR_6;
     VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2, 0, 1);
     if (VAR_6) return VAR_6;
 }
    }
    return VAR_0;
}
