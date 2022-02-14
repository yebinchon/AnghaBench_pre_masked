
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {uintptr_t low; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int ,int,int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 char* FUNC_10 (char*) ;

void
FUNC_11 ()
{
  char *VAR_7 = 0;


  if (FUNC_0 (VAR_5 == 0))
    return;





  VAR_5 = 0;

  FUNC_6 (VAR_6);

  FUNC_5 ();

  VAR_7 = FUNC_10 ("MUDFLAP_OPTIONS");
  if (VAR_7)
    {
      int VAR_8 = FUNC_8 (VAR_7);
      if (VAR_8 < 0)
        {
          FUNC_7 ();
          FUNC_9 (1);
        }
    }


  FUNC_2 (((void*)0));




  FUNC_3 (& VAR_4, sizeof(VAR_4), VAR_1, "__mf_lookup_cache");
  FUNC_3 (& VAR_2, sizeof(VAR_2), VAR_1, "__mf_lc_mask");
  FUNC_3 (& VAR_3, sizeof(VAR_3), VAR_1, "__mf_lc_shift");



  FUNC_3 (VAR_0, 1, VAR_1, "NULL");
  VAR_4[0].low = (uintptr_t) -1;
}
