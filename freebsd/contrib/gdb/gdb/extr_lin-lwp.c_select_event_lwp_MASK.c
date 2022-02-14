
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int status; int ptid; } ;


 double VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_3 ;
 struct lwp_info* FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct lwp_info **VAR_6, int *VAR_7)
{
  int VAR_8 = 0;
  int VAR_9;
  struct lwp_info *VAR_10;


  (*VAR_6)->status = *VAR_7;


  VAR_10 = FUNC_1 (VAR_5, ((void*)0));
  if (VAR_10 != ((void*)0))
    {
      if (VAR_2)
 FUNC_0 (VAR_3,
       "SEL: Select single-step %s\n",
       FUNC_3 (VAR_10->ptid));
    }
  else
    {




      FUNC_1 (VAR_1, &VAR_8);


      VAR_9 = (int)
 ((VAR_8 * (double) FUNC_2 ()) / (VAR_0 + 1.0));

      if (VAR_2 && VAR_8 > 1)
 FUNC_0 (VAR_3,
       "SEL: Found %d SIGTRAP events, selecting #%d\n",
       VAR_8, VAR_9);

      VAR_10 = FUNC_1 (VAR_4,
        &VAR_9);
    }

  if (VAR_10 != ((void*)0))
    {

      *VAR_6 = VAR_10;
      *VAR_7 = VAR_10->status;
    }


  (*VAR_6)->status = 0;
}
