
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct pfsync_header {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct pfsync_header*,int const*,scalar_t__) ;

void
FUNC_2(netdissect_options *VAR_1 , const u_char *VAR_2, u_int VAR_3)
{
 struct pfsync_header *VAR_4 = (struct pfsync_header *)VAR_2;

 if (VAR_3 < VAR_0)
  FUNC_0((VAR_1, "[|pfsync]"));
 else
  FUNC_1(VAR_1, VAR_4, VAR_2 + sizeof(struct pfsync_header),
      VAR_3 - sizeof(struct pfsync_header));
}
