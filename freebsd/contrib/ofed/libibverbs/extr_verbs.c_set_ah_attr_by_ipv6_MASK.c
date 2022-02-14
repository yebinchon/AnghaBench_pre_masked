
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* raw; } ;
struct ibv_grh {scalar_t__ next_hdr; int hop_limit; int version_tclass_flow; TYPE_2__ dgid; int sgid; } ;
struct ibv_context {int dummy; } ;
struct TYPE_3__ {int traffic_class; int hop_limit; scalar_t__ sgid_index; int dgid; } ;
struct ibv_ah_attr {TYPE_1__ grh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (struct ibv_context*,scalar_t__,TYPE_2__*,int) ;

__attribute__((used)) static inline int FUNC_2(struct ibv_context *VAR_7,
      struct ibv_ah_attr *VAR_8,
      struct ibv_grh *VAR_9, uint8_t VAR_10)
{
 uint32_t VAR_11;
 uint32_t VAR_12;
 int VAR_13;


 if (VAR_9->dgid.raw[0] == 0xFF) {
  VAR_6 = VAR_0;
  return -1;
 }

 VAR_8->grh.dgid = VAR_9->sgid;
 if (VAR_9->next_hdr == VAR_5) {
  VAR_12 = VAR_3;
 } else if (VAR_9->next_hdr == VAR_4) {
  VAR_12 = VAR_2;
 } else {
  VAR_6 = VAR_1;
  return -1;
 }

 VAR_13 = FUNC_1(VAR_7, VAR_10, &VAR_9->dgid,
     VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_8->grh.sgid_index = (uint8_t) VAR_13;
 VAR_11 = FUNC_0(VAR_9->version_tclass_flow);
 VAR_8->grh.hop_limit = VAR_9->hop_limit;
 VAR_8->grh.traffic_class = (VAR_11 >> 20) & 0xFF;

 return 0;
}
