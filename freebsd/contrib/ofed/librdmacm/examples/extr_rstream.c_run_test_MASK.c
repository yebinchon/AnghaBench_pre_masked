
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_4();
 if (VAR_6)
  goto out;

 FUNC_0(&VAR_3, ((void*)0));
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_6 = VAR_0 ? FUNC_2(VAR_5) :
      FUNC_1(VAR_5);
   if (VAR_6)
    goto out;
  }

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_6 = VAR_0 ? FUNC_1(VAR_5) :
      FUNC_2(VAR_5);
   if (VAR_6)
    goto out;
  }
 }
 FUNC_0(&VAR_1, ((void*)0));
 FUNC_3();
 VAR_6 = 0;

out:
 return VAR_6;
}
