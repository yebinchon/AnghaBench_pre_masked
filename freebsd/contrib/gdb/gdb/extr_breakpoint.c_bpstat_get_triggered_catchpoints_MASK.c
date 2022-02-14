
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ type; char* triggered_dll_pathname; } ;
struct bpstats {struct bpstats* next; struct breakpoint* breakpoint_at; } ;
typedef struct bpstats* bpstat ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bpstats* FUNC_3 (struct breakpoint*,struct bpstats*) ;
 int FUNC_4 (struct bpstats**) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

void
FUNC_9 (bpstat VAR_5, bpstat *VAR_6)
{
  struct bpstats VAR_7[1];
  bpstat VAR_8 = VAR_7;
  struct breakpoint *VAR_9;
  char *VAR_10;

  FUNC_4 (VAR_6);
  VAR_7->next = ((void*)0);

  for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {

      VAR_9 = VAR_5->breakpoint_at;
      if (VAR_9 == ((void*)0))
 break;
      if ((VAR_9->type != VAR_1) &&
   (VAR_9->type != VAR_3) &&
   (VAR_9->type != VAR_0) &&
   (VAR_9->type != VAR_2))

 continue;


      VAR_8 = FUNC_3 (VAR_9, VAR_8);
      *VAR_8 = *VAR_5;
      VAR_8->next = ((void*)0);
      VAR_8 = VAR_7->next;
      VAR_10 = ((void*)0);

      if (VAR_10)
 {
   VAR_9->triggered_dll_pathname = (char *)
     FUNC_8 (FUNC_6 (VAR_10) + 1);
   FUNC_5 (VAR_9->triggered_dll_pathname, VAR_10);
 }
      else
 VAR_9->triggered_dll_pathname = ((void*)0);
    }

  *VAR_6 = VAR_8;
}
