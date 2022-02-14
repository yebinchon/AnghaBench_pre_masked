
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct hda_bus_unsolicited {int wp; int work; void** queue; } ;
struct hda_bus {int workq; struct hda_bus_unsolicited* unsol; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hda_bus*,void*,void*) ;

int FUNC_2(struct hda_bus *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct hda_bus_unsolicited *VAR_4;
 unsigned int VAR_5;

 if (!VAR_1 || !VAR_1->workq)
  return 0;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_1->unsol;
 if (!VAR_4)
  return 0;

 VAR_5 = (VAR_4->wp + 1) % VAR_0;
 VAR_4->wp = VAR_5;

 VAR_5 <<= 1;
 VAR_4->queue[VAR_5] = VAR_2;
 VAR_4->queue[VAR_5 + 1] = VAR_3;

 FUNC_0(VAR_1->workq, &VAR_4->work);

 return 0;
}
