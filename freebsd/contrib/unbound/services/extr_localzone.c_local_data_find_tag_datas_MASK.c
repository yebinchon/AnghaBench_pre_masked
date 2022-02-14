
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int * time_t ;
struct TYPE_4__ {int * dname; scalar_t__ flags; void* rrset_class; void* type; int dname_len; } ;
struct TYPE_3__ {struct packed_rrset_data* data; struct ub_packed_rrset_key* key; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ qtype; scalar_t__ qclass; int qname_len; int * qname; } ;
struct packed_rrset_data {size_t* rr_len; int count; int ** rr_data; int ** rr_ttl; void* ttl; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
typedef int rr ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t*,size_t*,int) ;
 int * FUNC_2 (struct regional*,int ,size_t) ;
 scalar_t__ FUNC_3 (struct regional*,int) ;
 int FUNC_4 (char*,int *,size_t*,int *,int,int *,int ,int *,int ) ;
 size_t FUNC_5 (int *,size_t,int) ;
 int FUNC_6 (int *,size_t,int) ;
 void* FUNC_7 (int *,size_t,int) ;
 scalar_t__ FUNC_8 (int *,size_t,int) ;
 int FUNC_9 (char*,int,char*,char*) ;

int
FUNC_10(const struct query_info* VAR_2,
 struct config_strlist* VAR_3, struct ub_packed_rrset_key* VAR_4,
 struct regional* VAR_5)
{
 struct config_strlist* VAR_6;
 char VAR_7[65536];
 uint8_t VAR_8[VAR_0];
 size_t VAR_9;
 int VAR_10;
 struct packed_rrset_data* VAR_11;
 for(VAR_6=VAR_3; VAR_6; VAR_6=VAR_6->next) {
  uint16_t VAR_12;

  VAR_9 = sizeof(VAR_8);

  FUNC_9(VAR_7, sizeof(VAR_7), ". %s", VAR_6->str);
  VAR_10 = FUNC_4(VAR_7, VAR_8, &VAR_9, ((void*)0), 3600,
   ((void*)0), 0, ((void*)0), 0);
  if(VAR_10 != 0)


   continue;
  if(VAR_9 < 1 + 8 + 2 )
   continue;
  VAR_12 = FUNC_8(VAR_8, VAR_9, 1);
  if(VAR_12 != VAR_2->qtype && VAR_12 != VAR_1)
   continue;


  if(VAR_4->rk.dname == ((void*)0)) {
   VAR_4->entry.key = VAR_4;
   VAR_4->rk.dname = VAR_2->qname;
   VAR_4->rk.dname_len = VAR_2->qname_len;
   VAR_4->rk.type = FUNC_0(VAR_12);
   VAR_4->rk.rrset_class = FUNC_0(VAR_2->qclass);
   VAR_4->rk.flags = 0;
   VAR_11 = (struct packed_rrset_data*)FUNC_3(
    VAR_5, sizeof(struct packed_rrset_data)
    + sizeof(size_t) + sizeof(uint8_t*) +
    sizeof(time_t));
   if(!VAR_11) return 0;
   VAR_4->entry.data = VAR_11;
   VAR_11->ttl = FUNC_7(VAR_8, VAR_9, 1);
   VAR_11->rr_len = (size_t*)((uint8_t*)VAR_11 +
    sizeof(struct packed_rrset_data));
   VAR_11->rr_data = (uint8_t**)&(VAR_11->rr_len[1]);
   VAR_11->rr_ttl = (time_t*)&(VAR_11->rr_data[1]);
  }
  VAR_11 = (struct packed_rrset_data*)VAR_4->entry.data;

  if(VAR_11->count != 0) {
   size_t* VAR_13 = VAR_11->rr_len;
   uint8_t** VAR_14 = VAR_11->rr_data;
   time_t* VAR_15 = VAR_11->rr_ttl;



   VAR_11->rr_len = (size_t*)FUNC_3(VAR_5,
    (VAR_11->count+1)*sizeof(size_t));
   VAR_11->rr_data = (uint8_t**)FUNC_3(VAR_5,
    (VAR_11->count+1)*sizeof(uint8_t*));
   VAR_11->rr_ttl = (time_t*)FUNC_3(VAR_5,
    (VAR_11->count+1)*sizeof(time_t));
   if(!VAR_11->rr_len || !VAR_11->rr_data || !VAR_11->rr_ttl)
    return 0;



   FUNC_1(VAR_11->rr_len, VAR_13, VAR_11->count*sizeof(size_t));
   FUNC_1(VAR_11->rr_data, VAR_14, VAR_11->count*sizeof(uint8_t*));
   FUNC_1(VAR_11->rr_ttl, VAR_15, VAR_11->count*sizeof(time_t));
  }

  VAR_11->rr_len[VAR_11->count] = FUNC_5(VAR_8, VAR_9, 1)+2;
  VAR_11->rr_ttl[VAR_11->count] = FUNC_7(VAR_8, VAR_9, 1);
  VAR_11->rr_data[VAR_11->count] = FUNC_2(VAR_5,
   FUNC_6(VAR_8, VAR_9, 1),
   VAR_11->rr_len[VAR_11->count]);
  if(!VAR_11->rr_data[VAR_11->count])
   return 0;
  VAR_11->count++;
 }
 if(VAR_4->rk.dname)
  return 1;
 return 0;
}
