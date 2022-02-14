
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned char* VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5, unsigned char VAR_6)
{

 unsigned long VAR_7;





 FUNC_1(&VAR_0, VAR_7);

 while (VAR_2 && FUNC_0(VAR_4[VAR_1]))
 {
  VAR_2--;
  VAR_1++;
 }

 FUNC_2(&VAR_0, VAR_7);





 if (!VAR_2)
  if (FUNC_0(VAR_6))
   return 1;





 if (VAR_2 >= 256)
  return 0;

 FUNC_1(&VAR_0, VAR_7);

 VAR_4[VAR_3] = VAR_6;
 VAR_2++;
 VAR_3++;

 FUNC_2(&VAR_0, VAR_7);

 return 1;
}
