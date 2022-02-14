
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nfsftype ;
struct TYPE_3__ {int na_type; int na_mode; int na_nlink; int na_size; } ;
typedef TYPE_1__ nfsfattr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

void
FUNC_1(nfsfattr *VAR_3, nfsftype VAR_4)
{
  switch (VAR_4) {
  case 129:
    VAR_3->na_type = 129;
    VAR_3->na_mode = VAR_0 | 0555;
    VAR_3->na_nlink = 2;
    VAR_3->na_size = 512;
    break;
  case 128:
    VAR_3->na_type = 128;
    VAR_3->na_mode = VAR_1 | 0777;
    VAR_3->na_nlink = 1;
    VAR_3->na_size = 0;
    break;
  default:
    FUNC_0(VAR_2, "Unknown fattr type %d - ignored", VAR_4);
    break;
  }
}
