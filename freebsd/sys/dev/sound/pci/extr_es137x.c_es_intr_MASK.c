
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct es_info {scalar_t__ polling; int sctrl; TYPE_1__* ch; } ;
struct TYPE_2__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct es_info*) ;
 int FUNC_1 (struct es_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct es_info*,int ,int) ;
 int FUNC_4 (struct es_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_12)
{
 struct es_info *VAR_13 = VAR_12;
 uint32_t VAR_14, VAR_15;

 FUNC_0(VAR_13);
 if (VAR_13->polling != 0) {
  FUNC_1(VAR_13);
  return;
 }
 VAR_14 = FUNC_3(VAR_13, VAR_1, 4);
 if ((VAR_14 & VAR_11) == 0) {
  FUNC_1(VAR_13);
  return;
 }

 VAR_15 = VAR_13->sctrl;
 if (VAR_14 & VAR_8)
  VAR_15 &= ~VAR_7;
 if (VAR_14 & VAR_9)
  VAR_15 &= ~VAR_5;
 if (VAR_14 & VAR_10)
  VAR_15 &= ~VAR_6;

 FUNC_4(VAR_13, VAR_0, VAR_15, 4);
 FUNC_4(VAR_13, VAR_0, VAR_13->sctrl, 4);
 FUNC_1(VAR_13);

 if (VAR_14 & VAR_8)
  FUNC_2(VAR_13->ch[VAR_2].channel);
 if (VAR_14 & VAR_9)
  FUNC_2(VAR_13->ch[VAR_3].channel);
 if (VAR_14 & VAR_10)
  FUNC_2(VAR_13->ch[VAR_4].channel);
}
