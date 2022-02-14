
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_fl {int qsize; int sidx; int flags; int lockname; } ;
struct TYPE_3__ {int spg_len; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {int flags; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,struct sge_fl*,int) ;
 int FUNC_1 (struct adapter*,struct sge_fl*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct adapter *VAR_4, struct sge_fl *VAR_5, int VAR_6, int VAR_7, char *VAR_8)
{

 VAR_5->qsize = VAR_6;
 VAR_5->sidx = VAR_6 - VAR_4->params.sge.spg_len / VAR_1;
 FUNC_3(VAR_5->lockname, VAR_8, sizeof(VAR_5->lockname));
 if (VAR_4->flags & VAR_0 &&
     ((!FUNC_2(VAR_4) && VAR_3) ||
     (FUNC_2(VAR_4) && VAR_3 == 1)))
  VAR_5->flags |= VAR_2;
 FUNC_0(VAR_4, VAR_5, VAR_7);
 FUNC_1(VAR_4, VAR_5);
}
