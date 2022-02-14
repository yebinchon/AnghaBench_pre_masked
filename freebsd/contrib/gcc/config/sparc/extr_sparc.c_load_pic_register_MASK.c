
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ,void*,void*) ;
 int FUNC_4 (int ,void*,void*) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7 (bool VAR_9)
{
  int VAR_10 = VAR_3;


  if (!VAR_7[0])
    {
      FUNC_0 (VAR_7, "LADDPC", 0);
      VAR_6 = FUNC_5 (VAR_0, VAR_7);
      VAR_4 = FUNC_5 (VAR_0, "_GLOBAL_OFFSET_TABLE_");
    }



  if (!VAR_9 && !VAR_5)
    FUNC_2 ();

  VAR_3 = 0;
  if (VAR_1)
    FUNC_1 (FUNC_3 (VAR_8, VAR_4,
         VAR_6));
  else
    FUNC_1 (FUNC_4 (VAR_8, VAR_4,
         VAR_6));
  VAR_3 = VAR_10;





  FUNC_1 (FUNC_6 (VAR_2, VAR_8));
}
