
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csa_info {int* ac97; int ac97_powerdown; int ac97_general_purpose; int res; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,scalar_t__,int*) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct csa_info *VAR_12)
{
 int VAR_13, VAR_14;
 uint32_t VAR_15;

 for (VAR_13 = 0x2, VAR_14=0;
     (VAR_13 <= VAR_7) &&
     (VAR_14 < VAR_8);
     VAR_13 += 2, VAR_14++)
  FUNC_0(&VAR_12->res, VAR_6 + VAR_13, &VAR_12->ac97[VAR_14]);


 FUNC_1(&VAR_12->res, VAR_2, 0x8000);
 FUNC_1(&VAR_12->res, VAR_1, 0x8000);
 FUNC_1(&VAR_12->res, VAR_3, 0x8000);
 FUNC_1(&VAR_12->res, VAR_4, 0x8000);

 FUNC_0(&VAR_12->res, VAR_5, &VAR_12->ac97_powerdown);
 FUNC_0(&VAR_12->res, VAR_0,
     &VAR_12->ac97_general_purpose);
 FUNC_0(&VAR_12->res, VAR_5, &VAR_15);
 FUNC_1(&VAR_12->res, VAR_5,
     VAR_15 | VAR_11);

 FUNC_0(&VAR_12->res, VAR_5, &VAR_15);
 FUNC_1(&VAR_12->res, VAR_5,
     VAR_15 | VAR_9);

 FUNC_0(&VAR_12->res, VAR_5, &VAR_15);
 FUNC_1(&VAR_12->res, VAR_5,
     VAR_15 | VAR_10);
}
