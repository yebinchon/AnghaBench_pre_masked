
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_packet {int type; } ;
struct pt_decoder_function {int dummy; } ;
struct fetch_fixture {int dummy; } ;
typedef int packet ;
typedef enum pt_packet_type { ____Placeholder_pt_packet_type } pt_packet_type ;


 int VAR_0 ;
 int FUNC_0 (struct pt_packet*,int ,int) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ,struct fetch_fixture*,struct pt_packet*,struct pt_decoder_function const*) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct fetch_fixture *VAR_1,
           enum pt_packet_type VAR_2,
           const struct pt_decoder_function *VAR_3)
{
 struct pt_packet VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_2;

 FUNC_2(VAR_0, VAR_1, &VAR_4, VAR_3);

 return FUNC_1();
}
