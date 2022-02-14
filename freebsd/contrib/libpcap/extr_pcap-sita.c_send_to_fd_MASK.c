
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int find_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int*,int*,int *) ;
 TYPE_1__** VAR_2 ;
 int FUNC_3 (int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_3, int VAR_4, unsigned char *VAR_5) {
 int VAR_6;
 int VAR_7, VAR_8;

 while (VAR_4 > 0) {
  if ((VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_4)) <= 0) {
   FUNC_2(VAR_3, &VAR_7, &VAR_8, ((void*)0));
   if (VAR_2[VAR_7][VAR_8].fd == VAR_3) FUNC_0(VAR_7, VAR_8, VAR_1);
   else if (VAR_2[VAR_7][VAR_8].find_fd == VAR_3) FUNC_0(VAR_7, VAR_8, VAR_0);
   FUNC_1(VAR_7, VAR_8);
   return;
  }
  VAR_4 -= VAR_6;
  VAR_5 += VAR_6;
 }
}
