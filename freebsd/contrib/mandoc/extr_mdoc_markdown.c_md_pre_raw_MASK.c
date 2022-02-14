
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int tok; } ;
struct TYPE_2__ {char* prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct roff_node *VAR_3)
{
 const char *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3->tok)->prefix) != ((void*)0)) {
  FUNC_1(VAR_4);
  VAR_2 &= ~VAR_0;
  if (*VAR_4 == '`')
   VAR_1++;
 }
 return 1;
}
