
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_encoder {int dummy; } ;
struct pt_query_decoder {int dummy; } ;
struct ptu_decoder_fixture {struct pt_encoder encoder; struct pt_query_decoder decoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_encoder*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pt_query_decoder*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct pt_query_decoder*,...) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct ptu_decoder_fixture *VAR_5)
{
 struct pt_query_decoder *VAR_6 = &VAR_5->decoder;
 struct pt_encoder *VAR_7 = &VAR_5->encoder;
 uint64_t VAR_8 = VAR_1, VAR_9 = VAR_8;
 int VAR_10;

 FUNC_0(VAR_7, 0, VAR_2);

 FUNC_2(VAR_0, VAR_6, VAR_7);
 FUNC_2(VAR_4, VAR_6);

 VAR_10 = FUNC_1(VAR_6, &VAR_9);
 FUNC_3(VAR_10, -VAR_3);
 FUNC_5(VAR_9, VAR_8);

 return FUNC_4();
}
