
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct dvd_authinfo {int region; int format; int agid; int lba; int keychal; } ;
struct TYPE_18__ {int pdrc; } ;
struct TYPE_17__ {int agid; } ;
struct TYPE_16__ {int agid; } ;
struct TYPE_15__ {int lba; int agid; } ;
struct TYPE_14__ {int key; int agid; } ;
struct TYPE_13__ {int agid; } ;
struct TYPE_12__ {int agid; } ;
struct TYPE_11__ {int chal; int agid; } ;
struct TYPE_19__ {int type; TYPE_8__ hrpcs; TYPE_7__ lsa; TYPE_6__ lsasf; TYPE_5__ lstk; TYPE_4__ hsk; TYPE_3__ lsc; TYPE_2__ lsk; TYPE_1__ hsc; } ;
typedef TYPE_9__ l_dvd_authinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(l_dvd_authinfo *VAR_13, int *VAR_14,
    struct dvd_authinfo *VAR_15)
{
 switch (VAR_13->type) {
 case 133:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_3;
  VAR_15->agid = VAR_13->lsa.agid;
  break;
 case 137:
  *VAR_14 = VAR_1;
  VAR_15->format = VAR_9;
  VAR_15->agid = VAR_13->hsc.agid;
  FUNC_0(VAR_15->keychal, VAR_13->hsc.chal, 10);
  break;
 case 130:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_6;
  VAR_15->agid = VAR_13->lsk.agid;
  break;
 case 131:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_5;
  VAR_15->agid = VAR_13->lsc.agid;
  break;
 case 136:
  *VAR_14 = VAR_1;
  VAR_15->format = VAR_10;
  VAR_15->agid = VAR_13->hsk.agid;
  FUNC_0(VAR_15->keychal, VAR_13->hsk.key, 5);
  break;
 case 128:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_8;
  VAR_15->agid = VAR_13->lstk.agid;
  VAR_15->lba = VAR_13->lstk.lba;
  break;
 case 132:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_4;
  VAR_15->agid = VAR_13->lsasf.agid;
  break;
 case 134:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_2;
  VAR_15->agid = VAR_13->lsa.agid;
  break;
 case 129:
  *VAR_14 = VAR_0;
  VAR_15->format = VAR_7;
  break;
 case 135:
  *VAR_14 = VAR_1;
  VAR_15->format = VAR_11;
  VAR_15->region = VAR_13->hrpcs.pdrc;
  break;
 default:
  return (VAR_12);
 }
 return (0);
}
