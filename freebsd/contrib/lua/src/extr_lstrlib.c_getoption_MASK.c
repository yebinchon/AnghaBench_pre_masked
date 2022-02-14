
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_Number ;
typedef int lua_Integer ;
struct TYPE_6__ {int little; } ;
struct TYPE_5__ {int islittle; int L; void* maxalign; } ;
typedef int KOption ;
typedef TYPE_1__ Header ;


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
 int FUNC_0 (char const**,int) ;
 void* FUNC_1 (TYPE_1__*,char const**,int) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_2__ VAR_10 ;

__attribute__((used)) static KOption FUNC_3 (Header *VAR_11, const char **VAR_12, int *VAR_13) {
  int VAR_14 = *((*VAR_12)++);
  *VAR_13 = 0;
  switch (VAR_14) {
    case 'b': *VAR_13 = sizeof(char); return VAR_2;
    case 'B': *VAR_13 = sizeof(char); return VAR_7;
    case 'h': *VAR_13 = sizeof(short); return VAR_2;
    case 'H': *VAR_13 = sizeof(short); return VAR_7;
    case 'l': *VAR_13 = sizeof(long); return VAR_2;
    case 'L': *VAR_13 = sizeof(long); return VAR_7;
    case 'j': *VAR_13 = sizeof(lua_Integer); return VAR_2;
    case 'J': *VAR_13 = sizeof(lua_Integer); return VAR_7;
    case 'T': *VAR_13 = sizeof(size_t); return VAR_7;




    case 'n': *VAR_13 = sizeof(lua_Number); return VAR_1;
    case 'i': *VAR_13 = FUNC_1(VAR_11, VAR_12, sizeof(int)); return VAR_2;
    case 'I': *VAR_13 = FUNC_1(VAR_11, VAR_12, sizeof(int)); return VAR_7;
    case 's': *VAR_13 = FUNC_1(VAR_11, VAR_12, sizeof(size_t)); return VAR_6;
    case 'c':
      *VAR_13 = FUNC_0(VAR_12, -1);
      if (*VAR_13 == -1)
        FUNC_2(VAR_11->L, "missing size for format option 'c'");
      return VAR_0;
    case 'z': return VAR_8;
    case 'x': *VAR_13 = 1; return VAR_5;
    case 'X': return VAR_4;
    case ' ': break;
    case '<': VAR_11->islittle = 1; break;
    case '>': VAR_11->islittle = 0; break;
    case '=': VAR_11->islittle = VAR_10.little; break;
    case '!': VAR_11->maxalign = FUNC_1(VAR_11, VAR_12, VAR_9); break;
    default: FUNC_2(VAR_11->L, "invalid format option '%c'", VAR_14);
  }
  return VAR_3;
}
