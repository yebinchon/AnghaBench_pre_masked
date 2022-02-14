
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* initg; } ;
typedef TYPE_2__ _ISO2022EncodingInfo ;
struct TYPE_8__ {int vers; int interm; int final; int type; } ;
typedef TYPE_3__ _ISO2022Charset ;
struct TYPE_6__ {int vers; int interm; int final; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,TYPE_3__*) ;
 int FUNC_1 (char*,char const) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static __inline int
FUNC_3(_ISO2022EncodingInfo * __restrict VAR_3,
    const char * __restrict VAR_4)
{
 _ISO2022Charset VAR_5;

 if (FUNC_2("INIT", &VAR_4[0], 4) ||
     !FUNC_1("0123", VAR_4[4]) ||
     VAR_4[5] != '=')
  return (VAR_1);

 if (FUNC_0(&VAR_4[6], &VAR_5) != 0)
  return (VAR_2);

 VAR_3->initg[VAR_4[4] - '0'].type = VAR_5.type;
 VAR_3->initg[VAR_4[4] - '0'].final = VAR_5.final;
 VAR_3->initg[VAR_4[4] - '0'].interm = VAR_5.interm;
 VAR_3->initg[VAR_4[4] - '0'].vers = VAR_5.vers;

 return (VAR_0);
}
