
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tag; char* name; int type; char** table; } ;
typedef TYPE_1__ arm_attr_public_tag ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static unsigned char *
FUNC_6 (unsigned char *VAR_1)
{
  int VAR_2;
  unsigned int VAR_3;
  int VAR_4;
  arm_attr_public_tag *VAR_5;
  unsigned VAR_6;
  int VAR_7;

  VAR_2 = FUNC_4 (VAR_1, &VAR_3);
  VAR_1 += VAR_3;
  VAR_5 = ((void*)0);
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
    {
      if (VAR_0[VAR_6].tag == VAR_2)
 {
   VAR_5 = &VAR_0[VAR_6];
   break;
 }
    }

  if (VAR_5)
    {
      FUNC_3 ("  Tag_%s: ", VAR_5->name);
      switch (VAR_5->type)
 {
 case 0:
   switch (VAR_2)
     {
     case 7:
       VAR_4 = FUNC_4 (VAR_1, &VAR_3);
       VAR_1 += VAR_3;
       switch (VAR_4)
  {
  case 0: FUNC_3 ("None\n"); break;
  case 'A': FUNC_3 ("Application\n"); break;
  case 'R': FUNC_3 ("Realtime\n"); break;
  case 'M': FUNC_3 ("Microcontroller\n"); break;
  default: FUNC_3 ("??? (%d)\n", VAR_4); break;
  }
       break;

     case 32:
       VAR_4 = FUNC_4 (VAR_1, &VAR_3);
       VAR_1 += VAR_3;
       FUNC_3 ("flag = %d, vendor = %s\n", VAR_4, VAR_1);
       VAR_1 += FUNC_5((char *)VAR_1) + 1;
       break;

     default:
       FUNC_1();
     }
   return VAR_1;

 case 1:
 case 2:
   VAR_7 = VAR_5->type;
   break;

 default:
   FUNC_2 (VAR_5->type & 0x80);
   VAR_4 = FUNC_4 (VAR_1, &VAR_3);
   VAR_1 += VAR_3;
   VAR_7 = VAR_5->type & 0x7f;
   if (VAR_4 >= VAR_7)
     FUNC_3 ("??? (%d)\n", VAR_4);
   else
     FUNC_3 ("%s\n", VAR_5->table[VAR_4]);
   return VAR_1;
 }
    }
  else
    {
      if (VAR_2 & 1)
 VAR_7 = 1;
      else
 VAR_7 = 2;
      FUNC_3 ("  Tag_unknown_%d: ", VAR_2);
    }

  if (VAR_7 == 1)
    {
      FUNC_3 ("\"%s\"\n", VAR_1);
      VAR_1 += FUNC_5((char *)VAR_1) + 1;
    }
  else
    {
      VAR_4 = FUNC_4 (VAR_1, &VAR_3);
      VAR_1 += VAR_3;
      FUNC_3 ("%d (0x%x)\n", VAR_4, VAR_4);
    }

  return VAR_1;
}
