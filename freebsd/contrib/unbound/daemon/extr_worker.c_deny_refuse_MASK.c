
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int unwanted_queries; scalar_t__ extended; } ;
struct worker {TYPE_1__ stats; } ;
struct comm_reply {int addrlen; int addr; } ;
struct comm_point {int buffer; } ;
typedef enum acl_access { ____Placeholder_acl_access } acl_access ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct comm_reply*) ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,int *,int) ;
 int FUNC_10 (int ,struct worker*) ;

__attribute__((used)) static int
FUNC_11(struct comm_point* VAR_3, enum acl_access VAR_4,
 enum acl_access VAR_5, enum acl_access VAR_6,
 struct worker* VAR_7, struct comm_reply* VAR_8)
{
 if(VAR_4 == VAR_5) {
  FUNC_2(VAR_8);
  if(VAR_7->stats.extended)
   VAR_7->stats.unwanted_queries++;
  return 0;
 } else if(VAR_4 == VAR_6) {
  FUNC_3(VAR_2, "refused query from",
   &VAR_8->addr, VAR_8->addrlen);
  FUNC_4(VAR_2, "refuse", VAR_3->buffer);
  if(VAR_7->stats.extended)
   VAR_7->stats.unwanted_queries++;
  if(FUNC_10(VAR_3->buffer, VAR_7) == -1) {
   FUNC_2(VAR_8);
   return 0;
  }
  FUNC_7(VAR_3->buffer, VAR_0);
  FUNC_9(VAR_3->buffer, 4,
   (uint8_t*)"\0\0\0\0\0\0\0\0", 8);
  FUNC_0(FUNC_5(VAR_3->buffer));
  FUNC_1(FUNC_5(VAR_3->buffer),
   VAR_1);
  FUNC_8(VAR_3->buffer, VAR_0);
  FUNC_6(VAR_3->buffer);
  return 1;
 }

 return -1;
}
