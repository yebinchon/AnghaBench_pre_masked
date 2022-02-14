
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eqn_node {char* end; int delim; scalar_t__ cdelim; scalar_t__ odelim; TYPE_1__* node; } ;
struct TYPE_2__ {int pos; int line; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct eqn_node *VAR_1)
{
 if (VAR_1->end[0] == '\0' || VAR_1->end[1] == '\0') {
  FUNC_0(VAR_0,
      VAR_1->node->line, VAR_1->node->pos, "delim");
  if (VAR_1->end[0] != '\0')
   VAR_1->end++;
 } else if (FUNC_1(VAR_1->end, "off", 3) == 0) {
  VAR_1->delim = 0;
  VAR_1->end += 3;
 } else if (FUNC_1(VAR_1->end, "on", 2) == 0) {
  if (VAR_1->odelim && VAR_1->cdelim)
   VAR_1->delim = 1;
  VAR_1->end += 2;
 } else {
  VAR_1->odelim = *VAR_1->end++;
  VAR_1->cdelim = *VAR_1->end++;
  VAR_1->delim = 1;
 }
}
