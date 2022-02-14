
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int re_status; int re_errno; } ;
struct TYPE_4__ {int cf_stat; TYPE_1__ cf_error; } ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;
 size_t FUNC_3 (char*,size_t,char*,char const*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,size_t) ;

char *
FUNC_6(const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4, VAR_5;

 FUNC_1(VAR_2 != ((void*)0));

 VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  return(0);
 VAR_4 = VAR_0;
 VAR_5 = FUNC_3(VAR_3, VAR_4, "%s: ", VAR_2);
 if (VAR_5 > 0)
  VAR_4 -= VAR_5;
 (void)FUNC_5(VAR_3, FUNC_2(VAR_1.cf_stat), VAR_4 - 1);
 switch (VAR_1.cf_stat) {
 case 138:
  (void) FUNC_5(VAR_3, " - ", VAR_4 - 1);
  (void) FUNC_5(VAR_3,
      FUNC_2(VAR_1.cf_error.re_status), VAR_4 - 4);
  break;

 case 132:
  (void)FUNC_5(VAR_3, " - ", VAR_4 - 1);
  (void)FUNC_5(VAR_3, FUNC_4(VAR_1.cf_error.re_errno),
      VAR_4 - 4);
  break;

 case 140:
 case 143:
 case 142:
 case 133:
 case 129:
 case 136:
 case 139:
 case 130:
 case 144:
 case 137:
 case 134:
 case 135:
 case 145:
 case 128:
 case 131:
 case 141:
 default:
  break;
 }
 VAR_3[VAR_0-1] = '\0';
 return (VAR_3);
}
