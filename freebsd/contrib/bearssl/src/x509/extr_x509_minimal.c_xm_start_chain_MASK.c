
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rp; int dp; } ;
struct TYPE_5__ {size_t num_name_elts; char const* server_name; TYPE_3__ cpu; int rp_stack; int dp_stack; scalar_t__ err; scalar_t__ num_certs; int pkey; TYPE_1__* name_elts; } ;
typedef TYPE_2__ br_x509_minimal_context ;
typedef int br_x509_class ;
struct TYPE_4__ {scalar_t__* buf; scalar_t__ status; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(const br_x509_class **VAR_0, const char *VAR_1)
{
 br_x509_minimal_context *VAR_2;
 size_t VAR_3;

 VAR_2 = (br_x509_minimal_context *)(void *)VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_name_elts; VAR_3 ++) {
  VAR_2->name_elts[VAR_3].status = 0;
  VAR_2->name_elts[VAR_3].buf[0] = 0;
 }
 FUNC_1(&VAR_2->pkey, 0, sizeof VAR_2->pkey);
 VAR_2->num_certs = 0;
 VAR_2->err = 0;
 VAR_2->cpu.dp = VAR_2->dp_stack;
 VAR_2->cpu.rp = VAR_2->rp_stack;
 FUNC_0(&VAR_2->cpu);
 if (VAR_1 == ((void*)0) || *VAR_1 == 0) {
  VAR_2->server_name = ((void*)0);
 } else {
  VAR_2->server_name = VAR_1;
 }
}
