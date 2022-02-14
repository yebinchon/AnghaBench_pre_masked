
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,int,int) ;

__attribute__((used)) static int FUNC_1(unsigned long *VAR_0,
        int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = -1;
 while ((VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_3 + 1)) != -1) {
  if (VAR_3 >= VAR_1)
   break;

  VAR_2 = VAR_3;
 }

 return VAR_2;
}
