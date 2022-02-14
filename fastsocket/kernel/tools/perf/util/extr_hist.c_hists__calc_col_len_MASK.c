
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u16 ;
struct hists {int dummy; } ;
struct TYPE_14__ {TYPE_2__* map; TYPE_1__* sym; } ;
struct hist_entry {TYPE_10__* branch_info; TYPE_3__ ms; int thread; } ;
struct TYPE_20__ {TYPE_8__* map; TYPE_7__* sym; } ;
struct TYPE_19__ {int dso; } ;
struct TYPE_18__ {scalar_t__ namelen; } ;
struct TYPE_17__ {TYPE_5__* map; TYPE_4__* sym; } ;
struct TYPE_16__ {int dso; } ;
struct TYPE_15__ {scalar_t__ namelen; } ;
struct TYPE_13__ {int dso; } ;
struct TYPE_12__ {int namelen; } ;
struct TYPE_11__ {TYPE_9__ to; TYPE_6__ from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hists*,int ,int) ;
 int FUNC_2 (struct hists*,int ,int) ;
 int FUNC_3 (struct hists*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct hists *VAR_9, struct hist_entry *VAR_10)
{
 const unsigned int VAR_11 = VAR_0 / 4;
 u16 VAR_12;

 if (VAR_10->ms.sym)
  FUNC_1(VAR_9, VAR_5, VAR_10->ms.sym->namelen + 4);
 else
  FUNC_3(VAR_9, VAR_2);

 VAR_12 = FUNC_4(VAR_10->thread);
 if (FUNC_1(VAR_9, VAR_1, VAR_12))
  FUNC_2(VAR_9, VAR_8, VAR_12 + 6);

 if (VAR_10->ms.map) {
  VAR_12 = FUNC_0(VAR_10->ms.map->dso);
  FUNC_1(VAR_9, VAR_2, VAR_12);
 }

 if (VAR_10->branch_info) {
  int VAR_13;




  if (VAR_10->branch_info->from.sym) {
   VAR_13 = (int)VAR_10->branch_info->from.sym->namelen + 4;
   FUNC_1(VAR_9, VAR_6, VAR_13);

   VAR_13 = FUNC_0(VAR_10->branch_info->from.map->dso);
   FUNC_1(VAR_9, VAR_3, VAR_13);
  } else {
   VAR_13 = VAR_11 + 4 + 2;
   FUNC_1(VAR_9, VAR_6, VAR_13);
   FUNC_3(VAR_9, VAR_3);
  }

  if (VAR_10->branch_info->to.sym) {
   VAR_13 = (int)VAR_10->branch_info->to.sym->namelen + 4;
   FUNC_1(VAR_9, VAR_7, VAR_13);

   VAR_13 = FUNC_0(VAR_10->branch_info->to.map->dso);
   FUNC_1(VAR_9, VAR_4, VAR_13);
  } else {
   VAR_13 = VAR_11 + 4 + 2;
   FUNC_1(VAR_9, VAR_7, VAR_13);
   FUNC_3(VAR_9, VAR_4);
  }
 }
}
