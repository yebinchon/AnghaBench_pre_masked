
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int DIE_REF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct type* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct type* FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct type** VAR_7 ;

__attribute__((used)) static struct type *
FUNC_4 (DIE_REF VAR_8, struct type *VAR_9)
{
  struct type **VAR_10;
  int VAR_11;

  VAR_11 = (VAR_8 - VAR_4) / 4;
  VAR_10 = VAR_7 + VAR_11;
  if ((VAR_11 < 0) || (VAR_11 >= VAR_5))
    {
      VAR_9 = FUNC_3 (VAR_3, VAR_2);
      FUNC_1 (VAR_0, VAR_1, VAR_8);
    }
  else if (*VAR_10 != ((void*)0))
    {
      VAR_9 = *VAR_10;
      FUNC_2 (&VAR_6,
   "DIE @ 0x%x \"%s\", internal error: duplicate user type allocation",
   VAR_0, VAR_1);
    }
  else
    {
      if (VAR_9 == ((void*)0))
 {
   VAR_9 = FUNC_0 (VAR_3);
 }
      *VAR_10 = VAR_9;
    }
  return (VAR_9);
}
