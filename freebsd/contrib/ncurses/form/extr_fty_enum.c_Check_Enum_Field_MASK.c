
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** kwds; int checkcase; int checkunique; } ;
typedef TYPE_1__ enumARG ;
typedef int FIELD ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static bool
FUNC_3(FIELD *VAR_4, const void *VAR_5)
{
  char **VAR_6 = ((const enumARG *)VAR_5)->kwds;
  bool VAR_7 = ((const enumARG *)VAR_5)->checkcase;
  bool VAR_8 = ((const enumARG *)VAR_5)->checkunique;
  unsigned char *VAR_9 = (unsigned char *)FUNC_1(VAR_4, 0);
  char *VAR_10, *VAR_11, *VAR_12;
  int VAR_13;

  while (VAR_6 && (VAR_10 = (*VAR_6++)))
    {
      if ((VAR_13 = FUNC_0((unsigned char *)VAR_10, VAR_9, VAR_7)) != VAR_2)
 {
   VAR_12 = VAR_11 = VAR_10;
   if ((VAR_8 && VAR_13 != VAR_0))
     {
       while (VAR_6 && (VAR_12 = *VAR_6++))
  {
    if ((VAR_13 = FUNC_0((unsigned char *)VAR_12, VAR_9, VAR_7)) != VAR_2)
      {
        if (VAR_13 == VAR_0)
   {
     VAR_11 = VAR_12;
     break;
   }
        else
   VAR_11 = (char *)0;
      }
  }
     }
   if (VAR_11)
     {
       FUNC_2(VAR_4, 0, VAR_11);
       return VAR_3;
     }
   if (!VAR_12)
     break;
 }
    }
  return VAR_1;
}
