
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int find_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, int VAR_3, int VAR_4) {
 int *VAR_5;

 if (VAR_4 == VAR_0) VAR_5 = &VAR_1[VAR_2][VAR_3].fd;
 else VAR_5 = &VAR_1[VAR_2][VAR_3].find_fd;

 if (*VAR_5) {
  FUNC_0(*VAR_5);
  *VAR_5 = 0;
 }
}
