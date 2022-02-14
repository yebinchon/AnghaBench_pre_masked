
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,...) ;
 struct pid* FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int*) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char) ;

__attribute__((used)) static struct pid *
FUNC_8(int *VAR_9, const char **VAR_10)
{
 struct pid *VAR_11;
 int VAR_12 = FUNC_6(*VAR_10, 'e') ? VAR_5 : 0;
 int VAR_13;

 if (FUNC_6(*VAR_10, '+')) {



  int VAR_14 = VAR_12 ? (VAR_7 | 0) : VAR_7;
  *VAR_10 = "r+";
  if (FUNC_5(VAR_0, VAR_14, 0, VAR_9) < 0)
   return ((void*)0);

  FUNC_1(VAR_9[0], VAR_3, VAR_1);
  FUNC_1(VAR_9[1], VAR_3, VAR_1);

 } else {
  *VAR_10 = FUNC_7(*VAR_10, 'r') ? "r" : "w";




  if (FUNC_3(VAR_9) == -1)
   return ((void*)0);
  FUNC_1(VAR_9[0], VAR_4, FUNC_1(VAR_9[0], VAR_2) | VAR_12);
  FUNC_1(VAR_9[1], VAR_4, FUNC_1(VAR_9[1], VAR_2) | VAR_12);

 }

 if ((VAR_11 = FUNC_2(sizeof(*VAR_11))) != ((void*)0))
  return VAR_11;
 VAR_13 = VAR_8;
 (void)FUNC_0(VAR_9[0]);
 (void)FUNC_0(VAR_9[1]);
 VAR_8 = VAR_13;
 return ((void*)0);
}
