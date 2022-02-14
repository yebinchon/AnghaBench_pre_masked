
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ length; int data; } ;
struct TYPE_11__ {scalar_t__ keytype; TYPE_3__ keyvalue; } ;
struct TYPE_12__ {TYPE_4__ key; TYPE_2__* salt; } ;
struct TYPE_8__ {scalar_t__ length; int data; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ salt; } ;
typedef TYPE_5__ Key ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(Key *VAR_0, int VAR_1, Key *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
     if ((VAR_0[VAR_4].salt != ((void*)0) && VAR_2[VAR_5].salt == ((void*)0))
  || (VAR_0[VAR_4].salt == ((void*)0) && VAR_2[VAR_5].salt != ((void*)0)))
  continue;

     if (VAR_0[VAR_4].salt != ((void*)0)) {
  if (VAR_0[VAR_4].salt->type != VAR_2[VAR_5].salt->type)
      continue;
  if (VAR_0[VAR_4].salt->salt.length != VAR_2[VAR_5].salt->salt.length)
      continue;
  if (FUNC_0 (VAR_0[VAR_4].salt->salt.data, VAR_2[VAR_5].salt->salt.data,
       VAR_0[VAR_4].salt->salt.length) != 0)
      continue;
     }
     if (VAR_0[VAR_4].key.keytype != VAR_2[VAR_5].key.keytype)
  continue;
     if (VAR_0[VAR_4].key.keyvalue.length != VAR_2[VAR_5].key.keyvalue.length)
  continue;
     if (FUNC_0 (VAR_0[VAR_4].key.keyvalue.data, VAR_2[VAR_5].key.keyvalue.data,
   VAR_0[VAR_4].key.keyvalue.length) != 0)
  continue;

     return 1;
 }
    }
    return 0;
}
