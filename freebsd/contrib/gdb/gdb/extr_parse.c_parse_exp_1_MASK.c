
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expression {int nelts; TYPE_1__* language_defn; } ;
struct cleanup {int dummy; } ;
struct block {int dummy; } ;
struct TYPE_2__ {int (* la_error ) (int *) ;scalar_t__ (* la_parser ) () ;} ;


 int FUNC_0 (struct block*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (struct expression*,int ) ;
 int FUNC_5 (struct expression*,int ,char*) ;
 int FUNC_6 (char*) ;
 struct expression* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct block* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct block* FUNC_7 (int *) ;
 scalar_t__* VAR_12 ;
 struct cleanup* FUNC_8 (int ,struct expression**) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (struct expression*) ;
 int * VAR_15 ;
 scalar_t__ FUNC_10 (scalar_t__*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (char*,scalar_t__) ;

struct expression *
FUNC_15 (char **VAR_17, struct block *VAR_18, int VAR_19)
{
  struct cleanup *VAR_20;

  VAR_12 = *VAR_17;
  VAR_15 = ((void*)0);

  VAR_14 = 0;
  VAR_16 = 0;

  VAR_0 = VAR_19;

  if (VAR_12 == 0 || *VAR_12 == 0)
    FUNC_6 ("expression to compute");

  VAR_20 = FUNC_8 (VAR_9, 0 );
  VAR_10 = 0;

  if (VAR_18)
    {
      VAR_5 = VAR_18;
      VAR_6 = FUNC_0 (VAR_18);
    }
  else
    VAR_5 = FUNC_7 (&VAR_6);

  VAR_13 = (char *) FUNC_2 (FUNC_10 (VAR_12) + 1);
  VAR_4 = 10;
  VAR_3 = 0;
  VAR_2 = (struct expression *)
    FUNC_13 (sizeof (struct expression) + FUNC_1 (VAR_4));
  VAR_2->language_defn = VAR_1;
  FUNC_8 (VAR_8, &VAR_2);

  if (VAR_1->la_parser ())
    VAR_1->la_error (((void*)0));

  FUNC_3 (VAR_20);





  VAR_2->nelts = VAR_3;
  VAR_2 = (struct expression *)
    FUNC_14 ((char *) VAR_2,
       sizeof (struct expression) + FUNC_1 (VAR_3));;




  if (VAR_7)
    FUNC_5 (VAR_2, VAR_11,
    "before conversion to prefix form");

  FUNC_9 (VAR_2);

  if (VAR_7)
    FUNC_4 (VAR_2, VAR_11);

  *VAR_17 = VAR_12;
  return VAR_2;
}
