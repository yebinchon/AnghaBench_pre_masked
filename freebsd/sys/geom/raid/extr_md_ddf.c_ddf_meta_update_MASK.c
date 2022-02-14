
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddf_pd_entry {int PD_State; int PD_GUID; } ;
struct ddf_meta {TYPE_2__* pdr; } ;
struct TYPE_6__ {TYPE_1__* entry; int Populated_PDEs; } ;
struct TYPE_5__ {struct ddf_pd_entry* entry; } ;
struct TYPE_4__ {int PD_Reference; } ;


 int FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*,int ) ;
 int FUNC_2 (struct ddf_meta*,int ) ;
 int FUNC_3 (struct ddf_meta*,int ,int) ;
 int FUNC_4 (struct ddf_meta*,int *,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct ddf_pd_entry*,struct ddf_pd_entry*,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct ddf_meta *VAR_1, struct ddf_meta *VAR_2)
{
 struct ddf_pd_entry *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2, VAR_0->Populated_PDEs); VAR_5++) {
  VAR_4 = &VAR_2->pdr->entry[VAR_5];
  if (FUNC_5(VAR_4->PD_GUID, 24))
   continue;
  VAR_6 = FUNC_4(VAR_1, ((void*)0),
      FUNC_2(VAR_2, VAR_0->entry[VAR_5].PD_Reference));
  if (VAR_6 < 0) {
   VAR_6 = FUNC_4(VAR_1, ((void*)0), 0xffffffff);
   VAR_3 = &VAR_1->pdr->entry[VAR_6];
   FUNC_6(VAR_3, VAR_4, sizeof(*VAR_3));
  } else {
   VAR_3 = &VAR_1->pdr->entry[VAR_6];
   FUNC_3(VAR_1, VAR_3->PD_State,
       FUNC_1(VAR_1, VAR_3->PD_State) |
       FUNC_1(VAR_2, VAR_3->PD_State));
  }
 }
}
