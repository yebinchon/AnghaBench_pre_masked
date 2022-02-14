
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; scalar_t__ st_size; } ;
struct TYPE_6__ {TYPE_1__ sb; scalar_t__ skip; int type; int name; int org_name; int * pat; } ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(ARCHD *VAR_8)
{
 VAR_8->skip = 0;
 VAR_8->pat = ((void*)0);
 VAR_8->org_name = VAR_8->name;
 switch(VAR_8->sb.st_mode & VAR_0) {
 case 131:
  VAR_8->type = VAR_4;
  break;
 case 132:
  VAR_8->type = VAR_3;
  break;
 case 135:
  VAR_8->type = VAR_1;
  break;
 case 134:
  VAR_8->type = VAR_2;
  break;
 case 130:
  VAR_8->type = VAR_7;
  break;
 case 129:
  VAR_8->type = VAR_6;
  break;
 case 133:
 case 128:
 default:




  VAR_8->sb.st_mode = (VAR_8->sb.st_mode & 0xfff) | 128;
  VAR_8->type = VAR_5;
  VAR_8->skip = VAR_8->sb.st_size;
  break;
 }
 if (FUNC_0(VAR_8) < 0)
  return(-1);
 return(0);
}
