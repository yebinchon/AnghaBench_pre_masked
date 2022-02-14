
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,char*) ;
 size_t FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (size_t,void*,void*,void*,void*,int *,int *) ;
 int VAR_7 ;
 int FUNC_4 () ;
 void* FUNC_5 (int,size_t) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (void*,int) ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (scalar_t__,int ,int *) ;
 void* VAR_11 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  size_t VAR_12 = FUNC_2 (VAR_10);
  int VAR_13 = 0;

  if (VAR_3)
    FUNC_1 (VAR_3,
      "* Phase 3: Eliminate globally redundant extensions.  *\n");


  VAR_11 = FUNC_5 (VAR_5, VAR_12);
  VAR_2 = FUNC_5 (VAR_5, VAR_12);
  VAR_1 = FUNC_5 (VAR_5, VAR_12);
  VAR_0 = FUNC_5 (VAR_5, VAR_12);
  FUNC_6 (VAR_11, VAR_5);
  FUNC_7 (VAR_2, VAR_5);
  FUNC_7 (VAR_1, VAR_5);
  FUNC_7 (VAR_0, VAR_5);


  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
    {
      if (VAR_9[VAR_13])
 {


   FUNC_8 (VAR_9[VAR_13],
         VAR_8, ((void*)0));
 }
    }


  FUNC_0 ();


  VAR_4 = FUNC_3 (VAR_12, VAR_11, VAR_2, VAR_1,
         VAR_0, &VAR_7, &VAR_6);


  FUNC_4 ();
}
