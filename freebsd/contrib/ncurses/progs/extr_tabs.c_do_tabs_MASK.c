
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(int *VAR_3)
{
    int VAR_4 = 1;
    int VAR_5;

    FUNC_0('\r');
    while ((VAR_5 = *VAR_3++) > 0) {
 if (VAR_4 < VAR_5) {
     while (VAR_4++ < VAR_5) {
  if (VAR_4 > VAR_0)
      break;
  FUNC_0(' ');
     }
 }
 if (VAR_5 <= VAR_0) {
     FUNC_2(FUNC_1(VAR_2, VAR_5), 1, VAR_1);
     VAR_4 = VAR_5;
 } else {
     break;
 }
    }
    FUNC_0('\n');
}
