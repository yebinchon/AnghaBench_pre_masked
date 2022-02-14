
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int q_back; } ;
typedef TYPE_1__ qelem ;
struct TYPE_6__ {int h_mask; char* h_hostname; char* h_lochost; char* h_arch; char* h_os; char* h_cluster; TYPE_1__* h_ether; TYPE_1__* h_config; } ;
typedef TYPE_2__ host ;
typedef int dict_ent ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*) ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 void* FUNC_7 () ;
 int FUNC_8 (char*,char) ;
 char* FUNC_9 (char*) ;

void
FUNC_10(host *VAR_3, int VAR_4, char *VAR_5)
{
  int VAR_6 = 1 << VAR_4;

  if (VAR_3->h_mask & VAR_6) {
    FUNC_5("host field \"%s\" already set", VAR_1[VAR_4]);
    return;
  }
  VAR_3->h_mask |= VAR_6;

  switch (VAR_4) {

  case 129:{
      char *VAR_7 = FUNC_9(VAR_5);
      dict_ent *VAR_8 = FUNC_3(VAR_0, VAR_5);

      if (VAR_8)
 FUNC_5("duplicate host %s!", VAR_5);
      else
 FUNC_2(VAR_0, VAR_5, (char *) VAR_3);
      VAR_3->h_hostname = VAR_5;
      FUNC_4(VAR_7, VAR_2);
      if (FUNC_8(VAR_7, '.') != 0)
 FUNC_0(VAR_7);
      else
 VAR_3->h_lochost = VAR_7;
    }
    break;

  case 131:{
      qelem *VAR_9;
      qelem *VAR_10 = (qelem *) VAR_5;

      VAR_3->h_mask &= ~VAR_6;
      if (VAR_3->h_config)
 VAR_9 = VAR_3->h_config;
      else
 VAR_9 = VAR_3->h_config = FUNC_7();
      FUNC_6(VAR_10, VAR_9->q_back);
    }
    break;

  case 130:{
      qelem *VAR_11;
      qelem *VAR_12 = (qelem *) VAR_5;

      VAR_3->h_mask &= ~VAR_6;
      if (VAR_3->h_ether)
 VAR_11 = VAR_3->h_ether;
      else
 VAR_11 = VAR_3->h_ether = FUNC_7();
      FUNC_6(VAR_12, VAR_11->q_back);
    }
    break;

  case 133:
    VAR_3->h_arch = VAR_5;
    break;

  case 128:
    VAR_3->h_os = VAR_5;
    break;

  case 132:
    VAR_3->h_cluster = VAR_5;
    break;

  default:
    FUNC_1();
    break;
  }
}
