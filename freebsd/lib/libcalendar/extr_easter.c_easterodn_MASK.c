
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int m; int y; } ;
typedef TYPE_1__ date ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0)
{





 int VAR_1[] = {5, 25, 13, 2, 22, 10, 30, 18, 7, 27, 15, 4,
      24, 12, 1, 21, 9, 29, 17};


 int VAR_2[] = {6, 5, 4, 3, 2, 1, 7};
 date VAR_3;
 int VAR_4;


 VAR_3.d = VAR_1[VAR_0 % 19];

 if (VAR_3.d < 21)
  VAR_3.m = 4;
 else
  VAR_3.m = 3;

 VAR_3.y = VAR_0;


 VAR_4 = FUNC_0(&VAR_3);
 return (VAR_4 + VAR_2[FUNC_1(VAR_4)]);
}
