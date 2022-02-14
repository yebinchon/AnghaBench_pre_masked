
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcDisState {scalar_t__ commentBuffer; int commNum; int * comm; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 char* FUNC_1 (struct arcDisState*,long) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct arcDisState * VAR_1,
  int VAR_2,
  int VAR_3,
  long VAR_4)
{
  if (VAR_1->commentBuffer != 0)
    {
      int VAR_5;

      if (VAR_3)
 {
   const char *VAR_6 = FUNC_1 (VAR_1, VAR_4 + VAR_2);

   if (*VAR_6 != 0)
     FUNC_0 (VAR_6);
 }
      for (VAR_5 = 0; VAR_5 < VAR_1->commNum; VAR_5++)
 {
   if (VAR_5 == 0)
     FUNC_3 (VAR_1->commentBuffer, VAR_0);
   else
     FUNC_2 (VAR_1->commentBuffer, ", ");
   FUNC_4 (VAR_1->commentBuffer, VAR_1->comm[VAR_5],
     sizeof (VAR_1->commentBuffer));
 }
    }
}
