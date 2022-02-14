
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct TYPE_8__ {int k; } ;
struct block {TYPE_2__ s; struct slist* stmts; } ;
struct TYPE_9__ {scalar_t__ linktype; } ;
typedef TYPE_3__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct block* FUNC_2 (TYPE_3__*,int ) ;
 struct slist* FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static struct block *
FUNC_4(compiler_state_t *VAR_6)
{
 struct slist *VAR_7;
 struct block *VAR_8;

 if (VAR_6->linktype == VAR_5)
 {


  VAR_7 = FUNC_3(VAR_6, VAR_2|VAR_3|VAR_0);
  VAR_7->s.k = 4;

  VAR_8 = FUNC_2(VAR_6, FUNC_0(VAR_1));

  VAR_8->stmts = VAR_7;
  VAR_8->s.k = FUNC_1(VAR_4);
 }
 else
 {
  VAR_8 = ((void*)0);
 }

 return VAR_8;
}
