
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_2__ {char const* ptr_name; int stub_p; int used; int symbol; } ;
typedef TYPE_1__ machopic_indirection ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ,int ) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int ,int ,int *) ;
 void** FUNC_7 (scalar_t__,char*,int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_12 (char const*) ;
 char* VAR_6 ;
 char const* FUNC_13 (char*) ;

const char *
FUNC_14 (rtx VAR_7, bool VAR_8)
{
  char *VAR_9;
  const char *VAR_10 = FUNC_3 (VAR_7, 0);
  size_t VAR_11 = FUNC_12 (VAR_10);
  machopic_indirection *VAR_12;
  void ** VAR_13;
  bool VAR_14 = 0;
  bool VAR_15;
  const char *VAR_16;
  const char *VAR_17 = VAR_6;
  const char *VAR_18 = "";
  tree VAR_19;

  VAR_19 = FUNC_9 (VAR_10);
  if (VAR_19)
    {
      tree VAR_20 = VAR_19;

      while (FUNC_1 (VAR_19))
 VAR_19 = FUNC_2 (VAR_19);
      if (VAR_19 != VAR_20)
 {
   VAR_10 = FUNC_0 (VAR_19);
   VAR_11 = FUNC_12 (VAR_10);
 }
    }

  if (VAR_10[0] == '*')
    {
      VAR_14 = 1;
      VAR_17 = "";
      ++VAR_10;
      --VAR_11;
    }

  VAR_15 = FUNC_10 (VAR_10);
  if (VAR_15)
    {
      VAR_18 = "\"";
    }

  if (VAR_8)
    VAR_16 = VAR_2;
  else
    VAR_16 = VAR_1;

  VAR_9 = FUNC_4 (FUNC_12 ("&L")
     + FUNC_12 (VAR_17)
     + VAR_11
     + FUNC_12 (VAR_16)
     + 2 * FUNC_12 (VAR_18)
     + 1 );


  FUNC_11 (VAR_9, "&%sL%s%s%s%s", VAR_18, VAR_17, VAR_10, VAR_16, VAR_18);

  if (!VAR_5)
    VAR_5 = FUNC_6 (37,
          VAR_4,
          VAR_3,
                       ((void*)0));

  VAR_13 = FUNC_7 (VAR_5, VAR_9,
       FUNC_8 (VAR_9), VAR_0);
  if (*VAR_13)
    {
      VAR_12 = (machopic_indirection *) *VAR_13;
    }
  else
    {
      VAR_12 = (machopic_indirection *) FUNC_5 (sizeof (machopic_indirection));
      VAR_12->symbol = VAR_7;
      VAR_12->ptr_name = FUNC_13 (VAR_9);
      VAR_12->stub_p = VAR_8;
      VAR_12->used = 0;
      *VAR_13 = VAR_12;
    }

  return VAR_12->ptr_name;
}
