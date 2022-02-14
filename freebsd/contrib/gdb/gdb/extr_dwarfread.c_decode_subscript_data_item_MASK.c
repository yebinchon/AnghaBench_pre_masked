
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ,...) ;
 struct type* FUNC_2 (struct type*,struct type*,struct type*) ;
 struct type* FUNC_3 (struct type*,struct type*,unsigned long,unsigned long) ;
 int VAR_6 ;
 struct type* FUNC_4 (char*) ;
 struct type* FUNC_5 (unsigned short) ;
 struct type* FUNC_6 (int ,int ) ;
 int VAR_7 ;
 void* FUNC_7 (char*,int,int ,int ) ;

__attribute__((used)) static struct type *
FUNC_8 (char *VAR_8, char *VAR_9)
{
  struct type *VAR_10 = ((void*)0);
  struct type *VAR_11;
  struct type *VAR_12;
  struct type *VAR_13;
  unsigned int VAR_14;
  unsigned short VAR_15;
  unsigned long VAR_16;
  unsigned long VAR_17;
  int VAR_18;

  VAR_14 = FUNC_7 (VAR_8, VAR_5, VAR_3,
      VAR_6);
  VAR_8 += VAR_5;
  switch (VAR_14)
    {
    case 136:
      VAR_10 = FUNC_4 (VAR_8);
      break;
    case 135:
      VAR_15 = FUNC_7 (VAR_8, VAR_4, VAR_3,
     VAR_6);
      VAR_12 = FUNC_5 (VAR_15);
      VAR_8 += VAR_4;
      VAR_18 = FUNC_0 (VAR_6);
      VAR_16 = FUNC_7 (VAR_8, VAR_18, VAR_3, VAR_6);
      VAR_8 += VAR_18;
      VAR_17 = FUNC_7 (VAR_8, VAR_18, VAR_3, VAR_6);
      VAR_8 += VAR_18;
      VAR_11 = FUNC_8 (VAR_8, VAR_9);
      if (VAR_11 == ((void*)0))
 {

   FUNC_1 (&VAR_7,
       "DIE @ 0x%x \"%s\", can't decode subscript data items",
       VAR_0, VAR_1);
   VAR_11 = FUNC_6 (VAR_6, VAR_2);
 }
      VAR_13 = FUNC_3 ((struct type *) ((void*)0), VAR_12,
         VAR_16, VAR_17);
      VAR_10 = FUNC_2 ((struct type *) ((void*)0), VAR_11, VAR_13);
      break;
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
      FUNC_1 (&VAR_7,
   "DIE @ 0x%x \"%s\", array subscript format 0x%x not handled yet",
   VAR_0, VAR_1, VAR_14);
      VAR_11 = FUNC_6 (VAR_6, VAR_2);
      VAR_13 = FUNC_3 ((struct type *) ((void*)0), VAR_11, 0, 0);
      VAR_10 = FUNC_2 ((struct type *) ((void*)0), VAR_11, VAR_13);
      break;
    default:
      FUNC_1 (&VAR_7,
   "DIE @ 0x%x \"%s\", unknown array subscript format %x", VAR_0,
   VAR_1, VAR_14);
      VAR_11 = FUNC_6 (VAR_6, VAR_2);
      VAR_13 = FUNC_3 ((struct type *) ((void*)0), VAR_11, 0, 0);
      VAR_10 = FUNC_2 ((struct type *) ((void*)0), VAR_11, VAR_13);
      break;
    }
  return (VAR_10);
}
