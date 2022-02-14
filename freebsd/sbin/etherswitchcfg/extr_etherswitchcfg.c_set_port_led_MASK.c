
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cfg {int fd; int unit; } ;
typedef int p ;
struct TYPE_4__ {int es_nleds; int* es_led; int es_port; } ;
typedef TYPE_1__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*) ;
 int ** VAR_4 ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct cfg *VAR_5, int VAR_6, char *VAR_7[])
{
 etherswitch_port_t VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_6 < 3)
  return (-1);

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.es_port = VAR_5->unit;
 if (FUNC_3(VAR_5->fd, VAR_2, &VAR_8) != 0)
  FUNC_1(VAR_0, "ioctl(IOETHERSWITCHGETPORT)");

 VAR_9 = FUNC_5(VAR_7[1], ((void*)0), 0);
 if (VAR_9 < 1 || VAR_9 > VAR_8.es_nleds)
  FUNC_2(VAR_1, "invalid led number %s; must be between 1 and %d",
   VAR_7[1], VAR_8.es_nleds);

 VAR_9--;

 for (VAR_10=0; VAR_4[VAR_10] != ((void*)0); VAR_10++) {
  if (FUNC_4(VAR_7[2], VAR_4[VAR_10]) == 0) {
   VAR_8.es_led[VAR_9] = VAR_10;
   break;
  }
 }
 if (VAR_4[VAR_10] == ((void*)0))
  FUNC_2(VAR_1, "invalid led style \"%s\"", VAR_7[2]);

 if (FUNC_3(VAR_5->fd, VAR_3, &VAR_8) != 0)
  FUNC_1(VAR_0, "ioctl(IOETHERSWITCHSETPORT)");

 return (0);
}
