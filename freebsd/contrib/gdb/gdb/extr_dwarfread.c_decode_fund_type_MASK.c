
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;

 unsigned int VAR_26 ;
 int FUNC_0 (int *,char*,int ,int ,unsigned int) ;
 int VAR_27 ;
 struct type* FUNC_1 (int ,int ) ;
 struct type* FUNC_2 (struct type*) ;
 int VAR_28 ;

__attribute__((used)) static struct type *
FUNC_3 (unsigned int VAR_29)
{
  struct type *VAR_30 = ((void*)0);

  switch (VAR_29)
    {

    case 128:
      VAR_30 = FUNC_1 (VAR_27, VAR_24);
      break;

    case 151:
      VAR_30 = FUNC_1 (VAR_27, VAR_2);
      break;

    case 140:
      VAR_30 = FUNC_1 (VAR_27, VAR_24);
      VAR_30 = FUNC_2 (VAR_30);
      break;

    case 150:
      VAR_30 = FUNC_1 (VAR_27, VAR_3);
      break;

    case 138:
      VAR_30 = FUNC_1 (VAR_27, VAR_14);
      break;

    case 133:
      VAR_30 = FUNC_1 (VAR_27, VAR_19);
      break;

    case 139:
      VAR_30 = FUNC_1 (VAR_27, VAR_13);
      break;

    case 134:
      VAR_30 = FUNC_1 (VAR_27, VAR_18);
      break;

    case 129:
      VAR_30 = FUNC_1 (VAR_27, VAR_23);
      break;

    case 143:
      VAR_30 = FUNC_1 (VAR_27, VAR_10);
      break;

    case 137:
      VAR_30 = FUNC_1 (VAR_27, VAR_15);
      break;

    case 132:
      VAR_30 = FUNC_1 (VAR_27, VAR_20);
      break;

    case 142:
      VAR_30 = FUNC_1 (VAR_27, VAR_11);
      break;

    case 136:
      VAR_30 = FUNC_1 (VAR_27, VAR_16);
      break;

    case 131:
      VAR_30 = FUNC_1 (VAR_27, VAR_21);
      break;

    case 141:
      VAR_30 = FUNC_1 (VAR_27, VAR_12);
      break;

    case 135:
      VAR_30 = FUNC_1 (VAR_27, VAR_17);
      break;

    case 130:
      VAR_30 = FUNC_1 (VAR_27, VAR_22);
      break;

    case 144:
      VAR_30 = FUNC_1 (VAR_27, VAR_9);
      break;

    case 147:
      VAR_30 = FUNC_1 (VAR_27, VAR_6);
      break;

    case 145:
      VAR_30 = FUNC_1 (VAR_27, VAR_8);
      break;

    case 149:
      VAR_30 = FUNC_1 (VAR_27, VAR_4);
      break;

    case 148:
      VAR_30 = FUNC_1 (VAR_27, VAR_5);
      break;

    case 146:
      VAR_30 = FUNC_1 (VAR_27, VAR_7);
      break;

    }

  if (VAR_30 == ((void*)0))
    {
      VAR_30 = FUNC_1 (VAR_27, VAR_10);
      if (!(VAR_26 <= VAR_29 && VAR_29 <= VAR_25))
 {
   FUNC_0 (&VAR_28,
       "DIE @ 0x%x \"%s\", unexpected fundamental type 0x%x",
       VAR_0, VAR_1, VAR_29);
 }
    }

  return (VAR_30);
}
