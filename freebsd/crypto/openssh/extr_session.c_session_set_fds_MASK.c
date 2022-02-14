
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {int chanid; int self; } ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssh*,int,int,int,int,int ,int,int,int ) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(struct ssh *VAR_3, Session *VAR_4,
    int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{




 if (VAR_4->chanid == -1)
  FUNC_1("no channel for session %d", VAR_4->self);
 FUNC_0(VAR_3, VAR_4->chanid,
     VAR_6, VAR_5, VAR_7,
     VAR_8 ? VAR_0 : VAR_1,
     1, VAR_9, VAR_2);
}
