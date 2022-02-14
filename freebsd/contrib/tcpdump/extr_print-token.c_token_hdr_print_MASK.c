
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct token_header {int token_fc; int token_ac; } ;
struct TYPE_5__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*,int const*) ;

__attribute__((used)) static inline void
FUNC_2(netdissect_options *VAR_0,
                register const struct token_header *VAR_1, register u_int VAR_2,
                register const u_char *VAR_3, register const u_char *VAR_4)
{
 const char *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_3);
 VAR_6 = FUNC_1(VAR_0, VAR_4);

 if (!VAR_0->ndo_qflag)
  FUNC_0((VAR_0, "%02x %02x ",
         VAR_1->token_ac,
         VAR_1->token_fc));
 FUNC_0((VAR_0, "%s > %s, length %u: ",
        VAR_5, VAR_6,
        VAR_2));
}
