
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uchar ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_5__ {unsigned int len; char* text; } ;
struct TYPE_6__ {TYPE_1__ str; } ;
struct TYPE_7__ {int type; TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;
typedef int cpp_reader ;


 char* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (char*,char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (cpp_reader *VAR_0, cpp_token *VAR_1, const uchar *VAR_2,
  unsigned int VAR_3, enum cpp_ttype VAR_4)
{
  uchar *VAR_5 = FUNC_0 (VAR_0, VAR_3 + 1);

  FUNC_1 (VAR_5, VAR_2, VAR_3);
  VAR_5[VAR_3] = '\0';
  VAR_1->type = VAR_4;
  VAR_1->val.str.len = VAR_3;
  VAR_1->val.str.text = VAR_5;
}
