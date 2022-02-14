
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {char* data; TYPE_1__ header; } ;
struct ng_bpf_hookstat {char* thisHook; int bpf_prog_len; } ;
struct ng_bpf_hookprog {char* thisHook; int bpf_prog_len; } ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;
typedef TYPE_2__* hinfo_p ;
struct TYPE_4__ {struct ng_bpf_hookstat stats; struct ng_bpf_hookstat* prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct ng_mesg*) ;






 int FUNC_2 (int ) ;
 int FUNC_3 (struct ng_mesg*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_7 (struct ng_bpf_hookstat*,char*,int) ;
 int FUNC_8 (struct ng_bpf_hookstat*,int) ;
 int FUNC_9 (int *,struct ng_bpf_hookstat* const) ;
 int * FUNC_10 (int ,char*) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_4, item_p VAR_5, hook_p VAR_6)
{
 struct ng_mesg *VAR_7;
 struct ng_mesg *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_1(VAR_5, VAR_7);
 switch (VAR_7->header.typecookie) {
 case 132:
  switch (VAR_7->header.cmd) {
  case 128:
      {
   struct ng_bpf_hookprog *const
       VAR_10 = (struct ng_bpf_hookprog *)VAR_7->data;
   hook_p VAR_11;


   if (VAR_7->header.arglen < sizeof(*VAR_10)
       || VAR_7->header.arglen
         != FUNC_2(VAR_10->bpf_prog_len))
    FUNC_0(VAR_0);


   if ((VAR_11 = FUNC_10(VAR_4, VAR_10->thisHook)) == ((void*)0))
    FUNC_0(VAR_1);


   if ((VAR_9 = FUNC_9(VAR_11, VAR_10)) != 0)
    FUNC_0(VAR_9);
   break;
      }

  case 130:
      {
   struct ng_bpf_hookprog *VAR_12;
   hook_p VAR_13;


   if (VAR_7->header.arglen == 0)
    FUNC_0(VAR_0);
   VAR_7->data[VAR_7->header.arglen - 1] = '\0';


   if ((VAR_13 = FUNC_10(VAR_4, VAR_7->data)) == ((void*)0))
    FUNC_0(VAR_1);


   VAR_12 = ((hinfo_p)FUNC_4(VAR_13))->prog;
   FUNC_5(VAR_8, VAR_7,
       FUNC_2(VAR_12->bpf_prog_len), VAR_3);
   if (VAR_8 == ((void*)0))
    FUNC_0(VAR_2);
   FUNC_7(VAR_12, VAR_8->data,
      FUNC_2(VAR_12->bpf_prog_len));
   break;
      }

  case 129:
  case 133:
  case 131:
      {
   struct ng_bpf_hookstat *VAR_14;
   hook_p VAR_15;


   if (VAR_7->header.arglen == 0)
    FUNC_0(VAR_0);
   VAR_7->data[VAR_7->header.arglen - 1] = '\0';


   if ((VAR_15 = FUNC_10(VAR_4, VAR_7->data)) == ((void*)0))
    FUNC_0(VAR_1);
   VAR_14 = &((hinfo_p)FUNC_4(VAR_15))->stats;


   if (VAR_7->header.cmd != 133) {
    FUNC_5(VAR_8,
        VAR_7, sizeof(*VAR_14), VAR_3);
    if (VAR_8 == ((void*)0))
     FUNC_0(VAR_2);
    FUNC_7(VAR_14, VAR_8->data, sizeof(*VAR_14));
   }


   if (VAR_7->header.cmd != 129)
    FUNC_8(VAR_14, sizeof(*VAR_14));
   break;
      }

  default:
   VAR_9 = VAR_0;
   break;
  }
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }
done:
 FUNC_6(VAR_9, VAR_4, VAR_5, VAR_8);
 FUNC_3(VAR_7);
 return (VAR_9);
}
