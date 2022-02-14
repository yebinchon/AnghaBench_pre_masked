
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (scalar_t__) ;
 char* FUNC_4 () ;
 scalar_t__ VAR_0 ;
 struct cleanup* FUNC_5 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_7 (char*) ;
 void FUNC_8 (char*,int) ;

void
FUNC_9 (char *(*VAR_5) (char *),
    void (*VAR_6) (char *, int))
{
  struct cleanup *VAR_7;
  char *VAR_8;
  int VAR_9 = FUNC_0 (VAR_3);

  while (VAR_0 && !FUNC_3 (VAR_0))
    {
      VAR_2 = 0;
      if (VAR_0 == VAR_3 && VAR_9)
 FUNC_6 ();
      VAR_7 = FUNC_5 (VAR_1, 0);


      VAR_8 = (*VAR_5) (VAR_0 == VAR_3 ?
        FUNC_4 () : (char *) ((void*)0));

      if (VAR_8 == 0)
 return;

      (*VAR_6) (VAR_8, VAR_0 == VAR_3);


      FUNC_1 (&VAR_4);

      FUNC_2 (VAR_7);
    }
}
