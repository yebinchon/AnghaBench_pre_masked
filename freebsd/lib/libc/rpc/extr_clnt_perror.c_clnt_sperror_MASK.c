
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s1; int s2; } ;
struct TYPE_3__ {int low; int high; } ;
struct rpc_err {int re_status; TYPE_2__ re_lb; TYPE_1__ re_vers; scalar_t__ re_why; int re_errno; } ;
typedef int CLIENT ;


 int FUNC_0 (int *,struct rpc_err*) ;
 int VAR_0 ;
 char* FUNC_1 () ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (char*,size_t,char*,...) ;
 char* FUNC_6 (int ) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,size_t) ;

char *
FUNC_9(CLIENT *VAR_1, const char *VAR_2)
{
 struct rpc_err VAR_3;
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 size_t VAR_7, VAR_8;

 FUNC_2(VAR_1 != ((void*)0));
 FUNC_2(VAR_2 != ((void*)0));

 VAR_5 = FUNC_1();
 if (VAR_5 == ((void*)0))
  return (0);
 VAR_7 = VAR_0;
 VAR_6 = VAR_5;
 FUNC_0(VAR_1, &VAR_3);

 if ((VAR_8 = FUNC_5(VAR_5, VAR_7, "%s: ", VAR_2)) > 0) {
  VAR_5 += VAR_8;
  VAR_7 -= VAR_8;
 }

 (void)FUNC_8(VAR_5, FUNC_4(VAR_3.re_status), VAR_7 - 1);
 VAR_8 = FUNC_7(VAR_5);
 VAR_5 += VAR_8;
 VAR_7 -= VAR_8;

 switch (VAR_3.re_status) {
 case 133:
 case 142:
 case 143:
 case 131:
 case 135:
 case 137:
 case 144:
 case 132:
 case 130:
 case 129:
 case 138:
 case 136:
 case 139:
  break;

 case 140:
 case 141:
  VAR_8 = FUNC_5(VAR_5, VAR_7, "; errno = %s", FUNC_6(VAR_3.re_errno));
  if (VAR_8 > 0) {
   VAR_5 += VAR_8;
   VAR_7 -= VAR_8;
  }
  break;

 case 128:
  VAR_8 = FUNC_5(VAR_5, VAR_7, "; low version = %u, high version = %u",
   VAR_3.re_vers.low, VAR_3.re_vers.high);
  if (VAR_8 > 0) {
   VAR_5 += VAR_8;
   VAR_7 -= VAR_8;
  }
  break;

 case 145:
  VAR_4 = FUNC_3(VAR_3.re_why);
  VAR_8 = FUNC_5(VAR_5, VAR_7, "; why = ");
  if (VAR_8 > 0) {
   VAR_5 += VAR_8;
   VAR_7 -= VAR_8;
  }
  if (VAR_4 != ((void*)0)) {
   VAR_8 = FUNC_5(VAR_5, VAR_7, "%s",VAR_4);
  } else {
   VAR_8 = FUNC_5(VAR_5, VAR_7,
    "(unknown authentication error - %d)",
    (int) VAR_3.re_why);
  }
  if (VAR_8 > 0) {
   VAR_5 += VAR_8;
   VAR_7 -= VAR_8;
  }
  break;

 case 134:
  VAR_8 = FUNC_5(VAR_5, VAR_7, "; low version = %u, high version = %u",
   VAR_3.re_vers.low, VAR_3.re_vers.high);
  if (VAR_8 > 0) {
   VAR_5 += VAR_8;
   VAR_7 -= VAR_8;
  }
  break;

 default:
  VAR_8 = FUNC_5(VAR_5, VAR_7, "; s1 = %u, s2 = %u",
   VAR_3.re_lb.s1, VAR_3.re_lb.s2);
  if (VAR_8 > 0) {
   VAR_5 += VAR_8;
   VAR_7 -= VAR_8;
  }
  break;
 }
 VAR_6[VAR_0-1] = '\0';
 return(VAR_6) ;
}
