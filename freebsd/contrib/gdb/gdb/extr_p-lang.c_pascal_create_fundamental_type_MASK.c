
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
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
 struct type* FUNC_0 (int ,int,int ,char*,struct objfile*) ;
 int FUNC_1 (char*,int) ;

struct type *
FUNC_2 (struct objfile *VAR_13, int VAR_14)
{
  struct type *VAR_15 = ((void*)0);

  switch (VAR_14)
    {
    default:




      VAR_15 = FUNC_0 (VAR_10,
   VAR_3 / VAR_0,
   0, "<?type?>", VAR_13);
      FUNC_1 ("internal error: no Pascal fundamental type %d", VAR_14);
      break;
    case 128:
      VAR_15 = FUNC_0 (VAR_11,
   VAR_0 / VAR_0,
   0, "void", VAR_13);
      break;
    case 146:
      VAR_15 = FUNC_0 (VAR_8,
   VAR_0 / VAR_0,
   0, "char", VAR_13);
      break;
    case 138:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_0 / VAR_0,
   0, "shortint", VAR_13);
      break;
    case 133:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_0 / VAR_0,
   VAR_12, "byte", VAR_13);
      break;
    case 139:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_7 / VAR_0,
   0, "integer", VAR_13);
      break;
    case 134:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_7 / VAR_0,
   0, "integer", VAR_13);
      break;
    case 129:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_7 / VAR_0,
   VAR_12, "word", VAR_13);
      break;
    case 142:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_3 / VAR_0,
   0, "longint", VAR_13);
      break;
    case 137:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_3 / VAR_0,
   0, "longint", VAR_13);
      break;
    case 132:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_3 / VAR_0,
   VAR_12, "cardinal", VAR_13);
      break;
    case 141:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_4 / VAR_0,
   0, "long", VAR_13);
      break;
    case 136:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_4 / VAR_0,
   0, "long", VAR_13);
      break;
    case 131:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_4 / VAR_0,
   VAR_12, "unsigned long", VAR_13);
      break;
    case 140:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_6 / VAR_0,
   0, "long long", VAR_13);
      break;
    case 135:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_6 / VAR_0,
   0, "signed long long", VAR_13);
      break;
    case 130:
      VAR_15 = FUNC_0 (VAR_10,
   VAR_6 / VAR_0,
   VAR_12, "unsigned long long", VAR_13);
      break;
    case 143:
      VAR_15 = FUNC_0 (VAR_9,
   VAR_2 / VAR_0,
   0, "float", VAR_13);
      break;
    case 145:
      VAR_15 = FUNC_0 (VAR_9,
   VAR_1 / VAR_0,
   0, "double", VAR_13);
      break;
    case 144:
      VAR_15 = FUNC_0 (VAR_9,
   VAR_5 / VAR_0,
   0, "extended", VAR_13);
      break;
    }
  return (VAR_15);
}
