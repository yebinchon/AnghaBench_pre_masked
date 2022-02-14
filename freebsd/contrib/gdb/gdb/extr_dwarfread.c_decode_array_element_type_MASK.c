
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef void* DIE_REF ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct type* FUNC_0 (void*,int *) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int VAR_5 ;
 struct type* FUNC_3 (unsigned short) ;
 struct type* FUNC_4 (char*) ;
 struct type* FUNC_5 (char*) ;
 struct type* FUNC_6 (int ,int ) ;
 struct type* FUNC_7 (void*) ;
 void* FUNC_8 (char*,int,int ,int ) ;

__attribute__((used)) static struct type *
FUNC_9 (char *VAR_6)
{
  struct type *VAR_7;
  DIE_REF VAR_8;
  unsigned short VAR_9;
  unsigned short VAR_10;
  int VAR_11;

  VAR_9 = FUNC_8 (VAR_6, VAR_4, VAR_3,
         VAR_5);
  VAR_6 += VAR_4;
  VAR_11 = FUNC_1 (VAR_9);
  if (VAR_11 == -1)
    {
      FUNC_2 (VAR_0, VAR_1, VAR_9);
      VAR_7 = FUNC_6 (VAR_5, VAR_2);
    }
  else
    {
      switch (VAR_9)
 {
 case 131:
   VAR_10 = FUNC_8 (VAR_6, VAR_11, VAR_3,
         VAR_5);
   VAR_7 = FUNC_3 (VAR_10);
   break;
 case 130:
   VAR_7 = FUNC_4 (VAR_6);
   break;
 case 128:
   VAR_8 = FUNC_8 (VAR_6, VAR_11, VAR_3,
        VAR_5);
   VAR_7 = FUNC_7 (VAR_8);
   if (VAR_7 == ((void*)0))
     {
       VAR_7 = FUNC_0 (VAR_8, ((void*)0));
     }
   break;
 case 129:
   VAR_7 = FUNC_5 (VAR_6);
   break;
 default:
   FUNC_2 (VAR_0, VAR_1, VAR_9);
   VAR_7 = FUNC_6 (VAR_5, VAR_2);
   break;
 }
    }
  return (VAR_7);
}
