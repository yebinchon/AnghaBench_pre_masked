
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int h_sequence; } ;
struct TYPE_4__ {TYPE_1__ i_hdr; } ;
struct rds_message {TYPE_2__ m_inc; } ;
typedef int (* is_acked_func ) (struct rds_message*,scalar_t__) ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct rds_message *VAR_0, u64 VAR_1,
        is_acked_func VAR_2)
{
 if (VAR_2)
  return VAR_2(VAR_0, VAR_1);
 return FUNC_0(VAR_0->m_inc.i_hdr.h_sequence) <= VAR_1;
}
