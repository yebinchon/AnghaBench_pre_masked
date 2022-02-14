
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netconfig {scalar_t__ nc_semantics; int nc_protofmly; int nc_proto; } ;
struct netbuf {int dummy; } ;
typedef TYPE_1__* rpcb_entry_list_ptr ;
struct TYPE_5__ {scalar_t__ r_nc_semantics; scalar_t__* r_maddr; int r_nc_protofmly; int r_nc_proto; } ;
typedef TYPE_2__ rpcb_entry ;
struct TYPE_4__ {TYPE_2__ rpcb_entry_map; struct TYPE_4__* rpcb_entry_next; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct netbuf* FUNC_2 (struct netconfig const*,scalar_t__*) ;

__attribute__((used)) static struct netbuf *
FUNC_3(rpcb_entry_list_ptr VAR_1, const struct netconfig *VAR_2)
{
 struct netbuf *VAR_3 = ((void*)0);
 rpcb_entry_list_ptr VAR_4;
 rpcb_entry *VAR_5;

 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->rpcb_entry_next) {
  VAR_5 = &VAR_4->rpcb_entry_map;
  if ((FUNC_1(VAR_2->nc_proto, VAR_5->r_nc_proto) == 0) &&
      (FUNC_1(VAR_2->nc_protofmly, VAR_5->r_nc_protofmly) == 0) &&
      (VAR_2->nc_semantics == VAR_5->r_nc_semantics) &&
      (VAR_5->r_maddr != ((void*)0)) && (VAR_5->r_maddr[0] != 0)) {
   VAR_3 = FUNC_2(VAR_2, VAR_5->r_maddr);







   break;
  }
 }
 return (VAR_3);
}
