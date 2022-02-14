
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char const* const,char const*) ;
 int VAR_8 ;
 struct alias* FUNC_2 (char const*,int) ;
 int FUNC_3 () ;
 char const* const* VAR_9 ;
 int FUNC_4 (int ,int ,struct alias*) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 char const* VAR_13 ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_14;
 struct alias *VAR_15;




 top:
 VAR_14 = FUNC_6();




 if (VAR_7 & VAR_2) {
  while (VAR_14 == VAR_4) {
   FUNC_3();
   VAR_14 = FUNC_6();
  }
 }




 if (VAR_14 == VAR_6 && !VAR_10)
 {
  const char * const *VAR_16;

  if (VAR_7 & VAR_1)
   for (VAR_16 = VAR_9; *VAR_16; VAR_16++) {
    if (**VAR_16 == *VAR_13 && FUNC_1(*VAR_16, VAR_13))
    {
     VAR_8 = VAR_14 = VAR_16 - VAR_9 + VAR_3;
     FUNC_0(("keyword %s recognized\n", VAR_11[VAR_14]));
     goto out;
    }
   }
  if (VAR_7 & VAR_0 &&
      (VAR_15 = FUNC_2(VAR_13, 1)) != ((void*)0)) {
   FUNC_4(VAR_15->val, FUNC_5(VAR_15->val), VAR_15);
   goto top;
  }
 }
out:
 if (VAR_14 != VAR_5)
  VAR_7 = 0;







 return (VAR_14);
}
