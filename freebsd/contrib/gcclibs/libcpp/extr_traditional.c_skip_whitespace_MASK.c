
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uchar ;
struct TYPE_5__ {char* cur; } ;
struct TYPE_6__ {TYPE_1__ out; } ;
typedef TYPE_2__ cpp_reader ;


 char* FUNC_0 (TYPE_2__*,char const*,int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static const uchar *
FUNC_2 (cpp_reader *VAR_0, const uchar *VAR_1, int VAR_2)
{
  uchar *VAR_3 = VAR_0->out.cur;

  for (;;)
    {
      unsigned int VAR_4 = *VAR_1++;
      *VAR_3++ = VAR_4;

      if (FUNC_1 (VAR_4))
 continue;

      if (VAR_4 == '/' && *VAR_1 == '*' && VAR_2)
 {
   VAR_0->out.cur = VAR_3;
   VAR_1 = FUNC_0 (VAR_0, VAR_1, 0 );
   VAR_3 = VAR_0->out.cur;
   continue;
 }

      VAR_3--;
      break;
    }

  VAR_0->out.cur = VAR_3;
  return VAR_1 - 1;
}
