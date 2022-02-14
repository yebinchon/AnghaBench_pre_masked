
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_params {int snap_len; int port; int invert; scalar_t__ skip_len; scalar_t__ skip_ofst; scalar_t__ min_len; int* data; int* mask; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int,int,int) ;
 int FUNC_11 (struct adapter*,int,int) ;

int FUNC_12(struct adapter *VAR_15, const struct trace_params *VAR_16,
    int VAR_17, int VAR_18)
{
 int VAR_19, VAR_20 = VAR_17 * 4;
 u32 VAR_21, VAR_22, VAR_23;
 u32 VAR_24 = VAR_9;
 u32 VAR_25 = FUNC_8(VAR_15) ? VAR_8 : VAR_7;

 if (VAR_17 < 0 || VAR_17 >= VAR_13)
  return -VAR_6;

 if (VAR_16 == ((void*)0) || !VAR_18) {
  FUNC_10(VAR_15, VAR_4 + VAR_20, VAR_25,
      VAR_18 ? VAR_25 : 0);
  return 0;
 }
 VAR_23 = FUNC_9(VAR_15, VAR_0);
 if (VAR_23 & VAR_9) {





  if (VAR_16->snap_len > ((10 * 1024 / 4) - (2 * 8)))
   return -VAR_6;
 } else {





  VAR_24 = 0;
  if (VAR_16->snap_len > 9600 || VAR_17)
   return -VAR_6;
 }

 if (VAR_16->port > (FUNC_8(VAR_15) ? 11 : 19) || VAR_16->invert > 1 ||
     VAR_16->skip_len > VAR_10 || VAR_16->skip_ofst > VAR_12 ||
     VAR_16->min_len > VAR_11)
  return -VAR_6;


 FUNC_10(VAR_15, VAR_4 + VAR_20, VAR_25, 0);

 VAR_17 *= (VAR_3 - VAR_2);
 VAR_21 = VAR_2 + VAR_17;
 VAR_22 = VAR_1 + VAR_17;

 for (VAR_19 = 0; VAR_19 < VAR_14 / 4; VAR_19++, VAR_21 += 4, VAR_22 += 4) {
  FUNC_11(VAR_15, VAR_21, VAR_16->data[VAR_19]);
  FUNC_11(VAR_15, VAR_22, ~VAR_16->mask[VAR_19]);
 }
 FUNC_11(VAR_15, VAR_5 + VAR_20,
       FUNC_2(VAR_16->snap_len) |
       FUNC_5(VAR_16->min_len));
 FUNC_11(VAR_15, VAR_4 + VAR_20,
       FUNC_6(VAR_16->skip_ofst) | FUNC_4(VAR_16->skip_len) | VAR_25 |
       (FUNC_8(VAR_15) ?
       FUNC_7(VAR_16->port) | FUNC_3(VAR_16->invert) :
       FUNC_1(VAR_16->port) | FUNC_0(VAR_16->invert)));

 return 0;
}
