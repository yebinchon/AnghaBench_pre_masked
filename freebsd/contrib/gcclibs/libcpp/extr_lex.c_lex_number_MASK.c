
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uchar ;
struct normalize_state {int dummy; } ;
struct TYPE_9__ {int len; char* text; } ;
typedef TYPE_2__ cpp_string ;
struct TYPE_10__ {TYPE_1__* buffer; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_8__ {char* cur; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (struct normalize_state*) ;
 scalar_t__ FUNC_2 (char const,char const) ;
 char* FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,struct normalize_state*) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_6 (cpp_reader *VAR_0, cpp_string *VAR_1,
     struct normalize_state *VAR_2)
{
  const uchar *VAR_3;
  const uchar *VAR_4;
  uchar *VAR_5;

  VAR_4 = VAR_0->buffer->cur - 1;
  do
    {
      VAR_3 = VAR_0->buffer->cur;


      while (FUNC_0 (*VAR_3) || *VAR_3 == '.' || FUNC_2 (*VAR_3, VAR_3[-1]))
 {
   VAR_3++;
   FUNC_1 (VAR_2);
 }

      VAR_0->buffer->cur = VAR_3;
    }
  while (FUNC_4 (VAR_0, 0, VAR_2));

  VAR_1->len = VAR_3 - VAR_4;
  VAR_5 = FUNC_3 (VAR_0, VAR_1->len + 1);
  FUNC_5 (VAR_5, VAR_4, VAR_1->len);
  VAR_5[VAR_1->len] = '\0';
  VAR_1->text = VAR_5;
}
