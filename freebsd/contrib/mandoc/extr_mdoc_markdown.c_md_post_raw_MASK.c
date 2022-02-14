
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int tok; } ;
struct TYPE_2__ {char* suffix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct roff_node *VAR_4)
{
 const char *VAR_5;

 if ((VAR_5 = FUNC_0(VAR_4->tok)->suffix) != ((void*)0)) {
  VAR_3 &= ~(VAR_1 | VAR_0);
  FUNC_1(VAR_5);
  if (*VAR_5 == '`')
   VAR_2--;
 }
}
