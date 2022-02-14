
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lastfree; scalar_t__ node; } ;
typedef TYPE_1__ Table ;
typedef int Node ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static Node *FUNC_2 (Table *VAR_0) {
  while (VAR_0->lastfree > VAR_0->node) {
    VAR_0->lastfree--;
    if (FUNC_1(FUNC_0(VAR_0->lastfree)))
      return VAR_0->lastfree;
  }
  return ((void*)0);
}
