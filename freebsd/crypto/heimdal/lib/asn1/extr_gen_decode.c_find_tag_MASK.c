
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int tagvalue; int tagclass; } ;
struct TYPE_9__ {int type; TYPE_3__* symbol; TYPE_2__ tag; TYPE_1__* subtype; } ;
typedef TYPE_4__ Type ;
struct TYPE_8__ {TYPE_4__* type; int name; int stype; } ;
struct TYPE_6__ {int type; } ;
typedef int Der_type ;
typedef int Der_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5 (const Type *VAR_24,
   Der_class *VAR_25, Der_type *VAR_26, unsigned *VAR_27)
{
    switch (VAR_24->type) {
    case 150:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_6;
 break;
    case 149:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_7;
 break;
    case 148:
 FUNC_1(1, "Cannot have recursive CHOICE");
    case 147:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_8;
 break;
    case 146:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_9;
 break;
    case 133:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_19;
 break;
    case 145:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_10;
 break;
    case 144:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_11;
 break;
    case 143:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_12;
 break;
    case 142:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_13;
 break;
    case 141:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_14;
 break;
    case 140:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_15;
 break;
    case 139:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_16;
 break;
    case 138:
    case 137:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_1;
 *VAR_27 = VAR_17;
 break;
    case 136:
    case 135:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_1;
 *VAR_27 = VAR_18;
 break;
    case 134:
 *VAR_25 = VAR_24->tag.tagclass;
 *VAR_26 = FUNC_3(VAR_24->subtype->type) ? VAR_2 : VAR_1;
 *VAR_27 = VAR_24->tag.tagvalue;
 break;
    case 132:
 if ((VAR_24->symbol->stype == VAR_4 && VAR_24->symbol->type == ((void*)0))
     || VAR_24->symbol->stype == VAR_3) {
     FUNC_4("%s is imported or still undefined, "
         " can't generate tag checking data in CHOICE "
         "without this information",
         VAR_24->symbol->name);
     FUNC_2(1);
 }
 FUNC_5(VAR_24->symbol->type, VAR_25, VAR_26, VAR_27);
 return;
    case 131:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_20;
 break;
    case 130:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_21;
 break;
    case 151:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_5;
 break;
    case 129:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_22;
 break;
    case 128:
 *VAR_25 = VAR_0;
 *VAR_26 = VAR_2;
 *VAR_27 = VAR_23;
 break;
    default:
 FUNC_0();
    }
}
