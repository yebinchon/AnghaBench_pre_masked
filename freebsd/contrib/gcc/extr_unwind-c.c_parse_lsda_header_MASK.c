
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _Unwind_Context {int dummy; } ;
struct TYPE_3__ {unsigned char ttype_encoding; unsigned char const* TType; unsigned char const* action_table; int call_site_encoding; int Start; int LPStart; } ;
typedef TYPE_1__ lsda_header_info ;
typedef int _Unwind_Word ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct _Unwind_Context*) ;
 unsigned char* FUNC_1 (struct _Unwind_Context*,unsigned char,unsigned char const*,int *) ;
 unsigned char* FUNC_2 (unsigned char const*,int*) ;

__attribute__((used)) static const unsigned char *
FUNC_3 (struct _Unwind_Context *VAR_1, const unsigned char *VAR_2,
     lsda_header_info *VAR_3)
{
  _Unwind_Word VAR_4;
  unsigned char VAR_5;

  VAR_3->Start = (VAR_1 ? FUNC_0 (VAR_1) : 0);


  VAR_5 = *VAR_2++;
  if (VAR_5 != VAR_0)
    VAR_2 = FUNC_1 (VAR_1, VAR_5, VAR_2, &VAR_3->LPStart);
  else
    VAR_3->LPStart = VAR_3->Start;


  VAR_3->ttype_encoding = *VAR_2++;
  if (VAR_3->ttype_encoding != VAR_0)
    {
      VAR_2 = FUNC_2 (VAR_2, &VAR_4);
      VAR_3->TType = VAR_2 + VAR_4;
    }
  else
    VAR_3->TType = 0;



  VAR_3->call_site_encoding = *VAR_2++;
  VAR_2 = FUNC_2 (VAR_2, &VAR_4);
  VAR_3->action_table = VAR_2 + VAR_4;

  return VAR_2;
}
