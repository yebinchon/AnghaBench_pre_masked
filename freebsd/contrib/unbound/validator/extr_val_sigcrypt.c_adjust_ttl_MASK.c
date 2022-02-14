
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct val_env {scalar_t__ date_override; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
typedef int origttl ;
typedef scalar_t__ int32_t ;
typedef int incep ;
typedef int expi ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct val_env* VAR_3, uint32_t VAR_4,
 struct ub_packed_rrset_key* VAR_5, uint8_t* VAR_6,
 uint8_t* VAR_7, uint8_t* VAR_8)
{
 struct packed_rrset_data* VAR_9 =
  (struct packed_rrset_data*)VAR_5->entry.data;

 int32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 FUNC_0(&VAR_10, VAR_6, sizeof(VAR_10));
 FUNC_0(&VAR_12, VAR_7, sizeof(VAR_12));
 FUNC_0(&VAR_13, VAR_8, sizeof(VAR_13));
 VAR_12 = FUNC_1(VAR_12);
 VAR_13 = FUNC_1(VAR_13);
 VAR_10 = FUNC_1(VAR_10);


 if(VAR_3->date_override) {
  VAR_14 = VAR_3->date_override;
 } else VAR_14 = (int32_t)VAR_4;
 VAR_11 = VAR_12 - VAR_14;
 if(VAR_0 > (time_t)VAR_10 && VAR_9->ttl > VAR_0) {
  FUNC_2(VAR_2, "rrset TTL larger than original and minimum"
   " TTL, adjusting TTL downwards to minimum ttl");
  VAR_9->ttl = VAR_0;
 }
 else if(VAR_0 <= VAR_10 && VAR_9->ttl > (time_t)VAR_10) {
  FUNC_2(VAR_2, "rrset TTL larger than original TTL, "
  "adjusting TTL downwards to original ttl");
  VAR_9->ttl = VAR_10;
 }

 if(VAR_11 > 0 && VAR_9->ttl > (time_t)VAR_11) {
  FUNC_2(VAR_1, "rrset TTL larger than sig expiration ttl,"
   " adjusting TTL downwards");
  VAR_9->ttl = VAR_11;
 }
}
