
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dvd_authinfo {int rpc_scheme; int region; int user_rsts; int vend_rsts; int reg_type; int asf; int cgms; int cp_sec; int cpm; int keychal; int agid; } ;
struct TYPE_14__ {int rpc_scheme; int region_mask; int ucca; int vra; int type; } ;
struct TYPE_13__ {int asf; } ;
struct TYPE_12__ {int cgms; int cp_sec; int cpm; int title_key; } ;
struct TYPE_11__ {int chal; } ;
struct TYPE_10__ {int key; } ;
struct TYPE_9__ {int agid; } ;
struct TYPE_15__ {int type; TYPE_6__ lrpcs; TYPE_5__ lsasf; TYPE_4__ lstk; TYPE_3__ lsc; TYPE_2__ lsk; TYPE_1__ lsa; } ;
typedef TYPE_7__ l_dvd_authinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct dvd_authinfo *VAR_2, l_dvd_authinfo *VAR_3)
{
 switch (VAR_3->type) {
 case 133:
  VAR_3->lsa.agid = VAR_2->agid;
  break;
 case 137:
  VAR_3->type = 130;
  break;
 case 130:
  FUNC_0(VAR_3->lsk.key, VAR_2->keychal, sizeof(VAR_3->lsk.key));
  break;
 case 131:
  FUNC_0(VAR_3->lsc.chal, VAR_2->keychal, sizeof(VAR_3->lsc.chal));
  break;
 case 136:
  VAR_3->type = VAR_1;
  break;
 case 128:
  FUNC_0(VAR_3->lstk.title_key, VAR_2->keychal,
      sizeof(VAR_3->lstk.title_key));
  VAR_3->lstk.cpm = VAR_2->cpm;
  VAR_3->lstk.cp_sec = VAR_2->cp_sec;
  VAR_3->lstk.cgms = VAR_2->cgms;
  break;
 case 132:
  VAR_3->lsasf.asf = VAR_2->asf;
  break;
 case 134:
  break;
 case 129:
  VAR_3->lrpcs.type = VAR_2->reg_type;
  VAR_3->lrpcs.vra = VAR_2->vend_rsts;
  VAR_3->lrpcs.ucca = VAR_2->user_rsts;
  VAR_3->lrpcs.region_mask = VAR_2->region;
  VAR_3->lrpcs.rpc_scheme = VAR_2->rpc_scheme;
  break;
 case 135:
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
