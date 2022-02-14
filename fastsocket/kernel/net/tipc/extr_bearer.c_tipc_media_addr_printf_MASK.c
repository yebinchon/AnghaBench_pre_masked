
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unchar ;
typedef scalar_t__ u32 ;
struct tipc_media_addr {int dev_addr; int type; } ;
struct print_buf {int dummy; } ;
struct media {scalar_t__ type_id; int (* addr2str ) (struct tipc_media_addr*,char*,int) ;int name; } ;
typedef int addr_str ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct media* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tipc_media_addr*,char*,int) ;
 int FUNC_2 (struct print_buf*,char*,scalar_t__,...) ;

void FUNC_3(struct print_buf *VAR_3, struct tipc_media_addr *VAR_4)
{
 struct media *VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(VAR_4->type);
 for (VAR_7 = 0, VAR_5 = VAR_2; VAR_7 < VAR_1; VAR_7++, VAR_5++) {
  if (VAR_5->type_id == VAR_6)
   break;
 }

 if ((VAR_7 < VAR_1) && (VAR_5->addr2str != ((void*)0))) {
  char VAR_8[VAR_0];

  FUNC_2(VAR_3, "%s(%s)", VAR_5->name,
       VAR_5->addr2str(VAR_4, VAR_8, sizeof(VAR_8)));
 } else {
  unchar *VAR_9 = (unchar *)&VAR_4->dev_addr;

  FUNC_2(VAR_3, "UNKNOWN(%u)", VAR_6);
  for (VAR_7 = 0; VAR_7 < (sizeof(*VAR_4) - sizeof(VAR_4->type)); VAR_7++) {
   FUNC_2(VAR_3, "-%02x", VAR_9[VAR_7]);
  }
 }
}
