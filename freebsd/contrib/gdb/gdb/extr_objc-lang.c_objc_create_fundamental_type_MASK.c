
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
 struct type* FUNC_0 (int ,int,int ,char*,struct objfile*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static struct type *
FUNC_2 (struct objfile *VAR_12, int VAR_13)
{
  struct type *VAR_14 = ((void*)0);

  switch (VAR_13)
    {
      default:





 VAR_14 = FUNC_0 (VAR_9,
     VAR_3 / VAR_0,
     0, "<?type?>", VAR_12);
        FUNC_1 ("internal error: no C/C++ fundamental type %d", VAR_13);
 break;
      case 128:
 VAR_14 = FUNC_0 (VAR_10,
     VAR_0 / VAR_0,
     0, "void", VAR_12);
 break;
      case 146:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_0 / VAR_0,
     0, "char", VAR_12);
 break;
      case 138:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_0 / VAR_0,
     0, "signed char", VAR_12);
 break;
      case 133:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_0 / VAR_0,
     VAR_11, "unsigned char", VAR_12);
 break;
      case 139:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_7 / VAR_0,
     0, "short", VAR_12);
 break;
      case 134:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_7 / VAR_0,
     0, "short", VAR_12);
 break;
      case 129:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_7 / VAR_0,
     VAR_11, "unsigned short", VAR_12);
 break;
      case 142:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_3 / VAR_0,
     0, "int", VAR_12);
 break;
      case 137:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_3 / VAR_0,
     0, "int", VAR_12);
 break;
      case 132:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_3 / VAR_0,
     VAR_11, "unsigned int", VAR_12);
 break;
      case 141:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_4 / VAR_0,
     0, "long", VAR_12);
 break;
      case 136:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_4 / VAR_0,
     0, "long", VAR_12);
 break;
      case 131:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_4 / VAR_0,
     VAR_11, "unsigned long", VAR_12);
 break;
      case 140:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_6 / VAR_0,
     0, "long long", VAR_12);
 break;
      case 135:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_6 / VAR_0,
     0, "signed long long", VAR_12);
 break;
      case 130:
 VAR_14 = FUNC_0 (VAR_9,
     VAR_6 / VAR_0,
     VAR_11, "unsigned long long", VAR_12);
 break;
      case 143:
 VAR_14 = FUNC_0 (VAR_8,
     VAR_2 / VAR_0,
     0, "float", VAR_12);
 break;
      case 145:
 VAR_14 = FUNC_0 (VAR_8,
     VAR_1 / VAR_0,
     0, "double", VAR_12);
 break;
      case 144:
 VAR_14 = FUNC_0 (VAR_8,
     VAR_5 / VAR_0,
     0, "long double", VAR_12);
 break;
      }
  return (VAR_14);
}
