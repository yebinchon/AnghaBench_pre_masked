
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int* lastbcomm; } ;
struct TYPE_11__ {char* alt_name; TYPE_1__* frp; } ;
struct TYPE_10__ {char* name; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EX_PRIVATE ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_2__*,int*,size_t,size_t) ;
 int FUNC_1 (TYPE_2__*,char*,size_t,int*,size_t) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int*,int*,size_t) ;
 int VAR_1 ;
 size_t FUNC_5 (int*) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_2, EXCMD *VAR_3, CHAR_T *VAR_4, size_t VAR_5, CHAR_T *VAR_6, size_t *VAR_7, CHAR_T **VAR_8, size_t *VAR_9, int VAR_10)
{
 EX_PRIVATE *VAR_11;
 char *VAR_12;
 size_t VAR_13, VAR_14, VAR_15, VAR_16;
 CHAR_T *VAR_17;
 CHAR_T *VAR_18;
 size_t VAR_19;


 for (VAR_17 = *VAR_8, VAR_13 = *VAR_9, VAR_14 = *VAR_7; VAR_5 > 0; --VAR_5, ++VAR_4)
  switch (*VAR_4) {
  case '!':
   if (!VAR_10)
    goto ins_ch;
   VAR_11 = FUNC_2(VAR_2);
   if (VAR_11->lastbcomm == ((void*)0)) {
    FUNC_6(VAR_2, VAR_1,
        "115|No previous command to replace \"!\"");
    return (1);
   }
   VAR_14 += VAR_16 = FUNC_5(VAR_11->lastbcomm);
   VAR_15 = VAR_6 - VAR_17;
   FUNC_0(VAR_2, VAR_17, VAR_13, VAR_14);
   VAR_6 = VAR_17 + VAR_15;
   FUNC_4(VAR_6, VAR_11->lastbcomm, VAR_16);
   VAR_6 += VAR_16;
   FUNC_3(VAR_3, VAR_0);
   break;
  case '%':
   if ((VAR_12 = VAR_2->frp->name) == ((void*)0)) {
    FUNC_6(VAR_2, VAR_1,
        "116|No filename to substitute for %%");
    return (1);
   }
   VAR_16 = FUNC_7(VAR_12);
   VAR_14 += VAR_16;
   VAR_15 = VAR_6 - VAR_17;
   FUNC_0(VAR_2, VAR_17, VAR_13, VAR_14);
   VAR_6 = VAR_17 + VAR_15;
   FUNC_1(VAR_2, VAR_12, VAR_16, VAR_18, VAR_19);
   FUNC_4(VAR_6, VAR_18, VAR_19);
   VAR_6 += VAR_19;
   FUNC_3(VAR_3, VAR_0);
   break;
  case '#':
   if ((VAR_12 = VAR_2->alt_name) == ((void*)0)) {
    FUNC_6(VAR_2, VAR_1,
        "117|No filename to substitute for #");
    return (1);
   }
   VAR_14 += VAR_16 = FUNC_7(VAR_12);
   VAR_15 = VAR_6 - VAR_17;
   FUNC_0(VAR_2, VAR_17, VAR_13, VAR_14);
   VAR_6 = VAR_17 + VAR_15;
   FUNC_1(VAR_2, VAR_12, VAR_16, VAR_18, VAR_19);
   FUNC_4(VAR_6, VAR_18, VAR_19);
   VAR_6 += VAR_19;
   FUNC_3(VAR_3, VAR_0);
   break;
  case '\\':






   if (VAR_5 > 1 &&
       (VAR_4[1] == '%' || VAR_4[1] == '#' || VAR_4[1] == '!')) {
    ++VAR_4;
    --VAR_5;
   }

  default:
ins_ch: ++VAR_14;
   VAR_15 = VAR_6 - VAR_17;
   FUNC_0(VAR_2, VAR_17, VAR_13, VAR_14);
   VAR_6 = VAR_17 + VAR_15;
   *VAR_6++ = *VAR_4;
  }


 ++VAR_14;
 VAR_15 = VAR_6 - VAR_17;
 FUNC_0(VAR_2, VAR_17, VAR_13, VAR_14);
 VAR_6 = VAR_17 + VAR_15;
 *VAR_6 = '\0';


 *VAR_7 = VAR_14 - 1;
 *VAR_8 = VAR_17;
 *VAR_9 = VAR_13;
 return (0);
}
