
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char cppchar_t ;
struct TYPE_11__ {unsigned int len; unsigned char* text; } ;
struct TYPE_12__ {TYPE_2__ str; } ;
struct TYPE_14__ {TYPE_3__ val; int type; } ;
typedef TYPE_5__ cpp_token ;
struct TYPE_13__ {scalar_t__ in_directive; } ;
struct TYPE_15__ {TYPE_4__ state; TYPE_1__* buffer; } ;
typedef TYPE_6__ cpp_reader ;
struct TYPE_10__ {unsigned char const* cur; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (TYPE_6__*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_1, cpp_token *VAR_2, const unsigned char *VAR_3,
       cppchar_t VAR_4)
{
  unsigned char *VAR_5;
  unsigned int VAR_6, VAR_7;

  VAR_6 = VAR_1->buffer->cur - VAR_3 + 1;



  if (FUNC_1 (VAR_1->buffer->cur[-1]))
    VAR_6--;







  VAR_7 = (VAR_1->state.in_directive && VAR_4 == '/') ? VAR_6 + 2 : VAR_6;

  VAR_5 = FUNC_0 (VAR_1, VAR_7);

  VAR_2->type = VAR_0;
  VAR_2->val.str.len = VAR_7;
  VAR_2->val.str.text = VAR_5;

  VAR_5[0] = '/';
  FUNC_2 (VAR_5 + 1, VAR_3, VAR_6 - 1);


  if (VAR_1->state.in_directive && VAR_4 == '/')
    {
      VAR_5[1] = '*';
      VAR_5[VAR_7 - 2] = '*';
      VAR_5[VAR_7 - 1] = '/';
    }
}
