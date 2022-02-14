
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_6__ {int lwp_id; } ;
struct TYPE_5__ {int thr_tid; int thr_lwpp; } ;
struct TYPE_7__ {int mapp; TYPE_2__ lwp; TYPE_1__ map; } ;
typedef TYPE_3__ iter_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4 (iter_t *VAR_1, void *VAR_2)
{
  int VAR_3 = VAR_1->map.thr_tid;
  int VAR_4 = !VAR_1->map.thr_lwpp ? 0 : VAR_1->lwp.lwp_id;
  ptid_t VAR_5 = FUNC_0 (FUNC_1 (VAR_0), VAR_3);

  if (!FUNC_3 (VAR_5) && (!VAR_2 || VAR_3 == 1))
    FUNC_2 (VAR_3, VAR_4, VAR_1->mapp, VAR_5);

  return 0;
}
