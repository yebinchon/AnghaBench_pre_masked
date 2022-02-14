
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_12__ {int * value; } ;
struct TYPE_11__ {int * value; } ;
struct TYPE_10__ {int * value; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int location; } ;
struct TYPE_7__ {int * value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int *,int ,int *) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * FUNC_5 (int ,int *,int *,int *,int *,int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int,int,int,int *) ;
 int FUNC_10 (int *,char*) ;
 TYPE_6__ FUNC_11 (int *,int *) ;
 TYPE_5__ FUNC_12 (int *) ;
 TYPE_4__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 TYPE_3__* FUNC_18 (int *) ;
 TYPE_2__* FUNC_19 (int *) ;
 TYPE_1__ FUNC_20 (int *) ;
 int FUNC_21 (int *,scalar_t__,char*) ;
 int FUNC_22 (int *,int ,char*) ;
 int * FUNC_23 (int *) ;
 int * FUNC_24 () ;
 int * VAR_11 ;
 int VAR_12 ;
 int * FUNC_25 (int *) ;
 int * FUNC_26 () ;
 int * VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static tree
FUNC_27 (c_parser *VAR_15)
{
  tree VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
  location_t VAR_23;

  if (!FUNC_15 (VAR_15, VAR_8))
    {
      FUNC_10 (VAR_15, "for statement expected");
      return ((void*)0);
    }
  VAR_23 = FUNC_19 (VAR_15)->location;
  FUNC_8 (VAR_15);

  if (!FUNC_21 (VAR_15, VAR_3, "expected %<(%>"))
    return ((void*)0);


  if (FUNC_17 (VAR_15))
    {

      FUNC_9 (VAR_15, 1, 1, 1, 1, ((void*)0));
      VAR_16 = FUNC_24 ();
      if (VAR_16 == ((void*)0))
 goto error_init;
      VAR_22 = VAR_16;
    }
  else if (FUNC_14 (VAR_15, VAR_2)
    && FUNC_18 (VAR_15)->type == VAR_1)
    {
      VAR_16 = FUNC_20 (VAR_15).value;

      FUNC_21 (VAR_15, VAR_1, "expected %<=%>");

      VAR_22 = FUNC_11 (VAR_15, ((void*)0)).value;
      VAR_22 = FUNC_4 (VAR_16, VAR_6, VAR_22);
      VAR_22 = FUNC_23 (VAR_22);

      FUNC_22 (VAR_15, VAR_4, "expected %<;%>");
    }
  else
    goto error_init;


  VAR_17 = VAR_7;
  if (FUNC_16 (VAR_15, VAR_4))
    {
      VAR_17 = FUNC_13 (VAR_15).value;
      VAR_17 = FUNC_6 (VAR_17);
      if (FUNC_0 (VAR_17))
 FUNC_1 (VAR_17, VAR_12);
    }
  FUNC_22 (VAR_15, VAR_4, "expected %<;%>");


  VAR_18 = VAR_7;
  if (FUNC_16 (VAR_15, VAR_0))
    VAR_18 = FUNC_23 (FUNC_12 (VAR_15).value);
  FUNC_22 (VAR_15, VAR_0, "expected %<)%>");

 parse_body:
  VAR_19 = VAR_9;
  VAR_9 = VAR_13;
  VAR_20 = VAR_10;
  VAR_10 = VAR_7;
  VAR_21 = FUNC_26 ();

  FUNC_2 (FUNC_7 (VAR_15));
  if (VAR_10)
    FUNC_2 (FUNC_3 (VAR_5, VAR_14, VAR_10));

  VAR_21 = FUNC_25 (VAR_21);
  VAR_9 = VAR_19;
  VAR_10 = VAR_20;



  if (VAR_16 != ((void*)0) && VAR_16 != VAR_11 && VAR_22 != VAR_11)
    return FUNC_5 (VAR_23, VAR_16, VAR_22, VAR_17, VAR_18, VAR_21, ((void*)0));
  return ((void*)0);

 error_init:
  FUNC_10 (VAR_15, "expected iteration declaration or initialization");
  FUNC_22 (VAR_15, VAR_0, "expected %<)%>");
  VAR_16 = VAR_22 = VAR_17 = VAR_18 = VAR_7;
  goto parse_body;
}
