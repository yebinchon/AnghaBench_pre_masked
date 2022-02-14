
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int td_err_e ;
struct objfile {int dummy; } ;
struct TYPE_7__ {scalar_t__ pid; } ;
struct TYPE_6__ {char* dli_fname; } ;
typedef TYPE_1__ Dl_info ;


 scalar_t__ FUNC_0 (int ) ;
 char* VAR_0 ;


 scalar_t__ FUNC_1 (int (*) (TYPE_2__*,int *),TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (int *) ;
 struct objfile* VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct objfile*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12 (struct objfile *VAR_9)
{
  td_err_e VAR_10;






  {
    static int VAR_11;
    if (!VAR_11)
      {
 Dl_info VAR_12;
 const char *VAR_13 = ((void*)0);

 if (FUNC_1 ((*FUNC_7), &VAR_12) != 0)
   VAR_13 = VAR_12.dli_fname;

 if (VAR_13 == ((void*)0))

   VAR_13 = VAR_0;
 FUNC_4 ("Using host libthread_db library \"%s\".\n",
      VAR_13);
 VAR_11 = 1;
      }
  }



  if (VAR_9 == ((void*)0) || !VAR_5)
    {


      if (VAR_8)
 {
   FUNC_3 (VAR_3.pid == 0);
   FUNC_10 (&VAR_7);
   VAR_8 = 0;
 }

      VAR_2 = 0;

      goto quit;
    }

  if (VAR_8)


    goto quit;




  VAR_3.pid = FUNC_0 (VAR_1);


  VAR_10 = FUNC_7 (&VAR_3, &VAR_6);
  switch (VAR_10)
    {
    case 129:

      break;

    case 128:
      FUNC_4 ("[Thread debugging using libthread_db enabled]\n");


      FUNC_5 (&VAR_7);
      VAR_8 = 1;







      if (VAR_9 == VAR_4)
 {
   FUNC_3 (VAR_3.pid == 0);
   VAR_2 = 1;
 }




      if (VAR_3.pid != 0)
 {
   FUNC_2 ();
   FUNC_9 ();
 }
      break;

    default:
      FUNC_11 ("Cannot initialize thread debugging library: %s",
        FUNC_8 (VAR_10));
      break;
    }

quit:
  if (&FUNC_6)
    FUNC_6 (VAR_9);
}
