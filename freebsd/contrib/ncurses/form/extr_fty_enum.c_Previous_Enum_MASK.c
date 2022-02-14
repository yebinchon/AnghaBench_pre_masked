
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; char** kwds; int checkcase; } ;
typedef TYPE_1__ enumARG ;
typedef int FIELD ;


 scalar_t__ FUNC_0 (unsigned char const*,unsigned char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static bool
FUNC_3(FIELD *VAR_4, const void *VAR_5)
{
  const enumARG *VAR_6 = (const enumARG *)VAR_5;
  int VAR_7 = VAR_6->count;
  char **VAR_8 = &VAR_6->kwds[VAR_7 - 1];
  bool VAR_9 = VAR_6->checkcase;
  unsigned char *VAR_10 = (unsigned char *)FUNC_1(VAR_4, 0);

  if (VAR_8)
    {
      while (VAR_7--)
 {
   if (FUNC_0((unsigned char *)(*VAR_8--), VAR_10, VAR_9) == VAR_0)
     break;
 }

      if (VAR_7 <= 0)
 VAR_8 = &VAR_6->kwds[VAR_6->count - 1];

      if ((VAR_7 >= 0) || (FUNC_0((const unsigned char *)VAR_3, VAR_10, VAR_9) == VAR_0))
 {
   FUNC_2(VAR_4, 0, *VAR_8);
   return VAR_2;
 }
    }
  return VAR_1;
}
