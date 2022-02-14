
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct TYPE_2__ {size_t dname_len; scalar_t__ dname; void* rrset_class; void* type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {size_t* rr_len; int ** rr_data; scalar_t__* rr_ttl; } ;
typedef int sldns_buffer ;
typedef int rr ;
typedef int RES ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct regional*,int *,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int *,size_t*,size_t*,int,int *,int ,int *,int ) ;
 scalar_t__ FUNC_7 (int *,size_t,size_t) ;
 size_t FUNC_8 (int *,size_t,size_t) ;
 int * FUNC_9 (int *,size_t,size_t) ;
 scalar_t__ FUNC_10 (int *,size_t,size_t) ;
 scalar_t__ FUNC_11 (int *,size_t,size_t) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_14(RES* VAR_2, sldns_buffer* VAR_3, struct regional* VAR_4,
 struct ub_packed_rrset_key* VAR_5, struct packed_rrset_data* VAR_6,
 unsigned int VAR_7, int VAR_8, int* VAR_9, time_t VAR_10)
{
 uint8_t VAR_11[VAR_0];
 size_t VAR_12 = sizeof(VAR_11), VAR_13 = 0;
 int VAR_14;


 if(!FUNC_12(VAR_2, VAR_3))
  return 0;
 if(FUNC_13((char*)FUNC_3(VAR_3), "BADRR\n", 6) == 0) {
  *VAR_9 = 0;
  return 1;
 }
 VAR_14 = FUNC_6((char*)FUNC_3(VAR_3), VAR_11,
  &VAR_12, &VAR_13, 3600, ((void*)0), 0, ((void*)0), 0);
 if(VAR_14 != 0) {
  FUNC_1("error cannot parse rr: %s: %s",
   FUNC_5(VAR_14),
   (char*)FUNC_3(VAR_3));
  return 0;
 }
 if(VAR_8 && FUNC_11(VAR_11, VAR_12, VAR_13)
  != VAR_1) {
  FUNC_1("error expected rrsig but got %s",
   (char*)FUNC_3(VAR_3));
  return 0;
 }


 VAR_6->rr_ttl[VAR_7] = (time_t)FUNC_10(VAR_11, VAR_12, VAR_13) + VAR_10;
 FUNC_4(VAR_3);
 VAR_6->rr_len[VAR_7] = FUNC_8(VAR_11, VAR_12, VAR_13)+2;
 VAR_6->rr_data[VAR_7] = (uint8_t*)FUNC_2(VAR_4,
  FUNC_9(VAR_11, VAR_12, VAR_13), VAR_6->rr_len[VAR_7]);
 if(!VAR_6->rr_data[VAR_7]) {
  FUNC_1("error out of memory");
  return 0;
 }


 if(VAR_7==0) {
  VAR_5->rk.type = FUNC_0(FUNC_11(VAR_11, VAR_12, VAR_13));
  VAR_5->rk.rrset_class = FUNC_0(FUNC_7(VAR_11, VAR_12, VAR_13));
  VAR_5->rk.dname_len = VAR_13;
  VAR_5->rk.dname = FUNC_2(VAR_4, VAR_11, VAR_13);
  if(!VAR_5->rk.dname) {
   FUNC_1("error out of memory");
   return 0;
  }
 }

 return 1;
}
