
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_jack_data {int report; int jack; } ;
struct wm8350_data {struct wm8350_jack_data hpr; struct wm8350_jack_data hpl; } ;
struct wm8350 {int dev; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct wm8350*,int ) ;

__attribute__((used)) static void FUNC_5(struct wm8350 *VAR_3, int VAR_4, void *VAR_5)
{
 struct wm8350_data *VAR_6 = VAR_5;
 u16 VAR_7;
 int VAR_8;
 int VAR_9;
 struct wm8350_jack_data *VAR_10 = ((void*)0);

 switch (VAR_4) {
 case 129:
  VAR_10 = &VAR_6->hpl;
  VAR_9 = VAR_0;
  break;

 case 128:
  VAR_10 = &VAR_6->hpr;
  VAR_9 = VAR_2;
  break;

 default:
  FUNC_0();
 }

 if (!VAR_10->jack) {
  FUNC_1(VAR_3->dev, "Jack interrupt called with no jack\n");
  return;
 }


 FUNC_2(200);

 VAR_7 = FUNC_4(VAR_3, VAR_1);
 if (VAR_7 & VAR_9)
  VAR_8 = VAR_10->report;
 else
  VAR_8 = 0;

 FUNC_3(VAR_10->jack, VAR_8, VAR_10->report);
}
