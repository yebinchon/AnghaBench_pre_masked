
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_3__ {int bit_size; } ;
struct TYPE_4__ {TYPE_1__ tnt; } ;
struct pt_packet {TYPE_2__ payload; int type; } ;
struct fetch_fixture {int dummy; } ;
typedef int packet ;


 int VAR_0 ;
 int FUNC_0 (struct pt_packet*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ,struct fetch_fixture*,struct pt_packet*,int *) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct fetch_fixture *VAR_3)
{
 struct pt_packet VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_1;
 VAR_4.payload.tnt.bit_size = 1;

 FUNC_2(VAR_0, VAR_3, &VAR_4, &VAR_2);

 return FUNC_1();
}
