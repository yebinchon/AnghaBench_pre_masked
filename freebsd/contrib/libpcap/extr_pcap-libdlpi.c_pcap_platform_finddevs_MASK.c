
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pcap_if_list_t ;
struct TYPE_5__ {scalar_t__ lw_err; TYPE_2__* lw_list; int member_1; int * member_0; } ;
typedef TYPE_1__ linkwalk_t ;
struct TYPE_6__ {struct TYPE_6__* lnl_next; int linkname; } ;
typedef TYPE_2__ linknamelist_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int ,int ,int *,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (char*,int ,scalar_t__,char*) ;

int
FUNC_5(pcap_if_list_t *VAR_5, char *VAR_6)
{
 int VAR_7 = 0;

 linknamelist_t *VAR_8, *VAR_9;
 linkwalk_t VAR_10 = {((void*)0), 0};
 int VAR_11;




 if (FUNC_3(VAR_5, VAR_6,
     VAR_3, VAR_2) == -1)
  return (-1);
 FUNC_0(VAR_4, &VAR_10, 0);

 if (VAR_10.lw_err != 0) {
  FUNC_4(VAR_6, VAR_0,
      VAR_10.lw_err, "dlpi_walk");
  VAR_7 = -1;
  goto done;
 }


 for (VAR_8 = VAR_10.lw_list; VAR_8 != ((void*)0); VAR_8 = VAR_8->lnl_next) {




  if (FUNC_1(VAR_5, VAR_8->linkname, 0, VAR_2,
      ((void*)0), VAR_6) == ((void*)0))
   VAR_7 = -1;
 }
done:
 VAR_11 = VAR_1;
 for (VAR_8 = VAR_10.lw_list; VAR_8 != ((void*)0); VAR_8 = VAR_9) {
  VAR_9 = VAR_8->lnl_next;
  FUNC_2(VAR_8);
 }
 VAR_1 = VAR_11;

 return (VAR_7);
}
