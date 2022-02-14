
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_3__ {int have_ip; scalar_t__ suppressed; int ip; } ;
struct TYPE_4__ {TYPE_1__ ip; } ;
struct pt_config {scalar_t__ end; scalar_t__ begin; } ;
struct ptu_decoder_fixture {int (* header ) (struct ptu_decoder_fixture*) ;TYPE_2__ decoder; TYPE_1__ last_ip; int encoder; scalar_t__ buffer; struct pt_config config; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct pt_config*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct pt_config*) ;
 int FUNC_3 (TYPE_2__*,struct pt_config*) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (struct ptu_decoder_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct ptu_decoder_fixture *VAR_1)
{
 struct pt_config *VAR_2 = &VAR_1->config;
 int VAR_3;

 (void) FUNC_0(VAR_1->buffer, 0, sizeof(VAR_1->buffer));

 FUNC_1(VAR_2);

 VAR_2->begin = VAR_1->buffer;
 VAR_2->end = VAR_1->buffer + sizeof(VAR_1->buffer);

 VAR_3 = FUNC_2(&VAR_1->encoder, VAR_2);
 FUNC_4(VAR_3, 0);

 VAR_3 = FUNC_3(&VAR_1->decoder, VAR_2);
 FUNC_4(VAR_3, 0);

 VAR_1->decoder.ip.ip = VAR_0;
 VAR_1->decoder.ip.have_ip = 1;
 VAR_1->decoder.ip.suppressed = 0;

 VAR_1->last_ip = VAR_1->decoder.ip;

 if (VAR_1->header)
  VAR_1->header(VAR_1);

 return FUNC_5();
}
