
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct drsmp {int method; int dr_slid; int dr_dlid; scalar_t__ hop_cnt; int data; int initial_path; int tid; int attr_mod; scalar_t__ attr_id; } ;
struct TYPE_3__ {void* path; int hop_cnt; } ;
typedef TYPE_1__ DRPath ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (struct drsmp*,int ,int) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (void*,int,int ,int ,int ) ;

void FUNC_7(void *VAR_1, DRPath * VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
 struct drsmp *VAR_6 = (struct drsmp *)(FUNC_5(VAR_1));

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->method = 2;
 VAR_6->attr_id = (uint16_t) FUNC_2((uint16_t) VAR_3);
 VAR_6->attr_mod = FUNC_0(VAR_4);
 VAR_6->tid = FUNC_1(VAR_0++);
 VAR_6->dr_slid = 0xffff;
 VAR_6->dr_dlid = 0xffff;

 FUNC_6(VAR_1, 0xffff, 0, 0, 0);

 if (VAR_2)
  FUNC_3(VAR_6->initial_path, VAR_2->path, VAR_2->hop_cnt + 1);

 if (VAR_5)
  FUNC_3(VAR_6->data, VAR_5, sizeof VAR_6->data);

 VAR_6->hop_cnt = (uint8_t) VAR_2->hop_cnt;
}
