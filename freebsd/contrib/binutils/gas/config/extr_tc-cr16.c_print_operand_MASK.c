
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int cc; int rp; int r; int i_r; int prp; int pr; } ;
typedef TYPE_1__ argument ;
struct TYPE_6__ {int size; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_8 (int,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9 (int VAR_3, int VAR_4, argument *VAR_5)
{
  switch (VAR_5->type)
    {
    case 138:
      FUNC_0 (0, VAR_5->cc, VAR_4);
      break;

    case 130:
      FUNC_0 (0, FUNC_6 (VAR_5->r), VAR_4);
      break;

    case 128:
      FUNC_0 (0, FUNC_7 (VAR_5->rp), VAR_4);
      break;

    case 132:
      FUNC_0 (0, FUNC_4 (VAR_5->pr), VAR_4);
      break;

    case 131:
      FUNC_0 (0, FUNC_5 (VAR_5->prp), VAR_4);
      break;

    case 133:





      if (VAR_2->size == 3)
 {
   FUNC_0 (0, FUNC_3 (VAR_5->rp), 0);
   if (FUNC_6 (VAR_5->i_r) == 12)
     FUNC_0 (0, 0, 3);
   else
     FUNC_0 (0, 1, 3);
 }
      else
 {
   FUNC_0 (0, FUNC_3 (VAR_5->rp), 16);
   if (FUNC_6 (VAR_5->i_r) == 12)
     FUNC_0 (0, 0, 19);
   else
     FUNC_0 (0, 1, 19);
 }
      FUNC_8 (VAR_3, VAR_4, VAR_5);
      break;

    case 134:
      if (FUNC_6 (VAR_5->i_r) == 12)
 if (FUNC_1 ("cbitb") || FUNC_1 ("sbitb")
     || FUNC_1 ("tbitb"))
   FUNC_0 (0, 0, 23);
 else FUNC_0 (0, 0, 24);
      else
 if (FUNC_1 ("cbitb") || FUNC_1 ("sbitb")
     || FUNC_1 ("tbitb"))
   FUNC_0 (0, 1, 23);
 else FUNC_0 (0, 1, 24);

      FUNC_8 (VAR_3, VAR_4, VAR_5);
      break;

    case 135:
    case 139:
      FUNC_8 (VAR_3, VAR_4, VAR_5);
      break;

    case 129:
      FUNC_0 (0, FUNC_6 (VAR_5->r), VAR_4);
      break;

    case 137:
      FUNC_8 (VAR_3, VAR_4 , VAR_5);

      FUNC_0 (0, FUNC_6 (VAR_5->r), (VAR_4+16));
      break;

    case 136:
      FUNC_8 (VAR_3, VAR_4 , VAR_5);
      if (VAR_2->size > 1)
 FUNC_0 (0, FUNC_7 (VAR_5->rp), (VAR_4 + 16));
      else if (FUNC_2 (VAR_1) || (FUNC_2 (VAR_0)))
 {
   if (VAR_2->size == 2)
     FUNC_0 (0, FUNC_7 (VAR_5->rp), (VAR_4 - 8));
   else if (VAR_2->size == 1)
     FUNC_0 (0, FUNC_7 (VAR_5->rp), 16);
 }
      else
 FUNC_0 (0, FUNC_7 (VAR_5->rp), VAR_4);
      break;

    default:
      break;
    }
}
