
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct cfg {int fd; int unit; } ;
typedef int p ;
struct TYPE_4__ {int es_flags; int es_port; } ;
typedef TYPE_1__ etherswitch_port_t ;


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
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct cfg *VAR_10, int VAR_11, char *VAR_12[])
{
 char *VAR_13;
 int VAR_14;
 uint32_t VAR_15;
 etherswitch_port_t VAR_16;

 if (VAR_11 < 1)
  return (-1);

 VAR_14 = 0;
 VAR_15 = 0;
 VAR_13 = VAR_12[0];
 if (FUNC_4(VAR_13, "none") != 0) {
  if (*VAR_13 == '-') {
   VAR_14++;
   VAR_13++;
  }
  if (FUNC_3(VAR_13, "striptag") == 0)
   VAR_15 = VAR_6;
  else if (FUNC_3(VAR_13, "addtag") == 0)
   VAR_15 = VAR_0;
  else if (FUNC_3(VAR_13, "firstlock") == 0)
   VAR_15 = VAR_4;
  else if (FUNC_3(VAR_13, "droptagged") == 0)
   VAR_15 = VAR_2;
  else if (FUNC_3(VAR_13, "dropuntagged") == 0)
   VAR_15 = VAR_3;
  else if (FUNC_3(VAR_13, "doubletag") == 0)
   VAR_15 = VAR_1;
  else if (FUNC_3(VAR_13, "ingress") == 0)
   VAR_15 = VAR_5;
 }
 FUNC_0(&VAR_16, sizeof(VAR_16));
 VAR_16.es_port = VAR_10->unit;
 if (FUNC_2(VAR_10->fd, VAR_8, &VAR_16) != 0)
  FUNC_1(VAR_7, "ioctl(IOETHERSWITCHGETPORT)");
 if (VAR_14)
  VAR_16.es_flags &= ~VAR_15;
 else
  VAR_16.es_flags |= VAR_15;
 if (FUNC_2(VAR_10->fd, VAR_9, &VAR_16) != 0)
  FUNC_1(VAR_7, "ioctl(IOETHERSWITCHSETPORT)");
 return (0);
}
