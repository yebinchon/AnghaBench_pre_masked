
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_stream {int stream; } ;
struct type {int dummy; } ;
struct mi_opt {char* member_0; int member_1; int member_2; } ;
struct cleanup {int dummy; } ;
typedef enum opt { ____Placeholder_opt } opt ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char*) ;
 struct type* VAR_2 ;
 struct type* VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char,int ) ;
 struct cleanup* FUNC_3 (int ,char*) ;
 struct cleanup* FUNC_4 (int ,char*) ;
 struct cleanup* FUNC_5 (int ,int *) ;
 int VAR_6 ;
 int FUNC_6 (char*,int,char**,struct mi_opt*,int*,char**) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,struct type*,char,char,int ) ;
 long FUNC_9 (scalar_t__,char*,long,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int ,char*,long) ;
 int FUNC_13 (int ,char*,struct ui_stream*) ;
 int FUNC_14 (int ,int *,char*) ;
 int FUNC_15 (struct ui_stream*) ;
 struct ui_stream* FUNC_16 (int ) ;
 int VAR_8 ;
 int FUNC_17 (int *,char*) ;
 char* FUNC_18 (long,int) ;
 int VAR_9 ;

enum mi_cmd_result
FUNC_19 (char *VAR_10, char **VAR_11, int VAR_12)
{
  struct cleanup *VAR_13 = FUNC_3 (VAR_7, ((void*)0));
  CORE_ADDR VAR_14;
  long VAR_15;
  long VAR_16;
  long VAR_17;
  char VAR_18;
  struct type *VAR_19;
  long VAR_20;
  char VAR_21;
  char VAR_22;
  char *VAR_23;
  int VAR_24;
  long VAR_25 = 0;
  int VAR_26 = 0;
  char *VAR_27;
  enum opt
    {
      OFFSET_OPT
    };
  static struct mi_opt VAR_28[] =
  {
    {"o", OFFSET_OPT, 1},
    0
  };

  while (1)
    {
      int VAR_29 = FUNC_6 ("mi_cmd_data_read_memory", VAR_12, VAR_11, VAR_28,
      &VAR_26, &VAR_27);
      if (VAR_29 < 0)
 break;
      switch ((enum opt) VAR_29)
 {
 case OFFSET_OPT:
   VAR_25 = FUNC_0 (VAR_27);
   break;
 }
    }
  VAR_11 += VAR_26;
  VAR_12 -= VAR_26;

  if (VAR_12 < 5 || VAR_12 > 6)
    {
      FUNC_17 (&VAR_6,
   "mi_cmd_data_read_memory: Usage: ADDR WORD-FORMAT WORD-SIZE NR-ROWS NR-COLS [ASCHAR].");
      return VAR_1;
    }




  VAR_14 = FUNC_7 (VAR_11[0]) + VAR_25;


  VAR_18 = VAR_11[1][0];

  VAR_20 = FUNC_0 (VAR_11[2]);
  switch (VAR_20)
    {
    case 1:
      VAR_19 = VAR_5;
      VAR_21 = 'b';
      break;
    case 2:
      VAR_19 = VAR_2;
      VAR_21 = 'h';
      break;
    case 4:
      VAR_19 = VAR_3;
      VAR_21 = 'w';
      break;
    case 8:
      VAR_19 = VAR_4;
      VAR_21 = 'g';
      break;
    default:
      VAR_19 = VAR_5;
      VAR_21 = 'b';
    }

  VAR_17 = FUNC_0 (VAR_11[3]);
  if (VAR_17 <= 0)
    {
      FUNC_17 (&VAR_6,
   "mi_cmd_data_read_memory: invalid number of rows.");
      return VAR_1;
    }

  VAR_16 = FUNC_0 (VAR_11[4]);
  if (VAR_16 <= 0)
    {
      FUNC_17 (&VAR_6,
   "mi_cmd_data_read_memory: invalid number of columns.");
    }

  if (VAR_12 == 6)
    VAR_22 = *VAR_11[5];
  else
    VAR_22 = 0;


  VAR_15 = VAR_20 * VAR_17 * VAR_16;
  VAR_23 = FUNC_18 (VAR_15, 1);
  FUNC_3 (VAR_9, VAR_23);
  if (VAR_23 == ((void*)0))
    {
      FUNC_17 (&VAR_6,
   "mi_cmd_data_read_memory: out of memory.");
      return VAR_1;
    }
  VAR_24 = 0;
  while (VAR_24 < VAR_15)
    {
      int VAR_30;
      long VAR_31 = FUNC_9 (VAR_14 + VAR_24, VAR_23 + VAR_24,
          VAR_15 - VAR_24,
          &VAR_30);
      if (VAR_31 <= 0)
 break;
      VAR_24 += VAR_31;
    }


  FUNC_11 (VAR_8, "addr", VAR_14);
  FUNC_12 (VAR_8, "nr-bytes", VAR_24);
  FUNC_12 (VAR_8, "total-bytes", VAR_15);
  FUNC_11 (VAR_8, "next-row", VAR_14 + VAR_20 * VAR_16);
  FUNC_11 (VAR_8, "prev-row", VAR_14 - VAR_20 * VAR_16);
  FUNC_11 (VAR_8, "next-page", VAR_14 + VAR_15);
  FUNC_11 (VAR_8, "prev-page", VAR_14 - VAR_15);


  {
    struct ui_stream *VAR_32 = FUNC_16 (VAR_8);
    struct cleanup *VAR_33;
    int VAR_34;
    int VAR_35;
    VAR_33 = FUNC_4 (VAR_8, "memory");
    for (VAR_34 = 0, VAR_35 = 0;
  VAR_34 < VAR_17;
  VAR_34++, VAR_35 += VAR_16 * VAR_20)
      {
 int VAR_36;
 int VAR_37;
 struct cleanup *VAR_38;
 struct cleanup *VAR_39;
 VAR_38 = FUNC_5 (VAR_8, ((void*)0));
 FUNC_11 (VAR_8, "addr", VAR_14 + VAR_35);

 VAR_39 = FUNC_4 (VAR_8, "data");
 for (VAR_36 = 0, VAR_37 = VAR_35;
      VAR_36 < VAR_16;
      VAR_36++, VAR_37 += VAR_20)
   {
     if (VAR_37 + VAR_20 > VAR_24)
       {
  FUNC_14 (VAR_8, ((void*)0), "N/A");
       }
     else
       {
  FUNC_10 (VAR_32->stream);
  FUNC_8 (VAR_23 + VAR_37, VAR_19, VAR_18,
     VAR_21, VAR_32->stream);
  FUNC_13 (VAR_8, ((void*)0), VAR_32);
       }
   }
 FUNC_1 (VAR_39);
 if (VAR_22)
   {
     int VAR_40;
     FUNC_10 (VAR_32->stream);
     for (VAR_40 = VAR_35; VAR_40 < VAR_35 + VAR_20 * VAR_16; VAR_40++)
       {
  if (VAR_40 >= VAR_24)
    {
      FUNC_2 ('X', VAR_32->stream);
    }
  else if (VAR_23[VAR_40] < 32 || VAR_23[VAR_40] > 126)
    {
      FUNC_2 (VAR_22, VAR_32->stream);
    }
  else
    FUNC_2 (VAR_23[VAR_40], VAR_32->stream);
       }
     FUNC_13 (VAR_8, "ascii", VAR_32);
   }
 FUNC_1 (VAR_38);
      }
    FUNC_15 (VAR_32);
    FUNC_1 (VAR_33);
  }
  FUNC_1 (VAR_13);
  return VAR_0;
}
