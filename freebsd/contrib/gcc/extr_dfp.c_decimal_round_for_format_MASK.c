
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct real_format {int dummy; } ;
typedef int decimal64 ;
typedef int decimal32 ;
typedef int decimal128 ;
typedef int decNumber ;
struct TYPE_9__ {scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
struct TYPE_10__ {scalar_t__ cl; scalar_t__ sig; } ;
typedef TYPE_2__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 struct real_format const VAR_3 ;
 int FUNC_6 (TYPE_2__*,int *,TYPE_1__*) ;
 struct real_format const VAR_4 ;
 struct real_format const VAR_5 ;
 int FUNC_7 () ;
 scalar_t__ VAR_6 ;

void
FUNC_8 (const struct real_format *VAR_7, REAL_VALUE_TYPE *VAR_8)
{
  decNumber VAR_9;
  decContext VAR_10;


  if (VAR_8->cl != VAR_6)
    return;

  FUNC_0 (&VAR_10, VAR_0);
  VAR_10.traps = 0;
  FUNC_1 ((decimal128 *) VAR_8->sig, &VAR_9);

  if (VAR_7 == &VAR_4)
    {

      return;
    }
  else if (VAR_7 == &VAR_5)
    {
      decimal32 VAR_11;
      FUNC_0 (&VAR_10, VAR_1);
      VAR_10.traps = 0;

      FUNC_2 (&VAR_11, &VAR_9, &VAR_10);
      FUNC_3 (&VAR_11, &VAR_9);
    }
  else if (VAR_7 == &VAR_3)
    {
      decimal64 VAR_12;
      FUNC_0 (&VAR_10, VAR_2);
      VAR_10.traps = 0;

      FUNC_4 (&VAR_12, &VAR_9, &VAR_10);
      FUNC_5 (&VAR_12, &VAR_9);
    }
  else
    FUNC_7 ();

  FUNC_6 (VAR_8, &VAR_9, &VAR_10);
}
