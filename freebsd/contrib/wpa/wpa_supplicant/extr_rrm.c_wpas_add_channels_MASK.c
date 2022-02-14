
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oper_class_map {int max_chan; int min_chan; int inc; scalar_t__ bw; int op_class; } ;
struct hostapd_hw_modes {int dummy; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct hostapd_hw_modes*,int,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int,int,int*) ;

__attribute__((used)) static int * FUNC_5(const struct oper_class_map *VAR_6,
          struct hostapd_hw_modes *VAR_7, int VAR_8,
          const u8 *VAR_9, const u8 VAR_10)
{
 int *VAR_11, *VAR_12;
 u8 VAR_13, VAR_14;
 u8 VAR_15;

 VAR_15 = VAR_9 ? VAR_10 :
  (VAR_6->max_chan - VAR_6->min_chan) / VAR_6->inc + 1;

 if (VAR_6->bw == VAR_1 || VAR_6->bw == VAR_2)
  VAR_13 = 4;
 else if (VAR_6->bw == VAR_0)
  VAR_13 = 8;
 else
  VAR_13 = 1;


 VAR_11 = FUNC_0(VAR_15 * VAR_13 + 1, sizeof(*VAR_11));
 if (!VAR_11) {
  FUNC_3(VAR_3,
      "Beacon Report: Failed to allocate freqs array");
  return ((void*)0);
 }

 VAR_12 = VAR_11;
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  u8 VAR_16 = VAR_9 ? VAR_9[VAR_14] : VAR_6->min_chan + VAR_14 * VAR_6->inc;
  enum chan_allowed VAR_17 = FUNC_2(VAR_7, VAR_16, VAR_6->bw);

  if (VAR_17 == VAR_4 || (VAR_17 == VAR_5 && VAR_8))
   continue;

  if (FUNC_4(VAR_6->op_class, VAR_16, VAR_13,
         VAR_12) < 0) {
   FUNC_1(VAR_11);
   return ((void*)0);
  }

  VAR_12 += VAR_13;
 }

 if (!VAR_11[0]) {
  FUNC_1(VAR_11);
  return ((void*)0);
 }

 return VAR_11;
}
