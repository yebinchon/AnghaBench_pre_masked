
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct format_data {int count; int format; int size; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 scalar_t__ FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 struct value* FUNC_6 (int ) ;
 int VAR_2 ;
 struct format_data FUNC_7 (char**,int ,int ) ;
 int FUNC_8 (struct cleanup*) ;
 int FUNC_9 (struct format_data,int ,scalar_t__) ;
 struct value* FUNC_10 (struct expression*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct value* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (char*) ;
 struct type* FUNC_12 (int ) ;
 scalar_t__ VAR_8 ;
 struct cleanup* FUNC_13 (int ,struct expression**) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct expression* FUNC_14 (char*) ;
 int FUNC_15 (int ,struct value*) ;
 int FUNC_16 (struct value*) ;
 struct value* FUNC_17 (struct type*,int ) ;
 struct value* FUNC_18 (struct value*) ;

void
FUNC_19 (char *VAR_11, int VAR_12)
{
  struct expression *VAR_13;
  struct format_data VAR_14;
  struct cleanup *VAR_15;
  struct value *VAR_16;

  VAR_14.format = VAR_6;
  VAR_14.size = VAR_7;
  VAR_14.count = 1;

  if (VAR_11 && *VAR_11 == '/')
    {
      VAR_11++;
      VAR_14 = FUNC_7 (&VAR_11, VAR_6, VAR_7);
    }



  if (VAR_11 != 0 && *VAR_11 != 0)
    {
      VAR_13 = FUNC_14 (VAR_11);



      if (VAR_12)
 *VAR_11 = 0;
      VAR_15 = FUNC_13 (VAR_3, &VAR_13);
      VAR_16 = FUNC_10 (VAR_13);
      if (FUNC_0 (FUNC_5 (VAR_16)) == VAR_1)
 VAR_16 = FUNC_18 (VAR_16);


      if (
   FUNC_0 (FUNC_5 (VAR_16)) == VAR_0
    && FUNC_4 (VAR_16) == VAR_8)
 VAR_9 = FUNC_1 (VAR_16);
      else
 VAR_9 = FUNC_16 (VAR_16);
      if (FUNC_2 (VAR_16))
 VAR_10 = FUNC_2 (VAR_16);
      FUNC_8 (VAR_15);
    }

  FUNC_9 (VAR_14, VAR_9, VAR_10);


  VAR_7 = VAR_14.size;
  VAR_6 = VAR_14.format;


  if (VAR_5)
    {


      struct type *VAR_17
 = FUNC_12 (FUNC_5 (VAR_5));
      FUNC_15 (FUNC_11 ("_"),
         FUNC_17 (VAR_17,
        VAR_4));




      if (FUNC_3 (VAR_5))
 FUNC_15 (FUNC_11 ("__"),
    FUNC_6 (VAR_2));
      else
 FUNC_15 (FUNC_11 ("__"), VAR_5);
    }
}
