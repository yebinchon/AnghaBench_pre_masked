
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint64_t ;
struct pt_packet_pwrx {int interrupt; int store; int autonomous; void* deepest; void* last; } ;
struct pt_config {void* const* end; } ;


 int FUNC_0 (struct pt_packet_pwrx*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (void* const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_2(struct pt_packet_pwrx *VAR_12, const uint8_t *VAR_13,
       const struct pt_config *VAR_14)
{
 uint64_t VAR_15;

 if (!VAR_12 || !VAR_13 || !VAR_14)
  return -VAR_10;

 if (VAR_14->end < VAR_13 + VAR_11)
  return -VAR_9;

 VAR_15 = FUNC_1(VAR_13 + VAR_0, VAR_5);

 FUNC_0(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->last = (uint8_t) ((VAR_15 & VAR_3) >>
      VAR_4);
 VAR_12->deepest = (uint8_t) ((VAR_15 & VAR_1) >>
         VAR_2);
 if (VAR_15 & VAR_7)
  VAR_12->interrupt = 1;
 if (VAR_15 & VAR_8)
  VAR_12->store = 1;
 if (VAR_15 & VAR_6)
  VAR_12->autonomous = 1;

 return VAR_11;
}
