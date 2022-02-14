
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long const*,int) ;
 int FUNC_2 (unsigned long const*,int,int) ;
 int FUNC_3 (int,unsigned long const*) ;

__attribute__((used)) static int FUNC_4(const unsigned long *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_1 < 0 || VAR_1 >= VAR_2 || !FUNC_3(VAR_1, VAR_0))
  return -1;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_4 = 0;
 while (VAR_3 < VAR_1) {
  VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_3 + 1);
       VAR_4++;
 }
 FUNC_0(VAR_3 != VAR_1);

 return VAR_4;
}
