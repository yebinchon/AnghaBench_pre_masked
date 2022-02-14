
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_request {int cr_tag; struct ciss_command* cr_cc; } ;
struct TYPE_2__ {int host_tag; } ;
struct ciss_command {TYPE_1__ header; } ;


 int FUNC_0 (struct ciss_request*) ;
 int FUNC_1 (struct ciss_request*) ;
 int FUNC_2 (int,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ciss_request *VAR_0)
{
    struct ciss_command *VAR_1;
    int VAR_2;

    VAR_1 = VAR_0->cr_cc;
    FUNC_2(2, "post command %d tag %d ", VAR_0->cr_tag, VAR_1->header.host_tag);




    if ((VAR_2 = FUNC_0(VAR_0)))
 return(VAR_2);





    return(0);
}
