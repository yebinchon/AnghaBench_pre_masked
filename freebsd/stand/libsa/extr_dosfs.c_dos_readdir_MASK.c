
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct open_file {int dummy; } ;
struct dirent {int d_fileno; int d_reclen; int d_name; int d_type; } ;
typedef int dd ;
struct TYPE_7__ {int* name; int attr; int* clus; int ext; } ;
struct TYPE_6__ {int seq; int chk; } ;
struct TYPE_5__ {TYPE_4__ de; TYPE_3__ xde; } ;
typedef TYPE_1__ DOS_DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (struct open_file*,TYPE_1__*,int,size_t*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct open_file *VAR_7, struct dirent *VAR_8)
{

    u_char VAR_9[261];
    DOS_DIR VAR_10;
    size_t VAR_11;
    u_int VAR_12, VAR_13, VAR_14;
    int VAR_15;

    VAR_13 = VAR_12 = 0;
    while (1) {
 VAR_14 = VAR_13;
 VAR_13 = 0;
 VAR_15 = FUNC_3(VAR_7, &VAR_10, sizeof(VAR_10), &VAR_11);
 if (VAR_15)
     return (VAR_15);
 if (VAR_11 == sizeof(VAR_10))
     return (VAR_2);
 if (VAR_10.de.name[0] == 0)
     return (VAR_2);


 if (VAR_10.de.name[0] == 0xe5)
     continue;


 if (VAR_10.de.attr & VAR_4) {




     if ((VAR_10.de.attr & VAR_5) == VAR_6) {





  if (VAR_10.xde.seq & 0x40)
      VAR_12 = VAR_10.xde.chk;
  else if (VAR_10.xde.seq != VAR_14 - 1 || VAR_10.xde.chk != VAR_12)
      continue;
  VAR_13 = VAR_10.xde.seq & ~0x40;
  if (VAR_13 < 1 || VAR_13 > 20) {
      VAR_13 = 0;
      continue;
  }
  FUNC_1(VAR_9, &VAR_10.xde);
     } else {

  continue;
     }
 } else {
     if (VAR_14 == 1) {
  VAR_13 = FUNC_2(VAR_10.de.name, VAR_10.de.ext);
  if (VAR_13 == VAR_12)
      break;
     } else {
  FUNC_0(VAR_9, &VAR_10.de);
  break;
     }
     VAR_13 = 0;
 }
    }

    VAR_8->d_fileno = (VAR_10.de.clus[1] << 8) + VAR_10.de.clus[0];
    VAR_8->d_reclen = sizeof(*VAR_8);
    VAR_8->d_type = (VAR_10.de.attr & VAR_3) ? VAR_0 : VAR_1;
    FUNC_4(VAR_8->d_name, VAR_9, sizeof(VAR_8->d_name));
    return (0);
}
