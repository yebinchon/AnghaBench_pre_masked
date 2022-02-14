
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_6__ {int start_line; int curch; int cur_line; } ;
struct TYPE_7__ {TYPE_2__ command_info; } ;
struct TYPE_5__ {int * handle; } ;
struct TYPE_8__ {TYPE_3__ detail; TYPE_1__ generic; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 unsigned char VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char FUNC_1 (unsigned char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int) ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned char) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *) ;

void
FUNC_9 (void)
{
  int VAR_10;
  int VAR_11;
  int VAR_12, VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;
  WINDOW *VAR_17;
  char *VAR_18;
  int VAR_19;



  if (VAR_8 == VAR_2 && VAR_4 == 0)
    FUNC_4 (VAR_3);

  if (VAR_8 == VAR_3)
    VAR_18 = "";
  else
    VAR_18 = VAR_9;

  VAR_14 = -1;
  VAR_15 = -1;
  VAR_17 = VAR_1->generic.handle;
  VAR_19 = VAR_1->detail.command_info.start_line;
  FUNC_7 (VAR_17, VAR_19, 0);
  VAR_10 = 0;
  VAR_11 = 1;
  for (VAR_16 = 0; VAR_18 && VAR_18[VAR_16]; VAR_16++)
    {
      FUNC_5 (VAR_17, VAR_18[VAR_16]);
      FUNC_3 (VAR_17, VAR_13, VAR_12);
      if (VAR_12 < VAR_10)
        VAR_11++;
      VAR_10 = VAR_12;
    }
  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
    {
      unsigned char VAR_20;

      VAR_20 = (unsigned char) VAR_5[VAR_16];
      if (VAR_16 == VAR_6)
 {
          FUNC_3 (VAR_17, VAR_15, VAR_14);
 }

      if (FUNC_0 (VAR_20) || VAR_20 == VAR_0)
 {
          FUNC_5 (VAR_17, '^');
          FUNC_5 (VAR_17, FUNC_0 (VAR_20) ? FUNC_1 (VAR_20) : '?');
 }
      else
 {
          FUNC_5 (VAR_17, VAR_20);
 }
      if (VAR_20 == '\n')
        {
          FUNC_3 (VAR_17, VAR_1->detail.command_info.start_line,
                 VAR_1->detail.command_info.curch);
        }
      FUNC_3 (VAR_17, VAR_13, VAR_12);
      if (VAR_12 < VAR_10)
        VAR_11++;
      VAR_10 = VAR_12;
    }
  FUNC_6 (VAR_17);
  FUNC_3 (VAR_17, VAR_1->detail.command_info.start_line,
         VAR_1->detail.command_info.curch);
  if (VAR_15 >= 0)
    {
      FUNC_7 (VAR_17, VAR_15, VAR_14);
      VAR_1->detail.command_info.cur_line = VAR_15;
      VAR_1->detail.command_info.curch = VAR_14;
    }
  VAR_1->detail.command_info.start_line -= VAR_11 - 1;

  FUNC_8 (VAR_17);
  FUNC_2(VAR_7);
}
