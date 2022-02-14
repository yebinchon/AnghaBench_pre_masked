
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uchar ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
typedef char cppchar_t ;
typedef int cpp_token ;
struct TYPE_8__ {int skipping; int in_diagnostic; int angled_headers; } ;
struct TYPE_10__ {TYPE_2__* buffer; TYPE_1__ state; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_9__ {char const* cur; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,int *,char const*,int,int) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_10, cpp_token *VAR_11, const uchar *VAR_12)
{
  bool VAR_13 = 0;
  const uchar *VAR_14;
  cppchar_t VAR_15;
  enum cpp_ttype VAR_16;

  VAR_14 = VAR_12;
  VAR_15 = *VAR_14++;
  if (VAR_15 == 'L')
    VAR_15 = *VAR_14++;
  if (VAR_15 == '\"')
    VAR_16 = *VAR_12 == 'L' ? VAR_8: VAR_6;
  else if (VAR_15 == '\'')
    VAR_16 = *VAR_12 == 'L' ? VAR_7: VAR_1;
  else
    VAR_15 = '>', VAR_16 = VAR_4;

  for (;;)
    {
      cppchar_t VAR_17 = *VAR_14++;


      if (VAR_17 == '\\' && !VAR_10->state.angled_headers && *VAR_14 != '\n')
 VAR_14++;
      else if (VAR_17 == VAR_15)
 break;
      else if (VAR_17 == '\n')
 {
   VAR_14--;
   VAR_16 = VAR_5;
   break;
 }
      else if (VAR_17 == '\0')
 VAR_13 = 1;
    }

  if (VAR_13 && !VAR_10->state.skipping)
    FUNC_1 (VAR_10, VAR_3,
        "null character(s) preserved in literal");


  if (VAR_16 == VAR_5
      && FUNC_0 (VAR_10, VAR_9) != VAR_0
      && !VAR_10->state.in_diagnostic
      && !VAR_10->state.skipping)

    FUNC_1 (VAR_10, VAR_2, "missing terminating %c character",
        (int) VAR_15);

  VAR_10->buffer->cur = VAR_14;
  FUNC_2 (VAR_10, VAR_11, VAR_12, VAR_14 - VAR_12, VAR_16);
}
