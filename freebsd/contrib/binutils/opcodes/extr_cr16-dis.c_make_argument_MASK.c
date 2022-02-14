
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_1__ parameter ;
struct TYPE_7__ {int size; int type; int r; int rp; int pr; int prp; int constant; int cc; int i_r; } ;
typedef TYPE_2__ argument ;
struct TYPE_8__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_1__ FUNC_2 (int ,int,int) ;

__attribute__((used)) static void
FUNC_3 (argument * VAR_5, int VAR_6)
{
  int VAR_7;
  parameter VAR_8;

  if ((VAR_4->size == 3) && VAR_5->size >= 16)
    VAR_7 = 48;
  else
    VAR_7 = 32;

  switch (VAR_5->type)
    {
    case 130:
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + VAR_5->size),
                             VAR_7 - VAR_6);
      VAR_5->r = VAR_8.val;
      break;

    case 128:
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + VAR_5->size),
                             VAR_7 - VAR_6);
      VAR_5->rp = VAR_8.val;
      break;

    case 132:
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + VAR_5->size),
                             VAR_7 - VAR_6);
      VAR_5->pr = VAR_8.val;
      break;

    case 131:
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + VAR_5->size),
                             VAR_7 - VAR_6);
      VAR_5->prp = VAR_8.val;
      break;

    case 135:
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + VAR_5->size),
                             VAR_7 - VAR_6);
      VAR_5->constant = VAR_8.val;
      break;

    case 138:
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + VAR_5->size),
                             VAR_7 - VAR_6);

      VAR_5->cc = VAR_8.val;
      break;

    case 134:
      if ((FUNC_0 ("cbitb"))
   || (FUNC_0 ("sbitb"))
   || (FUNC_0 ("tbitb")))
 VAR_8 = FUNC_2 (VAR_3, 8, 9);
      else
 VAR_8 = FUNC_2 (VAR_3, 9, 10);
      VAR_5->i_r = VAR_8.val;
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - VAR_5->size, VAR_7);
      VAR_5->constant = VAR_8.val;
      break;

    case 133:
      VAR_8 = FUNC_2 (VAR_3, VAR_6 + 12, VAR_6 + 13);
      VAR_5->i_r = VAR_8.val;
      VAR_8 = FUNC_2 (VAR_3, VAR_6 + 13, VAR_6 + 16);
      VAR_5->rp = VAR_8.val;
      if (VAR_7 > 32)
 {
   VAR_8 = FUNC_2 (VAR_3, VAR_7 - VAR_6 - 12,
     VAR_7);
   VAR_5->constant = ((VAR_8.val & 0xffff) | (VAR_8.val >> 8 & 0xf0000));
 }
      else if (VAR_4->size == 2)
 {
   VAR_8 = FUNC_2 (VAR_3, VAR_7 - 22, VAR_7);
   VAR_5->constant = (VAR_8.val & 0xf) | (((VAR_8.val >>20) & 0x3) << 4)
     | ((VAR_8.val >>14 & 0x3) << 6) | (((VAR_8.val >>7) & 0x1f) <<7);
 }
      else if (VAR_4->size == 1 && VAR_5->size == 0)
 VAR_5->constant = 0;

      break;

    case 129:
      VAR_8 = FUNC_2 (VAR_3, VAR_7, VAR_7);
      VAR_5->constant = VAR_8.val;
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 + 4),
                             VAR_7 - VAR_6);
      VAR_5->r = VAR_8.val;
      break;

    case 137:
      VAR_8 = FUNC_2 (VAR_3, VAR_6 + 12, VAR_6 + 16);
      VAR_5->r = VAR_8.val;
      VAR_8 = FUNC_2 (VAR_3, VAR_7 - 16, VAR_7);
      VAR_5->constant = VAR_8.val;
      break;

    case 136:
      if (VAR_4->size == 1)
 VAR_8 = FUNC_2 (VAR_3, 12, 16);
      else
 VAR_8 = FUNC_2 (VAR_3, VAR_6 + 12, VAR_6 + 16);
      VAR_5->rp = VAR_8.val;

      if (VAR_7 > 32)
 {
   VAR_8 = FUNC_2 (VAR_3, VAR_7 - VAR_6 - 12,
     VAR_7);
   VAR_5->constant = ((VAR_8.val & 0xffff) | (VAR_8.val >> 8 & 0xf0000));
 }
      else if (VAR_4->size == 2)
 {
   VAR_8 = FUNC_2 (VAR_3, VAR_7 - 16, VAR_7);
   VAR_5->constant = VAR_8.val;
 }
      else if (VAR_4->size == 1 && VAR_5->size != 0)
 {
   VAR_8 = FUNC_2 (VAR_3, 4, 8);
   if (FUNC_0 ("loadw")
       || FUNC_0 ("loadd")
       || FUNC_0 ("storw")
       || FUNC_0 ("stord"))
     VAR_5->constant = (VAR_8.val * 2);
   else
     VAR_5->constant = VAR_8.val;
 }
      else
 VAR_5->constant = 0;

      break;

    case 139:

      if ((FUNC_1 (VAR_0))
   || (FUNC_0 ("bal"))
   || (FUNC_1 (VAR_1))
   || (FUNC_1 (VAR_2)))
 {
   switch (VAR_5->size)
     {
     case 8 :
       VAR_8 = FUNC_2 (VAR_3, 0, VAR_6);
       VAR_5->constant = ((((VAR_8.val&0xf00)>>4)) | (VAR_8.val&0xf));
       break;

     case 24:
       if (VAR_4->size == 3)
  {
    VAR_8 = FUNC_2 (VAR_3, 16, VAR_7);
    VAR_5->constant = ((((VAR_8.val>>16)&0xf) << 20)
     | (((VAR_8.val>>24)&0xf) << 16)
     | (VAR_8.val & 0xffff));
  }
       else if (VAR_4->size == 2)
  {
    VAR_8 = FUNC_2 (VAR_3, 8, VAR_7);
    VAR_5->constant = VAR_8.val;
  }
       break;

     default:
       VAR_8 = FUNC_2 (VAR_3, VAR_7 - (VAR_6 +
        VAR_5->size), VAR_7 - VAR_6);
       VAR_5->constant = VAR_8.val;
       break;
     }
 }
      else
 {
   VAR_8 = FUNC_2 (VAR_3, VAR_7 -
     (VAR_6 + VAR_5->size),
     VAR_7 - VAR_6);
   VAR_5->constant = VAR_8.val;
 }
      break;

    default:
      break;
    }
}
