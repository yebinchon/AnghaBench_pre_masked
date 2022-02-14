
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int tsx; int exec; } ;
struct pt_packet_mode {int leaf; TYPE_1__ bits; } ;
struct pt_config {int const* end; } ;
typedef enum pt_mode_leaf { ____Placeholder_pt_mode_leaf } pt_mode_leaf ;




 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_2(struct pt_packet_mode *VAR_7, const uint8_t *VAR_8,
       const struct pt_config *VAR_9)
{
 uint8_t VAR_10, VAR_11, VAR_12;

 if (!VAR_7 || !VAR_8 || !VAR_9)
  return -VAR_5;

 if (VAR_9->end < VAR_8 + VAR_6)
  return -VAR_4;

 VAR_10 = VAR_8[VAR_2];
 VAR_12 = VAR_10 & VAR_1;
 VAR_11 = VAR_10 & VAR_0;

 VAR_7->leaf = (enum pt_mode_leaf) VAR_12;
 switch (VAR_12) {
 default:
  return -VAR_3;

 case 129:
  return FUNC_0(&VAR_7->bits.exec, VAR_11);

 case 128:
  return FUNC_1(&VAR_7->bits.tsx, VAR_11);
 }
}
