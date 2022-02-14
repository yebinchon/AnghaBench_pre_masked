
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_callbacks {int undef; int define; int read_pch; int valid_pch; int def_pragma; int ident; int line_change; } ;
struct c_fileinfo {int time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct cpp_callbacks* FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct c_fileinfo* FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

void
FUNC_3 (void)
{
  struct cpp_callbacks *VAR_16;
  struct c_fileinfo *VAR_17;



  VAR_17 = FUNC_1 ("<top level>");
  if (VAR_12)
    {
      VAR_13 = 0;
      VAR_3 = FUNC_2 ();
      VAR_17->time = VAR_3;
    }

  VAR_16 = FUNC_0 (VAR_14);

  VAR_16->line_change = VAR_9;
  VAR_16->ident = VAR_8;
  VAR_16->def_pragma = VAR_6;
  VAR_16->valid_pch = VAR_5;
  VAR_16->read_pch = VAR_4;


  if (VAR_11 == VAR_0
      && (VAR_15 == VAR_1
   || VAR_15 == VAR_2))
    {
      VAR_16->define = VAR_7;
      VAR_16->undef = VAR_10;
    }
}
