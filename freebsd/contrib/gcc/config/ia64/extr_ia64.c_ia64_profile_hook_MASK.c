
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {char* (* strip_name_encoding ) (int ) ;} ;
typedef int SYMBOL_REF_FLAGS ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ) ;
 TYPE_1__ VAR_6 ;

void
FUNC_11 (int VAR_7)
{
  rtx VAR_8, VAR_9;

  if (VAR_1)
    VAR_8 = VAR_5;
  else
    {
      char VAR_10[30];
      const char *VAR_11;
      FUNC_0 (VAR_10, "LP", VAR_7);
      VAR_11 = (*VAR_6.strip_name_encoding) (FUNC_9 (VAR_10));
      VAR_8 = FUNC_8 (VAR_2, VAR_11);
      SYMBOL_REF_FLAGS (VAR_12) = VAR_3;
    }
  VAR_9 = FUNC_6 (VAR_2);
  FUNC_2 (FUNC_4 (VAR_9));
  FUNC_3 (FUNC_5 (), VAR_0,
                     VAR_4, 3,
       FUNC_7 (VAR_2, FUNC_1 (0)), VAR_2,
       VAR_9, VAR_2,
       VAR_8, VAR_2);
}
