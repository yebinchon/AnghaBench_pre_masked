
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_server {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cuse_server** VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct cuse_server *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 do {
  for (VAR_8 = VAR_6 = 0; VAR_6 != VAR_0; VAR_6++) {
   if (VAR_2[VAR_6] != ((void*)0)) {
    if ((VAR_3[VAR_6] ^ VAR_5) & VAR_1)
     continue;
    if ((VAR_3[VAR_6] & ~VAR_1) == VAR_7) {
     VAR_7++;
     VAR_8 = 1;
    }
   }
  }
 } while (VAR_8);

 if (VAR_7 < 256) {
  for (VAR_6 = 0; VAR_6 != VAR_0; VAR_6++) {
   if (VAR_2[VAR_6] == ((void*)0)) {
    VAR_2[VAR_6] = VAR_4;
    VAR_3[VAR_6] = VAR_5 | VAR_7;
    return (VAR_7);
   }
  }
 }
 return (-1);
}
