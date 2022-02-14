
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int secbuf; } ;
struct TYPE_8__ {int unit; int part; } ;
struct TYPE_9__ {int * gdev; TYPE_2__ dsk; } ;
struct TYPE_7__ {scalar_t__ ent_lba_start; scalar_t__ ent_lba_end; } ;


 char* VAR_0 ;
 size_t VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,TYPE_2__*,scalar_t__,char*,int ,size_t) ;
 int VAR_6 ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (char*,char*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(void)
{

 if (FUNC_4(&VAR_5.dsk, VAR_2->secbuf) == -1) {
  FUNC_5("%s: unable to load GPT\n", VAR_0);
  return (-1);
 }
 if (FUNC_3(&VAR_4, &VAR_5.dsk, VAR_5.dsk.part) == -1) {
  FUNC_5("%s: no UFS partition was found\n", VAR_0);
  return (-1);
 }
 VAR_3 = 0;
 return (0);
}
