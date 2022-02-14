
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_zone {int dclass; } ;
struct auth_rrset {TYPE_1__* data; int type; } ;
struct auth_data {int namelen; int name; } ;
typedef int buf ;
struct TYPE_2__ {size_t count; size_t rrsig_count; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*,size_t,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_2, struct auth_data* VAR_3,
 struct auth_rrset* VAR_4, FILE* VAR_5)
{
 size_t VAR_6, VAR_7 = VAR_4->data->count + VAR_4->data->rrsig_count;
 char VAR_8[VAR_0];
 for(VAR_6=0; VAR_6<VAR_7; VAR_6++) {
  if(!FUNC_0(VAR_3->name, VAR_3->namelen, VAR_4->type,
   VAR_2->dclass, VAR_4->data, VAR_6, VAR_8, sizeof(VAR_8))) {
   FUNC_2(VAR_1, "failed to rr2str rr %d", (int)VAR_6);
   continue;
  }
  if(!FUNC_3(VAR_5, VAR_8, FUNC_1(VAR_8)))
   return 0;
 }
 return 1;
}
