
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ voidp ;
struct svc_req {int dummy; } ;
typedef int fserver ;
struct TYPE_3__ {int as_opt; int as_str; } ;
typedef TYPE_1__ amq_setopt ;
struct TYPE_4__ {int logfile; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

int *
FUNC_7(voidp VAR_8, struct svc_req *VAR_9)
{
  static int VAR_10;
  amq_setopt *VAR_11 = (amq_setopt *) VAR_8;

  VAR_10 = 0;

  switch (VAR_11->as_opt) {

  case 131:
    if (FUNC_1(VAR_11->as_str))
      VAR_10 = VAR_1;
    break;

  case 129:
    if (VAR_6.logfile && VAR_11->as_str
 && FUNC_0(VAR_6.logfile, VAR_11->as_str)) {
      if (FUNC_6(VAR_11->as_str, VAR_7, 0))
 VAR_10 = VAR_1;
    } else {
      VAR_10 = VAR_0;
    }
    break;

  case 128:
    if (FUNC_5(VAR_11->as_str))
      VAR_10 = VAR_1;
    break;

  case 130:
    if (VAR_4 == VAR_2) {
      FUNC_4(VAR_3, "amq says flush cache");
      VAR_5 = 0;
      FUNC_2((fserver *) ((void*)0));
      FUNC_3((fserver *) ((void*)0));
    }
    break;
  }

  return &VAR_10;
}
