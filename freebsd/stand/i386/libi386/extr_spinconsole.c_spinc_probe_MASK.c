
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct console {int dummy; } ;
struct TYPE_3__ {int (* c_probe ) (struct console*) ;} ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct console*) ;

__attribute__((used)) static void
FUNC_1(struct console *VAR_2)
{

 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0[0];
 VAR_1->c_probe(VAR_2);
}
