
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_parse_state {TYPE_1__* ops; } ;
struct TYPE_2__ {char* string; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct filter_parse_state*) ;
 char FUNC_1 (struct filter_parse_state*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct filter_parse_state *VAR_1, char VAR_2)
{
 char VAR_3 = FUNC_1(VAR_1);
 char VAR_4[3];
 int VAR_5;

 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_3;
 VAR_4[2] = '\0';

 for (VAR_5 = 0; FUNC_2(VAR_1->ops[VAR_5].string, "OP_NONE"); VAR_5++) {
  if (!FUNC_2(VAR_4, VAR_1->ops[VAR_5].string)) {
   FUNC_0(VAR_1);
   return VAR_1->ops[VAR_5].id;
  }
 }

 VAR_4[1] = '\0';

 for (VAR_5 = 0; FUNC_2(VAR_1->ops[VAR_5].string, "OP_NONE"); VAR_5++) {
  if (!FUNC_2(VAR_4, VAR_1->ops[VAR_5].string))
   return VAR_1->ops[VAR_5].id;
 }

 return VAR_0;
}
