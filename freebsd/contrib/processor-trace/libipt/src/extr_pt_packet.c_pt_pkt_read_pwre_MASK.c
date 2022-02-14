
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint64_t ;
struct pt_packet_pwre {int hw; void* sub_state; void* state; } ;
struct pt_config {void* const* end; } ;


 int FUNC_0 (struct pt_packet_pwre*,int ,int) ;
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

int FUNC_2(struct pt_packet_pwre *VAR_10, const uint8_t *VAR_11,
       const struct pt_config *VAR_12)
{
 uint64_t VAR_13;

 if (!VAR_10 || !VAR_11 || !VAR_12)
  return -VAR_8;

 if (VAR_12->end < VAR_11 + VAR_9)
  return -VAR_7;

 VAR_13 = FUNC_1(VAR_11 + VAR_0, VAR_2);

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->state = (uint8_t) ((VAR_13 & VAR_3) >>
       VAR_4);
 VAR_10->sub_state = (uint8_t) ((VAR_13 & VAR_5) >>
           VAR_6);
 if (VAR_13 & VAR_1)
  VAR_10->hw = 1;

 return VAR_9;
}
