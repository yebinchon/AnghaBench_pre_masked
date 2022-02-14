
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int section_count; } ;
typedef TYPE_1__ bfd ;
struct TYPE_11__ {int id; TYPE_1__* owner; int index; } ;
typedef TYPE_2__ asection ;


 int FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static asection *
FUNC_2 (bfd *VAR_1, asection *VAR_2)
{
  static int VAR_3 = 0x10;

  VAR_2->id = VAR_3;
  VAR_2->index = VAR_1->section_count;
  VAR_2->owner = VAR_1;

  if (! FUNC_0 (VAR_1, VAR_0, (VAR_1, VAR_2)))
    return ((void*)0);

  VAR_3++;
  VAR_1->section_count++;
  FUNC_1 (VAR_1, VAR_2);
  return VAR_2;
}
