
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct real_format {scalar_t__ qnan_msb_set; } ;
struct TYPE_9__ {scalar_t__ cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (struct real_format const*,long*,TYPE_1__*) ;
 struct real_format VAR_0 ;
 struct real_format VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct real_format const*,TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4 (const struct real_format *VAR_3, long *VAR_4,
       const REAL_VALUE_TYPE *VAR_5)
{
  REAL_VALUE_TYPE VAR_6, VAR_7, VAR_8;
  const struct real_format *VAR_9;

  VAR_9 = VAR_3->qnan_msb_set ? &VAR_0 : &VAR_1;


  VAR_7 = *VAR_5;
  if (VAR_7.cl == VAR_2)
    FUNC_2 (&VAR_7);


  VAR_6 = VAR_7;
  FUNC_3 (VAR_9, &VAR_6);
  FUNC_1 (VAR_9, &VAR_4[0], &VAR_6);

  if (VAR_6.cl == VAR_2)
    {
      FUNC_0 (&VAR_8, &VAR_7, &VAR_6, 1);

      FUNC_3 (VAR_9, &VAR_8);
      FUNC_1 (VAR_9, &VAR_4[2], &VAR_8);
    }
  else
    {


      VAR_4[2] = 0;
      VAR_4[3] = 0;
    }
}
