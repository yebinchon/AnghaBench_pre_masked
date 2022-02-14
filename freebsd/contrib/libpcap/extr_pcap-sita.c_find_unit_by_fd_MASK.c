
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int find_fd; } ;
typedef TYPE_1__ unit_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3, int *VAR_4, int *VAR_5, unit_t **VAR_6) {
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
   if (VAR_2[VAR_7][VAR_8].fd == VAR_3 || VAR_2[VAR_7][VAR_8].find_fd == VAR_3) {
    if (VAR_4) *VAR_4 = VAR_7;
    if (VAR_5) *VAR_5 = VAR_8;
    if (VAR_6) *VAR_6 = &VAR_2[VAR_7][VAR_8];
    return 1;
   }
  }
 }
 return 0;
}
