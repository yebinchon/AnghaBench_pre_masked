
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct meminfo {size_t mi_size; int mi_stack; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void *
FUNC_6(size_t VAR_10, int VAR_11)
{
 void *VAR_12;




 FUNC_2(&VAR_6);
 if (VAR_4 > 0 && !VAR_9 &&
     VAR_7 + VAR_10 > VAR_5) {
  FUNC_0(1, "No cache, waking up the switcher.");
  VAR_9 = 1;
  FUNC_5(&VAR_8);
 }
 if ((VAR_11 & VAR_1) && VAR_4 > 0 &&
     VAR_7 + VAR_10 > VAR_4) {
  FUNC_3(&VAR_6);
  VAR_3++;
  return (((void*)0));
 }
 VAR_7 += VAR_10;
 FUNC_3(&VAR_6);
 VAR_11 &= ~VAR_1;

 VAR_12 = FUNC_1(VAR_10, VAR_0, VAR_11 | VAR_2);






 return (VAR_12);
}
