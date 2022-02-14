
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int epref; int flag; } ;
struct ccparty {TYPE_3__ epref; TYPE_2__* conn; } ;
struct TYPE_5__ {TYPE_1__* cc; } ;
struct TYPE_4__ {int log; } ;


 int FUNC_0 (struct ccparty*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccparty*,int ) ;
 int FUNC_2 (struct ccparty*,char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct ccparty *VAR_2)
{

 if (VAR_2->conn->cc->log & VAR_0)
  FUNC_2(VAR_2, "destroyed %u.%u", VAR_2->epref.flag,
      VAR_2->epref.epref);

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2);
}
