
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union node* ch2; union node* ch1; } ;
union node {int type; TYPE_1__ nbinary; } ;
struct nbinary {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static union node *
FUNC_1(int VAR_0, union node *VAR_1, union node *VAR_2)
{
 union node *VAR_3;

 VAR_3 = (union node *)FUNC_0(sizeof (struct nbinary));
 VAR_3->type = VAR_0;
 VAR_3->nbinary.ch1 = VAR_1;
 VAR_3->nbinary.ch2 = VAR_2;
 return (VAR_3);
}
