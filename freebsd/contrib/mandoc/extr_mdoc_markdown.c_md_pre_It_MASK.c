
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_node {int type; TYPE_3__* norm; TYPE_1__* parent; } ;
struct TYPE_5__ {int type; int count; int comp; } ;
struct TYPE_6__ {TYPE_2__ Bl; } ;
struct TYPE_4__ {struct roff_node* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,int) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_5(struct roff_node *VAR_12)
{
 struct roff_node *VAR_13;

 switch (VAR_12->type) {
 case 130:
  return 1;

 case 128:
  VAR_13 = VAR_12->parent->parent;
  if (VAR_13->norm->Bl.comp == 0 &&
      VAR_13->norm->Bl.type != 140)
   VAR_10 |= VAR_4;
  VAR_10 |= VAR_2;

  switch (VAR_13->norm->Bl.type) {
  case 133:
   VAR_10 |= VAR_1;
   return 0;
  case 134:
  case 138:
  case 132:
   VAR_10 |= VAR_1;
   return 1;
  case 131:
  case 136:
   VAR_10 |= VAR_4;
   return 1;
  case 141:
   FUNC_2("*\t");
   break;
  case 139:
  case 135:
   FUNC_2("-\t");
   break;
  case 137:
   FUNC_1();
   if (VAR_13->norm->Bl.count < 99)
    VAR_13->norm->Bl.count++;
   FUNC_4("%d.\t", VAR_13->norm->Bl.count);
   VAR_7 &= ~VAR_0;
   break;
  case 140:
   VAR_10 |= VAR_1;
   return 0;
  default:
   return 0;
  }
  VAR_10 &= ~VAR_5;
  VAR_10 |= VAR_3;
  VAR_9 = 0;
  FUNC_3('\t');
  if (VAR_6 || VAR_11)
   VAR_8++;
  return 0;

 case 129:
  VAR_13 = VAR_12->parent->parent;
  switch (VAR_13->norm->Bl.type) {
  case 132:
   VAR_10 |= VAR_1;
   break;
  case 131:
  case 136:
   FUNC_0(VAR_12);
   break;
  default:
   break;
  }
  return 1;

 default:
  return 0;
 }
}
