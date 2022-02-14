
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name2 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int*,size_t) ;
 int FUNC_4 (int*,size_t,int*,size_t*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(int *VAR_3, int VAR_4)
{
 int VAR_5[22], VAR_6[22];
 int VAR_7, VAR_8;
 size_t VAR_9, VAR_10;

 VAR_5[0] = 0;
 VAR_5[1] = 2;
 VAR_9 = 2;
 if (VAR_4) {
  FUNC_1(VAR_5+2, VAR_3, VAR_4 * sizeof(int));
  VAR_9 += VAR_4;
 } else {
  VAR_5[2] = 1;
  VAR_9++;
 }
 for (;;) {
  VAR_10 = sizeof(VAR_6);
  VAR_8 = FUNC_4(VAR_5, VAR_9, VAR_6, &VAR_10, 0, 0);
  if (VAR_8 < 0) {
   if (VAR_2 == VAR_0)
    return (0);
   else
    FUNC_0(1, "sysctl(getnext) %d %zu", VAR_8, VAR_10);
  }

  VAR_10 /= sizeof(int);

  if (VAR_4 < 0 || VAR_10 < (unsigned int)VAR_4)
   return (0);

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   if (VAR_6[VAR_7] != VAR_3[VAR_7])
    return (0);

  VAR_7 = FUNC_3(VAR_6, VAR_10);
  if (!VAR_7 && !VAR_1)
   FUNC_2('\n');

  FUNC_1(VAR_5+2, VAR_6, VAR_10 * sizeof(int));
  VAR_9 = 2 + VAR_10;
 }
}
