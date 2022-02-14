
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nvp_type; } ;
typedef TYPE_1__ nvpair_t ;
typedef int fd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int*,int,int) ;

int
FUNC_5(nvpair_t *VAR_2, const int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2->nvp_type == VAR_1);
 VAR_4 = FUNC_3(VAR_3, VAR_0, 0);
 if (VAR_4 == -1) {
  return (-1);
 }
 if (FUNC_4(VAR_2, &VAR_4, sizeof(VAR_4), sizeof(VAR_4)) == -1) {
  FUNC_2(VAR_4);
  return (-1);
 }
 return (0);
}
