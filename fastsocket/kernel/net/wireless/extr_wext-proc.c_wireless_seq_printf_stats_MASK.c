
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct net_device {int name; scalar_t__ ieee80211_ptr; scalar_t__ wireless_handlers; } ;
struct TYPE_6__ {int updated; scalar_t__ noise; scalar_t__ level; int qual; } ;
struct TYPE_5__ {int beacon; } ;
struct TYPE_4__ {int misc; int retries; int fragment; int code; int nwid; } ;
struct iw_statistics {TYPE_3__ qual; TYPE_2__ miss; TYPE_1__ discard; int status; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iw_statistics* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,char,scalar_t__,char,scalar_t__,char,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_5,
          struct net_device *VAR_6)
{

 struct iw_statistics *VAR_7 = FUNC_0(VAR_6);
 static struct iw_statistics VAR_8 = {};


 if (!VAR_7) {
 }

 if (VAR_7) {
  FUNC_1(VAR_5, "%6s: %04x  %3d%c  %3d%c  %3d%c  %6d %6d %6d "
    "%6d %6d   %6d\n",
      VAR_6->name, VAR_7->status, VAR_7->qual.qual,
      VAR_7->qual.updated & VAR_4
      ? '.' : ' ',
      ((__s32) VAR_7->qual.level) -
      ((VAR_7->qual.updated & VAR_1) ? 0x100 : 0),
      VAR_7->qual.updated & VAR_2
      ? '.' : ' ',
      ((__s32) VAR_7->qual.noise) -
      ((VAR_7->qual.updated & VAR_1) ? 0x100 : 0),
      VAR_7->qual.updated & VAR_3
      ? '.' : ' ',
      VAR_7->discard.nwid, VAR_7->discard.code,
      VAR_7->discard.fragment, VAR_7->discard.retries,
      VAR_7->discard.misc, VAR_7->miss.beacon);

  if (VAR_7 != &VAR_8)
   VAR_7->qual.updated &= ~VAR_0;
 }
}
