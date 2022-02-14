
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint_t ;
typedef int ssize_t ;
typedef int linker_ctf_t ;
struct TYPE_11__ {int ctt_name; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
struct TYPE_12__ {scalar_t__ cd_err; size_t* cd_order; int cd_len; TYPE_3__* cd_nodes; } ;
typedef TYPE_2__ ctf_decl_t ;
typedef size_t ctf_decl_prec_t ;
struct TYPE_13__ {int cd_kind; int cd_n; int cd_type; } ;
typedef TYPE_3__ ctf_decl_node_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 char* FUNC_6 (int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_7(linker_ctf_t *VAR_5, ctf_id_t VAR_6, char *VAR_7, size_t VAR_8)
{
 ctf_decl_t VAR_9;
 ctf_decl_node_t *VAR_10;
 ctf_decl_prec_t VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 uint_t VAR_16;

 if (VAR_5 == ((void*)0) && VAR_6 == VAR_0)
  return (-1);

 FUNC_1(&VAR_9, VAR_7, VAR_8);
 FUNC_2(&VAR_9, VAR_5, VAR_6);

 if (VAR_9.cd_err != 0) {
  FUNC_0(&VAR_9);
  return (-1);
 }
 VAR_14 = VAR_9.cd_order[VAR_4] > VAR_4;
 VAR_15 = VAR_9.cd_order[VAR_1] > VAR_1;

 VAR_13 = VAR_15 ? VAR_1 : VAR_14 ? VAR_4 : -1;
 VAR_12 = VAR_14 ? VAR_4 : VAR_15 ? VAR_1 : -1;

 VAR_16 = 133;

 for (VAR_11 = VAR_2; VAR_11 < VAR_3; VAR_11++) {
  for (VAR_10 = FUNC_4(&VAR_9.cd_nodes[VAR_11]);
      VAR_10 != ((void*)0); VAR_10 = FUNC_4(VAR_10)) {

   const ctf_type_t *VAR_17 =
       FUNC_5(VAR_5, VAR_10->cd_type);
   const char *VAR_18 = FUNC_6(VAR_5, VAR_17->ctt_name);

   if (VAR_16 != 133 && VAR_16 != 140)
    FUNC_3(&VAR_9, " ");

   if (VAR_12 == VAR_11) {
    FUNC_3(&VAR_9, "(");
    VAR_12 = -1;
   }

   switch (VAR_10->cd_kind) {
   case 134:
   case 137:
   case 130:
    FUNC_3(&VAR_9, "%s", VAR_18);
    break;
   case 133:
    FUNC_3(&VAR_9, "*");
    break;
   case 140:
    FUNC_3(&VAR_9, "[%u]", VAR_10->cd_n);
    break;
   case 135:
    FUNC_3(&VAR_9, "()");
    break;
   case 131:
   case 136:
    FUNC_3(&VAR_9, "struct %s", VAR_18);
    break;
   case 129:
    FUNC_3(&VAR_9, "union %s", VAR_18);
    break;
   case 138:
    FUNC_3(&VAR_9, "enum %s", VAR_18);
    break;
   case 128:
    FUNC_3(&VAR_9, "volatile");
    break;
   case 139:
    FUNC_3(&VAR_9, "const");
    break;
   case 132:
    FUNC_3(&VAR_9, "restrict");
    break;
   }

   VAR_16 = VAR_10->cd_kind;
  }

  if (VAR_13 == VAR_11)
   FUNC_3(&VAR_9, ")");
 }

 FUNC_0(&VAR_9);
 return (VAR_9.cd_len);
}
