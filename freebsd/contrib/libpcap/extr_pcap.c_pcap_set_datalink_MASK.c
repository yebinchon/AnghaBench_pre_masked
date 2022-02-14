
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_4__ {int dlt_count; int (* set_datalink_op ) (TYPE_1__*,int) ;int linktype; scalar_t__* dlt_list; int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*,...) ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(pcap_t *VAR_2, int VAR_3)
{
 int VAR_4;
 const char *VAR_5;

 if (VAR_3 < 0)
  goto unsupported;

 if (VAR_2->dlt_count == 0 || VAR_2->set_datalink_op == ((void*)0)) {







  if (VAR_2->linktype != VAR_3)
   goto unsupported;




  return (0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->dlt_count; VAR_4++)
  if (VAR_2->dlt_list[VAR_4] == (u_int)VAR_3)
   break;
 if (VAR_4 >= VAR_2->dlt_count)
  goto unsupported;
 if (VAR_2->dlt_count == 2 && VAR_2->dlt_list[0] == VAR_1 &&
     VAR_3 == VAR_0) {
  VAR_2->linktype = VAR_3;
  return (0);
 }
 if (VAR_2->set_datalink_op(VAR_2, VAR_3) == -1)
  return (-1);
 VAR_2->linktype = VAR_3;
 return (0);

unsupported:
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != ((void*)0)) {
  (void) FUNC_1(VAR_2->errbuf, sizeof(VAR_2->errbuf),
      "%s is not one of the DLTs supported by this device",
      VAR_5);
 } else {
  (void) FUNC_1(VAR_2->errbuf, sizeof(VAR_2->errbuf),
      "DLT %d is not one of the DLTs supported by this device",
      VAR_3);
 }
 return (-1);
}
