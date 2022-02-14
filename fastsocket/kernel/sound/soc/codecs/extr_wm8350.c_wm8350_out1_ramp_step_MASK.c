
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_output {scalar_t__ ramp; int left_vol; int right_vol; } ;
struct wm8350_data {struct wm8350_output out1; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_codec {struct wm8350* control_data; struct wm8350_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wm8350*,int ) ;
 int FUNC_1 (struct wm8350*,int ,int) ;
 int FUNC_2 (struct wm8350*,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct snd_soc_codec *VAR_9)
{
 struct wm8350_data *VAR_10 = VAR_9->private_data;
 struct wm8350_output *VAR_11 = &VAR_10->out1;
 struct wm8350 *VAR_12 = VAR_9->control_data;
 int VAR_13 = 0, VAR_14 = 0;
 u16 VAR_15, VAR_16;


 VAR_15 = FUNC_0(VAR_12, VAR_0);
 VAR_16 = (VAR_15 & VAR_1) >> VAR_2;

 if (VAR_11->ramp == VAR_7) {

  if (VAR_16 < VAR_11->left_vol) {
   VAR_16++;
   VAR_15 &= ~VAR_1;
   FUNC_1(VAR_12, VAR_0,
      VAR_15 | (VAR_16 << VAR_2));
  } else
   VAR_13 = 1;
 } else if (VAR_11->ramp == VAR_6) {

  if (VAR_16 > 0) {
   VAR_16--;
   VAR_15 &= ~VAR_1;
   FUNC_1(VAR_12, VAR_0,
      VAR_15 | (VAR_16 << VAR_2));
  } else
   VAR_13 = 1;
 } else
  return 1;


 VAR_15 = FUNC_0(VAR_12, VAR_8);
 VAR_16 = (VAR_15 & VAR_3) >> VAR_4;
 if (VAR_11->ramp == VAR_7) {

  if (VAR_16 < VAR_11->right_vol) {
   VAR_16++;
   VAR_15 &= ~VAR_3;
   FUNC_1(VAR_12, VAR_8,
      VAR_15 | (VAR_16 << VAR_4));
  } else
   VAR_14 = 1;
 } else if (VAR_11->ramp == VAR_6) {

  if (VAR_16 > 0) {
   VAR_16--;
   VAR_15 &= ~VAR_3;
   FUNC_1(VAR_12, VAR_8,
      VAR_15 | (VAR_16 << VAR_4));
  } else
   VAR_14 = 1;
 }


 if (!VAR_13 || !VAR_14)
  FUNC_2(VAR_12, VAR_0, VAR_5);

 return VAR_13 & VAR_14;
}
