
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_time; } ;
typedef TYPE_1__ unit_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int *,int *,TYPE_1__**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,unsigned char*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
 unsigned char VAR_5[8];
 unit_t *VAR_6;


 FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_6);
 if (VAR_6->first_time == 0) {
  VAR_5[0] = 'M';
  *(uint32_t *)&VAR_5[1] = FUNC_1(VAR_1);
  VAR_5[5] = VAR_2;
  VAR_5[6] = VAR_3;
  VAR_5[7] = VAR_4;

  FUNC_2(VAR_0, 8, VAR_5);
  VAR_6->first_time = 1;
 }

}
