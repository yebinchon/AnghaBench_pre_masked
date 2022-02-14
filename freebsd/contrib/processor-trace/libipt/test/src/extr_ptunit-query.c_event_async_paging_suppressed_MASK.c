
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct TYPE_5__ {int non_root; int cr3; } ;
struct TYPE_4__ {int from; } ;
struct TYPE_6__ {TYPE_2__ async_paging; TYPE_1__ async_branch; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_3__ variant; int ip_suppressed; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_encoder*,int,int ) ;
 int FUNC_1 (struct pt_encoder*,int,int) ;
 int FUNC_2 (struct pt_encoder*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,struct pt_query_decoder*) ;
 int FUNC_5 (int,int) ;
 struct ptunit_result FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static struct ptunit_result
FUNC_9(struct ptu_decoder_fixture *VAR_10, uint8_t VAR_11,
         uint64_t VAR_12)
{
 struct pt_query_decoder *VAR_13 = &VAR_10->decoder;
 struct pt_encoder *VAR_14 = &VAR_10->encoder;
 struct pt_event VAR_15;
 uint64_t VAR_16 = VAR_1, VAR_17 = VAR_0;
 int VAR_18;

 FUNC_0(VAR_14, VAR_16, VAR_2);
 FUNC_1(VAR_14, VAR_17, VAR_11);
 FUNC_2(VAR_14, 0, VAR_3);

 FUNC_4(VAR_9, VAR_13);

 VAR_18 = FUNC_3(VAR_13, &VAR_15, sizeof(VAR_15));
 FUNC_5(VAR_18, VAR_8);
 FUNC_8(VAR_15.ip_suppressed, 0);
 FUNC_5(VAR_15.type, VAR_5);
 FUNC_7(VAR_15.variant.async_branch.from, VAR_16);

 if (!VAR_12)
  FUNC_5(VAR_15.has_tsc, 0);
 else {
  FUNC_5(VAR_15.has_tsc, 1);
  FUNC_7(VAR_15.tsc, VAR_12);
 }

 VAR_18 = FUNC_3(VAR_13, &VAR_15, sizeof(VAR_15));
 FUNC_5(VAR_18, VAR_7);
 FUNC_8(VAR_15.ip_suppressed, 0);
 FUNC_5(VAR_15.type, VAR_6);
 FUNC_7(VAR_15.variant.async_paging.cr3, VAR_17);
 FUNC_7(VAR_15.variant.async_paging.non_root,
      (VAR_11 & VAR_4) != 0);

 if (!VAR_12)
  FUNC_5(VAR_15.has_tsc, 0);
 else {
  FUNC_5(VAR_15.has_tsc, 1);
  FUNC_7(VAR_15.tsc, VAR_12);
 }

 return FUNC_6();
}
