
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* saved_regs; int lock; TYPE_1__** mix_devices; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_7__ {int regno; int mutereg; } ;


 unsigned char FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,unsigned char) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,unsigned char*,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(ad1848_info *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned char VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_4 = VAR_0->mix_devices[VAR_1][VAR_3].regno;
 VAR_5 = VAR_0->mix_devices[VAR_1][VAR_3].mutereg;
 VAR_6 = FUNC_0(VAR_0, VAR_4);

 if (VAR_5 != VAR_4) {
  VAR_7 = FUNC_0(VAR_0, VAR_5);
  FUNC_2(VAR_0, &VAR_6, &VAR_7, VAR_1, VAR_3, VAR_2);
 }
 else
  FUNC_2(VAR_0, &VAR_6, &VAR_6, VAR_1, VAR_3, VAR_2);

 FUNC_3(&VAR_0->lock,VAR_8);
 FUNC_1(VAR_0, VAR_4, VAR_6);
 VAR_0->saved_regs[VAR_4] = VAR_6;
 if (VAR_5 != VAR_4) {
  FUNC_1(VAR_0, VAR_5, VAR_7);
  VAR_0->saved_regs[VAR_5] = VAR_7;
 }
 FUNC_4(&VAR_0->lock,VAR_8);
}
