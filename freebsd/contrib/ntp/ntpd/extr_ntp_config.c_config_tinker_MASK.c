
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tinker; } ;
typedef TYPE_2__ config_tree ;
struct TYPE_6__ {int d; } ;
struct TYPE_8__ {int attr; TYPE_1__ value; struct TYPE_8__* link; } ;
typedef TYPE_3__ attr_val ;


 TYPE_3__* FUNC_0 (int ) ;
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
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(
 config_tree *VAR_10
 )
{
 attr_val * VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_10->tinker);
 for (; VAR_11 != ((void*)0); VAR_11 = VAR_11->link) {
  switch (VAR_11->attr) {

  default:
   FUNC_1("config_tinker: attr-token=%d", VAR_11->attr);

  case 137:
   VAR_12 = VAR_0;
   break;

  case 136:
   VAR_12 = VAR_8;
   break;

  case 135:
   VAR_12 = VAR_1;
   break;

  case 134:
   VAR_12 = VAR_2;
   break;

  case 133:
   VAR_12 = VAR_7;
   break;

  case 132:
   VAR_12 = VAR_3;
   break;

  case 131:
   VAR_12 = VAR_4;
   break;

  case 130:
   VAR_12 = VAR_5;
   break;

  case 129:
   VAR_12 = VAR_6;
   break;

  case 128:
   VAR_12 = VAR_9;
   break;
  }
  FUNC_2(VAR_12, VAR_11->value.d);
 }
}
