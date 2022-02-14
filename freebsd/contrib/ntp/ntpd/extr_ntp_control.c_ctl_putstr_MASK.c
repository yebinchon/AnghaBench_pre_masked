
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* buf; int len; } ;
typedef TYPE_1__ CtlMemBufT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(
 const char * VAR_1,
 const char * VAR_2,
 size_t VAR_3
 )
{
 CtlMemBufT VAR_4[4];

 VAR_4[0].buf = VAR_1;
 VAR_4[0].len = FUNC_1(VAR_1);
 if (VAR_2 && VAR_3) {
     VAR_4[1].buf = "=\"";
     VAR_4[1].len = 2;
     VAR_4[2].buf = VAR_2;
     VAR_4[2].len = VAR_3;
     VAR_4[3].buf = "\"";
     VAR_4[3].len = 1;
     FUNC_0(VAR_4, 4, VAR_0);
 } else {
     VAR_4[1].buf = "=\"\"";
     VAR_4[1].len = 3;
     FUNC_0(VAR_4, 2, VAR_0);
 }
}
