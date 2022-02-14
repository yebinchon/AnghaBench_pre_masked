
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_info {int * ac97; int res; int ac97_powerdown; int ac97_general_purpose; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct csa_info *VAR_5)
{
 int VAR_6, VAR_7;
 FUNC_0(&VAR_5->res, VAR_0,
     VAR_5->ac97_general_purpose);




 FUNC_0(&VAR_5->res, VAR_1, VAR_5->ac97_powerdown);




 for (VAR_6 = 0x2, VAR_7=0;
     (VAR_6 <= VAR_3) &&
     (VAR_7 < VAR_4);
     VAR_6 += 2, VAR_7++)
  FUNC_0(&VAR_5->res, VAR_2 + VAR_6, VAR_5->ac97[VAR_7]);
}
