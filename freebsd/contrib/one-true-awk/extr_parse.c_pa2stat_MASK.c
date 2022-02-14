
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ntype; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*,TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_3 ;

Node *FUNC_3(Node *VAR_4, Node *VAR_5, Node *VAR_6)
{
 Node *VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, FUNC_1(VAR_3));
 if (VAR_3++ >= VAR_1)
  FUNC_0( "limited to %d pat,pat statements", VAR_1 );
 VAR_7->ntype = VAR_0;
 return(VAR_7);
}
