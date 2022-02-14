
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct complaints {int series; TYPE_1__* explanation; } ;
struct complain {scalar_t__ counter; int fmt; int line; int * file; } ;
struct cleanup {int dummy; } ;
typedef enum complaint_series { ____Placeholder_complaint_series } complaint_series ;
struct TYPE_2__ {int postfix; int prefix; } ;






 int FUNC_0 () ;
 int FUNC_1 (struct cleanup*) ;
 struct complain* FUNC_2 (struct complaints*,char const*,int,char const*) ;
 int FUNC_3 (int ,char*,int ,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 struct complaints* FUNC_7 (struct complaints**) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int *,int ,int ,int ) ;
 struct cleanup* FUNC_9 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*) ;
 int VAR_3 ;
 int FUNC_14 (char**,int ,int ) ;

__attribute__((used)) static void
FUNC_15 (struct complaints **VAR_4, const char *VAR_5, int VAR_6, const char *VAR_7,
     va_list VAR_8)
{
  struct complaints *VAR_9 = FUNC_7 (VAR_4);
  struct complain *VAR_10 = FUNC_2 (VAR_9, VAR_5, VAR_6, VAR_7);
  enum complaint_series VAR_11;
  FUNC_5 (VAR_9 != ((void*)0));

  VAR_10->counter++;
  if (VAR_10->counter > VAR_2)
    return;

  if (VAR_1)
    VAR_11 = 128;
  else
    VAR_11 = VAR_9->series;

  if (VAR_10->file != ((void*)0))
    FUNC_8 (VAR_10->file, VAR_10->line, VAR_10->fmt, VAR_8);
  else if (&FUNC_12)
    FUNC_12) (VAR_10->fmt, VAR_8);
  else
    {
      if (VAR_9->explanation == ((void*)0))

 FUNC_11 (VAR_10->fmt, VAR_8);
      else
 {
   char *VAR_12;
   struct cleanup *VAR_13;
   FUNC_14 (&VAR_12, VAR_10->fmt, VAR_8);
   VAR_13 = FUNC_9 (VAR_3, VAR_12);
   FUNC_13 ("");
   if (VAR_11 != 128)
     FUNC_0 ();
   FUNC_3 (VAR_0, "%s%s%s",
       VAR_9->explanation[VAR_11].prefix, VAR_12,
       VAR_9->explanation[VAR_11].postfix);



   if (VAR_11 == 130)




     FUNC_4 ("\n", VAR_0);
   else
     FUNC_13 ("");
   FUNC_1 (VAR_13);
 }
    }

  switch (VAR_11)
    {
    case 130:
      break;
    case 131:
      VAR_9->series = 128;
      break;
    case 128:
    case 129:
      VAR_9->series = 128;
      break;
    }





  FUNC_6 (VAR_0);
}
