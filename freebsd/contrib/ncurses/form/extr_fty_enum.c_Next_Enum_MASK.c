
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** kwds; int checkcase; int count; } ;
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
  char **VAR_7 = VAR_6->kwds;
  bool VAR_8 = VAR_6->checkcase;
  int VAR_9 = VAR_6->count;
  unsigned char *VAR_10 = (unsigned char *)FUNC_1(VAR_4, 0);

  if (VAR_7)
    {
      while (VAR_9--)
 {
   if (FUNC_0((unsigned char *)(*VAR_7++), VAR_10, VAR_8) == VAR_0)
     break;
 }
      if (VAR_9 <= 0)
 VAR_7 = VAR_6->kwds;
      if ((VAR_9 >= 0) || (FUNC_0((const unsigned char *)VAR_3, VAR_10, VAR_8) == VAR_0))
 {
   FUNC_2(VAR_4, 0, *VAR_7);
   return VAR_2;
 }
    }
  return VAR_1;
}
