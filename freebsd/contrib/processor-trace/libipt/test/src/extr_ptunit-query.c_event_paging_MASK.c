
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;
struct TYPE_3__ {int non_root; int cr3; } ;
struct TYPE_4__ {TYPE_1__ paging; } ;
struct pt_event {int type; int has_tsc; int tsc; TYPE_2__ variant; } ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct pt_query_decoder*,struct pt_event*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct pt_query_decoder*) ;
 int FUNC_3 (int,int) ;
 struct ptunit_result FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct ptu_decoder_fixture *VAR_5,
      uint8_t VAR_6, uint64_t VAR_7)
{
 struct pt_query_decoder *VAR_8 = &VAR_5->decoder;
 struct pt_encoder *VAR_9 = &VAR_5->encoder;
 struct pt_event VAR_10;
 uint64_t VAR_11 = VAR_0;
 int VAR_12;

 FUNC_0(VAR_9, VAR_11, VAR_6);

 FUNC_2(VAR_4, VAR_8);

 VAR_12 = FUNC_1(VAR_8, &VAR_10, sizeof(VAR_10));
 FUNC_3(VAR_12, VAR_3);
 FUNC_3(VAR_10.type, VAR_2);
 FUNC_5(VAR_10.variant.paging.cr3, VAR_11);
 FUNC_5(VAR_10.variant.paging.non_root, (VAR_6 & VAR_1) != 0);

 if (!VAR_7)
  FUNC_3(VAR_10.has_tsc, 0);
 else {
  FUNC_3(VAR_10.has_tsc, 1);
  FUNC_5(VAR_10.tsc, VAR_7);
 }

 return FUNC_4();
}
