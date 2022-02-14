
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cmd; } ;
struct TYPE_8__ {char* name; void* type; TYPE_2__ fun; int key; } ;
typedef TYPE_3__ funckey_t ;
struct TYPE_6__ {TYPE_3__* t_fkey; } ;
struct TYPE_9__ {TYPE_1__ el_terminal; } ;
typedef TYPE_4__ EditLine ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
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
 void* VAR_21 ;

__attribute__((used)) static void
FUNC_0(EditLine *VAR_22)
{
 funckey_t *VAR_23 = VAR_22->el_terminal.t_fkey;

 VAR_23[VAR_1].name = L"down";
 VAR_23[VAR_1].key = VAR_16;
 VAR_23[VAR_1].fun.cmd = VAR_11;
 VAR_23[VAR_1].type = VAR_21;

 VAR_23[VAR_6].name = L"up";
 VAR_23[VAR_6].key = VAR_20;
 VAR_23[VAR_6].fun.cmd = VAR_13;
 VAR_23[VAR_6].type = VAR_21;

 VAR_23[VAR_4].name = L"left";
 VAR_23[VAR_4].key = VAR_18;
 VAR_23[VAR_4].fun.cmd = VAR_12;
 VAR_23[VAR_4].type = VAR_21;

 VAR_23[VAR_5].name = L"right";
 VAR_23[VAR_5].key = VAR_19;
 VAR_23[VAR_5].fun.cmd = VAR_10;
 VAR_23[VAR_5].type = VAR_21;

 VAR_23[VAR_3].name = L"home";
 VAR_23[VAR_3].key = VAR_17;
 VAR_23[VAR_3].fun.cmd = VAR_8;
 VAR_23[VAR_3].type = VAR_21;

 VAR_23[VAR_2].name = L"end";
 VAR_23[VAR_2].key = VAR_14;
 VAR_23[VAR_2].fun.cmd = VAR_9;
 VAR_23[VAR_2].type = VAR_21;

 VAR_23[VAR_0].name = L"delete";
 VAR_23[VAR_0].key = VAR_15;
 VAR_23[VAR_0].fun.cmd = VAR_7;
 VAR_23[VAR_0].type = VAR_21;
}
