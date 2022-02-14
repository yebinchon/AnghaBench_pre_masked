
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_tr_raid1_object {int * trso_buffer; } ;
struct g_raid_tr_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_tr_object *VAR_1)
{
 struct g_raid_tr_raid1_object *VAR_2;

 VAR_2 = (struct g_raid_tr_raid1_object *)VAR_1;

 if (VAR_2->trso_buffer != ((void*)0)) {
  FUNC_0(VAR_2->trso_buffer, VAR_0);
  VAR_2->trso_buffer = ((void*)0);
 }
 return (0);
}
