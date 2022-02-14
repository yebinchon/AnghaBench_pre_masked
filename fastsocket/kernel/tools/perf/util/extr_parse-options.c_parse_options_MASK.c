
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char** argv; int * opt; } ;
struct option {char* long_name; int type; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct parse_opt_ctx_t*) ;
 int FUNC_3 (struct parse_opt_ctx_t*,int,char const**,int) ;
 int FUNC_4 (struct parse_opt_ctx_t*,struct option const*,char const* const*) ;
 int FUNC_5 (int,char const**) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const* const*,struct option const*) ;

int FUNC_8(int VAR_1, const char **VAR_2, const struct option *VAR_3,
    const char * const VAR_4[], int VAR_5)
{
 struct parse_opt_ctx_t VAR_6;

 FUNC_5(VAR_1, VAR_2);

 FUNC_3(&VAR_6, VAR_1, VAR_2, VAR_5);
 switch (FUNC_4(&VAR_6, VAR_3, VAR_4)) {
 case 129:
  FUNC_1(129);
 case 130:
  break;
 case 128:
  while (VAR_3->type != VAR_0) {
   FUNC_6("--%s ", VAR_3->long_name);
   VAR_3++;
  }
  FUNC_1(130);
 default:
  if (VAR_6.argv[0][1] == '-') {
   FUNC_0("unknown option `%s'", VAR_6.argv[0] + 2);
  } else {
   FUNC_0("unknown switch `%c'", *VAR_6.opt);
  }
  FUNC_7(VAR_4, VAR_3);
 }

 return FUNC_2(&VAR_6);
}
