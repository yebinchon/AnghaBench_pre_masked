
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_rfc1490_encap_t {int name; int method; } ;
struct TYPE_4__ {scalar_t__ typecookie; int cmd; int arglen; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {struct ng_rfc1490_encap_t const* enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 scalar_t__ VAR_3 ;


 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int ,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 struct ng_rfc1490_encap_t* VAR_4 ;
 int FUNC_6 (char*,int ,int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_9(node_p VAR_5, item_p VAR_6, hook_p VAR_7)
{
 const priv_p VAR_8 = FUNC_4(VAR_5);
 struct ng_mesg *VAR_9;
 struct ng_mesg *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_1(VAR_6, VAR_9);

 if (VAR_9->header.typecookie == VAR_3) {
  switch (VAR_9->header.cmd) {
  case 128:
  {
   const struct ng_rfc1490_encap_t *VAR_12;
   char *VAR_13;
   size_t VAR_14;

   if (VAR_9->header.arglen == 0)
    FUNC_0(VAR_0);

   VAR_13 = (char *)VAR_9->data;
   VAR_14 = VAR_9->header.arglen - 1;


   for (VAR_12 = VAR_4; VAR_12->method != 0; VAR_12++ )
    if ((FUNC_7(VAR_12->name) == VAR_14) &&
        !FUNC_8(VAR_12->name, VAR_13, VAR_14))
     break;

   if (VAR_12->method != 0)
    VAR_8->enc = VAR_12;
   else
    VAR_11 = VAR_0;
   break;
  }
  case 129:

   FUNC_3(VAR_10, VAR_9, FUNC_7(VAR_8->enc->name) + 1, VAR_2);
   if (VAR_10 == ((void*)0))
    FUNC_0(VAR_1);

   FUNC_6((char *)VAR_10->data, VAR_8->enc->name,
       FUNC_7(VAR_8->enc->name) + 1);
   break;

  default:
   VAR_11 = VAR_0;
   break;
  }
 } else
  VAR_11 = VAR_0;

done:
 FUNC_5(VAR_11, VAR_5, VAR_6, VAR_10);
 FUNC_2(VAR_9);
 return (VAR_11);
}
