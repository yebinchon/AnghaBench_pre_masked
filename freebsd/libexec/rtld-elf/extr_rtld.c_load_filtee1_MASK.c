
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ name; int obj; struct TYPE_7__* next; } ;
struct TYPE_6__ {scalar_t__ z_loadfltr; scalar_t__ strtab; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Needed_Entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,TYPE_1__*,int,int,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(Obj_Entry *VAR_4, Needed_Entry *VAR_5, int VAR_6,
    RtldLockState *VAR_7)
{

    for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
 VAR_5->obj = FUNC_0(VAR_4->strtab + VAR_5->name, -1, VAR_4,
   VAR_6, ((VAR_3 || VAR_4->z_loadfltr) ? VAR_2 : VAR_0) |
   VAR_1, VAR_7);
    }
}
