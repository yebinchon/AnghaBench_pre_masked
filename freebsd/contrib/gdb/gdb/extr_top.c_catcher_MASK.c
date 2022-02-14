
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int return_mask ;
typedef enum return_reason { ____Placeholder_return_reason } return_reason ;
typedef int (* catch_exceptions_ftype ) (struct ui_out*,void*) ;
typedef int SIGJMP_BUF ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 char* FUNC_2 () ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (struct cleanup*) ;
 struct cleanup* FUNC_4 () ;
 int FUNC_5 (struct ui_out*,void*) ;
 int FUNC_6 (int) ;
 struct ui_out* VAR_5 ;

__attribute__((used)) static void
FUNC_7 (catch_exceptions_ftype *VAR_6,
  struct ui_out *VAR_7,
  void *VAR_8,
  int *VAR_9,
  enum return_reason *VAR_10,
  char *VAR_11,
  char **VAR_12,
  return_mask VAR_13)
{
  SIGJMP_BUF *VAR_14;
  SIGJMP_BUF VAR_15;
  struct cleanup *VAR_16;
  char *VAR_17;
  char *VAR_18;
  struct ui_out *VAR_19;



  int VAR_20;



  int VAR_21;



  VAR_17 = VAR_3;
  VAR_18 = VAR_4;

  if (VAR_13 & VAR_0)
    VAR_3 = VAR_11;
  if (VAR_13 & VAR_1)
    VAR_4 = VAR_11;



  VAR_19 = VAR_5;
  VAR_5 = VAR_7;




  VAR_16 = FUNC_4 ();



  VAR_14 = VAR_2;
  VAR_2 = &VAR_15;
  VAR_20 = FUNC_1 (VAR_15);
  if (!VAR_20)
    VAR_21 = (*VAR_6) (VAR_7, VAR_8);
  else
    {
      VAR_21 = 0;



      if (VAR_12)
 *VAR_12 = FUNC_2 ();
    }
  VAR_2 = VAR_14;
  FUNC_3 (VAR_16);

  VAR_5 = VAR_19;

  if (VAR_13 & VAR_1)
    VAR_4 = VAR_18;
  if (VAR_13 & VAR_0)
    VAR_3 = VAR_17;





  if (!VAR_20 || (VAR_13 & FUNC_0 (VAR_20)))
    {
      *VAR_9 = VAR_21;
      *VAR_10 = VAR_20;
      return;
    }




  FUNC_6 (VAR_20);
}
