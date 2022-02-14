
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cfg {int fd; } ;
typedef int p ;
struct TYPE_5__ {scalar_t__ es_nitems; int es_portmask; int es_macaddr; scalar_t__ id; } ;
typedef TYPE_1__ etherswitch_atu_table_t ;
typedef TYPE_1__ etherswitch_atu_entry_t ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct cfg *VAR_3, int VAR_4, char *VAR_5[])
{
 etherswitch_atu_table_t VAR_6;
 etherswitch_atu_entry_t VAR_7;
 uint32_t VAR_8;

 (void) VAR_4;
 (void) VAR_5;


 FUNC_0(&VAR_6, sizeof(VAR_6));

 if (FUNC_3(VAR_3->fd, VAR_1, &VAR_6) != 0)
  FUNC_1(VAR_0, "ioctl(IOETHERSWITCHGETTABLE)");


 for (VAR_8 = 0; VAR_8 < VAR_6.es_nitems; VAR_8++) {
  FUNC_0(&VAR_7, sizeof(VAR_7));
  VAR_7.id = VAR_8;
  if (FUNC_3(VAR_3->fd, VAR_2, &VAR_7) != 0)
   break;

  FUNC_4(" [%d] %s: portmask 0x%08x\n", VAR_8,
      FUNC_2((void *) &VAR_7.es_macaddr),
      VAR_7.es_portmask);
 }

 return (1);
}
