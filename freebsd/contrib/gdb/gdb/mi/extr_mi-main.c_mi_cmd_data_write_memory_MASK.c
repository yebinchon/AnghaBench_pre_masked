
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_opt {char* member_0; int member_1; int member_2; } ;
struct cleanup {int dummy; } ;
typedef enum opt { ____Placeholder_opt } opt ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef void* LONGEST ;
typedef long CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char*) ;
 int FUNC_1 (struct cleanup*) ;
 struct cleanup* FUNC_2 (int ,void*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char**,struct mi_opt*,int*,char**) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*,long,void*) ;
 int FUNC_6 (long,void*,long) ;
 int FUNC_7 (int *,char*) ;
 int VAR_3 ;
 void* FUNC_8 (long) ;

enum mi_cmd_result
FUNC_9 (char *VAR_4, char **VAR_5, int VAR_6)
{
  CORE_ADDR VAR_7;
  char VAR_8;
  long VAR_9;


  LONGEST VAR_10;
  void *VAR_11;
  struct cleanup *VAR_12;
  long VAR_13 = 0;
  int VAR_14 = 0;
  char *VAR_15;
  enum opt
    {
      OFFSET_OPT
    };
  static struct mi_opt VAR_16[] =
  {
    {"o", OFFSET_OPT, 1},
    0
  };

  while (1)
    {
      int VAR_17 = FUNC_3 ("mi_cmd_data_write_memory", VAR_6, VAR_5, VAR_16,
      &VAR_14, &VAR_15);
      if (VAR_17 < 0)
 break;
      switch ((enum opt) VAR_17)
 {
 case OFFSET_OPT:
   VAR_13 = FUNC_0 (VAR_15);
   break;
 }
    }
  VAR_5 += VAR_14;
  VAR_6 -= VAR_14;

  if (VAR_6 != 4)
    {
      FUNC_7 (&VAR_2,
   "mi_cmd_data_write_memory: Usage: [-o COLUMN_OFFSET] ADDR FORMAT WORD-SIZE VALUE.");
      return VAR_1;
    }



  VAR_7 = FUNC_4 (VAR_5[0]);


  VAR_8 = VAR_5[1][0];

  VAR_9 = FUNC_0 (VAR_5[2]);


  VAR_7 += (VAR_13 * VAR_9);


  VAR_10 = FUNC_4 (VAR_5[3]);

  VAR_11 = FUNC_8 (VAR_9);
  VAR_12 = FUNC_2 (VAR_3, VAR_11);
  FUNC_5 (VAR_11, VAR_9, VAR_10);

  FUNC_6 (VAR_7, VAR_11, VAR_9);

  FUNC_1 (VAR_12);

  return VAR_0;
}
