
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct hdaa_audio_ctl {int left; int right; int dir; int index; TYPE_1__* widget; scalar_t__ muted; scalar_t__ forcemute; } ;
typedef int nid_t ;
struct TYPE_2__ {int devinfo; int nid; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_audio_ctl *VAR_4, uint32_t VAR_5,
      int VAR_6, int VAR_7)
{
 nid_t VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_4->widget->nid;


 if (VAR_5 != VAR_0)
  VAR_4->muted = VAR_5;
 if (VAR_6 != VAR_1)
  VAR_4->left = VAR_6;
 if (VAR_7 != VAR_1)
  VAR_4->right = VAR_7;

 if (VAR_4->forcemute) {
  VAR_9 = 1;
  VAR_10 = 1;
  VAR_6 = 0;
  VAR_7 = 0;
 } else {
  VAR_9 = FUNC_0(VAR_4->muted);
  VAR_10 = FUNC_1(VAR_4->muted);
  VAR_6 = VAR_4->left;
  VAR_7 = VAR_4->right;
 }

 if (VAR_4->dir & VAR_3)
  FUNC_2(VAR_4->widget->devinfo, VAR_8, VAR_4->index,
      VAR_9, VAR_10, VAR_6, VAR_7, 0);
 if (VAR_4->dir & VAR_2)
  FUNC_2(VAR_4->widget->devinfo, VAR_8, VAR_4->index,
      VAR_9, VAR_10, VAR_6, VAR_7, 1);
}
