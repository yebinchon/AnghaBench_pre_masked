
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* vtable; } ;
typedef TYPE_1__ br_x509_minimal_context ;
struct TYPE_14__ {int data_len; int data; } ;
typedef TYPE_2__ br_x509_certificate ;
struct TYPE_15__ {unsigned char* oid; char* buf; size_t len; int status; } ;
typedef TYPE_3__ br_name_element ;
struct TYPE_16__ {int (* end_chain ) (TYPE_5__**) ;int (* end_cert ) (TYPE_5__**) ;int (* append ) (TYPE_5__**,int ,int ) ;int (* start_cert ) (TYPE_5__**,int ) ;int (* start_chain ) (TYPE_5__**,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_5__**,int *) ;
 int FUNC_3 (TYPE_5__**,int ) ;
 int FUNC_4 (TYPE_5__**,int ,int ) ;
 int FUNC_5 (TYPE_5__**) ;
 int FUNC_6 (TYPE_5__**) ;

__attribute__((used)) static char *
FUNC_7(br_x509_certificate *VAR_1, char *VAR_2, size_t VAR_3)
{
 br_x509_minimal_context VAR_4;
 br_name_element VAR_5;
 unsigned char VAR_6[4];
 int VAR_7;

 if (VAR_2 == ((void*)0))
  return (VAR_2);




 VAR_6[0] = 3;
 VAR_6[1] = 0x55;
 VAR_6[2] = 4;
 VAR_6[3] = 3;
 VAR_5.oid = VAR_6;
 VAR_5.buf = VAR_2;
 VAR_5.len = VAR_3;
 VAR_5.buf[0] = '\0';

 FUNC_0(&VAR_4, &VAR_0, ((void*)0), 0);
 FUNC_1(&VAR_4, &VAR_5, 1);

 VAR_4.vtable->start_chain(&VAR_4.vtable, ((void*)0));
 VAR_4.vtable->start_cert(&VAR_4.vtable, VAR_1->data_len);
 VAR_4.vtable->append(&VAR_4.vtable, VAR_1->data, VAR_1->data_len);
 VAR_4.vtable->end_cert(&VAR_4.vtable);

 VAR_7 = VAR_4.vtable->end_chain(&VAR_4.vtable);

 if (!VAR_5.status)
  VAR_2 = ((void*)0);
 return (VAR_2);
}
