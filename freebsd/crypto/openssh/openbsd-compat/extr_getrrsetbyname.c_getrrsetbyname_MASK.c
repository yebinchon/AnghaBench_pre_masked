
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct rrsetinfo {scalar_t__ rri_rdclass; scalar_t__ rri_rdtype; int rri_nrdatas; int rri_nsigs; struct rdatainfo* rri_sigs; struct rdatainfo* rri_rdatas; int * rri_name; int rri_flags; int rri_ttl; } ;
struct rdatainfo {int * rdi_data; int rdi_length; } ;
struct dns_rr {scalar_t__ class; scalar_t__ type; int size; int rdata; struct dns_rr* next; int name; int ttl; } ;
struct TYPE_4__ {int qdcount; int ancount; int ad; } ;
struct dns_response {struct dns_rr* answer; TYPE_2__ header; TYPE_1__* query; } ;
struct __res_state {int options; } ;
typedef int answer ;
struct TYPE_3__ {scalar_t__ class; scalar_t__ type; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct __res_state* FUNC_0 (int ,int ,int *) ;
 int VAR_13 ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (struct dns_rr*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct dns_response*) ;
 int FUNC_4 (struct rrsetinfo*) ;
 int VAR_14 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 struct dns_response* FUNC_7 (int *,int) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*,int,int,int *,int) ;
 int * FUNC_10 (int ) ;

int
FUNC_11(const char *VAR_15, unsigned int VAR_16,
    unsigned int VAR_17, unsigned int VAR_18,
    struct rrsetinfo **VAR_19)
{
 struct __res_state *VAR_20 = FUNC_0(VAR_13, VAR_13, &VAR_13);
 int VAR_21;
 struct rrsetinfo *VAR_22 = ((void*)0);
 struct dns_response *VAR_23 = ((void*)0);
 struct dns_rr *VAR_24;
 struct rdatainfo *VAR_25;
 int VAR_26;
 unsigned int VAR_27, VAR_28;
 u_char VAR_29[VAR_0];


 if (VAR_16 > 0xffff || VAR_17 > 0xffff) {
  VAR_21 = VAR_2;
  goto fail;
 }


 if (VAR_16 == 0xff || VAR_17 == 0xff) {
  VAR_21 = VAR_2;
  goto fail;
 }


 if (VAR_18) {
  VAR_21 = VAR_2;
  goto fail;
 }


 if ((VAR_20->options & VAR_8) == 0 && FUNC_8() == -1) {
  VAR_21 = VAR_1;
  goto fail;
 }
 VAR_26 = FUNC_9(VAR_15, (signed int) VAR_16, (signed int) VAR_17,
     VAR_29, sizeof(VAR_29));
 if (VAR_26 < 0) {
  switch(VAR_14) {
  case 129:
   VAR_21 = VAR_5;
   goto fail;
  case 128:
   VAR_21 = VAR_3;
   goto fail;
  default:
   VAR_21 = VAR_1;
   goto fail;
  }
 }


 VAR_23 = FUNC_7(VAR_29, VAR_26);
 if (VAR_23 == ((void*)0)) {
  VAR_21 = VAR_1;
  goto fail;
 }

 if (VAR_23->header.qdcount != 1) {
  VAR_21 = VAR_1;
  goto fail;
 }


 VAR_22 = FUNC_1(1, sizeof(struct rrsetinfo));
 if (VAR_22 == ((void*)0)) {
  VAR_21 = VAR_4;
  goto fail;
 }
 VAR_22->rri_rdclass = VAR_23->query->class;
 VAR_22->rri_rdtype = VAR_23->query->type;
 VAR_22->rri_ttl = VAR_23->answer->ttl;
 VAR_22->rri_nrdatas = VAR_23->header.ancount;
 VAR_22->rri_name = FUNC_10(VAR_23->answer->name);
 if (VAR_22->rri_name == ((void*)0)) {
  VAR_21 = VAR_4;
  goto fail;
 }


 VAR_22->rri_nrdatas = FUNC_2(VAR_23->answer, VAR_22->rri_rdclass,
     VAR_22->rri_rdtype);
 VAR_22->rri_nsigs = FUNC_2(VAR_23->answer, VAR_22->rri_rdclass,
     VAR_12);


 VAR_22->rri_rdatas = FUNC_1(VAR_22->rri_nrdatas,
     sizeof(struct rdatainfo));
 if (VAR_22->rri_rdatas == ((void*)0)) {
  VAR_21 = VAR_4;
  goto fail;
 }


 if (VAR_22->rri_nsigs > 0) {
  VAR_22->rri_sigs = FUNC_1(VAR_22->rri_nsigs, sizeof(struct rdatainfo));
  if (VAR_22->rri_sigs == ((void*)0)) {
   VAR_21 = VAR_4;
   goto fail;
  }
 }


 for (VAR_24 = VAR_23->answer, VAR_27 = 0, VAR_28 = 0;
     VAR_24; VAR_24 = VAR_24->next) {

  VAR_25 = ((void*)0);

  if (VAR_24->class == VAR_22->rri_rdclass &&
      VAR_24->type == VAR_22->rri_rdtype)
   VAR_25 = &VAR_22->rri_rdatas[VAR_27++];

  if (VAR_24->class == VAR_22->rri_rdclass &&
      VAR_24->type == VAR_12)
   VAR_25 = &VAR_22->rri_sigs[VAR_28++];

  if (VAR_25) {
   VAR_25->rdi_length = VAR_24->size;
   VAR_25->rdi_data = FUNC_5(VAR_24->size);

   if (VAR_25->rdi_data == ((void*)0)) {
    VAR_21 = VAR_4;
    goto fail;
   }
   FUNC_6(VAR_25->rdi_data, VAR_24->rdata, VAR_24->size);
  }
 }
 FUNC_3(VAR_23);

 *VAR_19 = VAR_22;
 return (VAR_6);

fail:
 if (VAR_22 != ((void*)0))
  FUNC_4(VAR_22);
 if (VAR_23 != ((void*)0))
  FUNC_3(VAR_23);
 return (VAR_21);
}
