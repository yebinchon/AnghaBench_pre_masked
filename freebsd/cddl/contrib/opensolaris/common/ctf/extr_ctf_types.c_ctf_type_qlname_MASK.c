
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint_t ;
typedef int ssize_t ;
struct TYPE_11__ {int ctt_name; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_12__ {scalar_t__ cd_err; size_t* cd_order; size_t cd_len; TYPE_3__* cd_nodes; } ;
typedef TYPE_2__ ctf_decl_t ;
typedef size_t ctf_decl_prec_t ;
struct TYPE_13__ {int cd_kind; int cd_n; int cd_type; } ;
typedef TYPE_3__ ctf_decl_node_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 TYPE_1__* FUNC_5 (int **,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 char* FUNC_7 (int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_8(ctf_file_t *VAR_6, ctf_id_t VAR_7, char *VAR_8, size_t VAR_9,
    const char *VAR_10)
{
 ctf_decl_t VAR_11;
 ctf_decl_node_t *VAR_12;
 ctf_decl_prec_t VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 uint_t VAR_18;

 if (VAR_6 == ((void*)0) && VAR_7 == VAR_0)
  return (-1);

 FUNC_1(&VAR_11, VAR_8, VAR_9);
 FUNC_2(&VAR_11, VAR_6, VAR_7);

 if (VAR_11.cd_err != 0) {
  FUNC_0(&VAR_11);
  return (FUNC_6(VAR_6, VAR_11.cd_err));
 }
 VAR_16 = VAR_11.cd_order[VAR_4] > VAR_4;
 VAR_17 = VAR_11.cd_order[VAR_1] > VAR_1;

 VAR_15 = VAR_17 ? VAR_1 : VAR_16 ? VAR_4 : -1;
 VAR_14 = VAR_16 ? VAR_4 : VAR_17 ? VAR_1 : -1;

 VAR_18 = 133;

 for (VAR_13 = VAR_2; VAR_13 < VAR_3; VAR_13++) {
  for (VAR_12 = FUNC_4(&VAR_11.cd_nodes[VAR_13]);
      VAR_12 != ((void*)0); VAR_12 = FUNC_4(VAR_12)) {

   ctf_file_t *VAR_19 = VAR_6;
   const ctf_type_t *VAR_20 =
       FUNC_5(&VAR_19, VAR_12->cd_type);
   const char *VAR_21 = FUNC_7(VAR_19, VAR_20->ctt_name);

   if (VAR_18 != 133 && VAR_18 != 140)
    FUNC_3(&VAR_11, " ");

   if (VAR_14 == VAR_13) {
    FUNC_3(&VAR_11, "(");
    VAR_14 = -1;
   }

   switch (VAR_12->cd_kind) {
   case 134:
   case 137:
   case 130:
    if (VAR_10 != ((void*)0))
     FUNC_3(&VAR_11, "%s`", VAR_10);
    FUNC_3(&VAR_11, "%s", VAR_21);
    break;
   case 133:
    FUNC_3(&VAR_11, "*");
    break;
   case 140:
    FUNC_3(&VAR_11, "[%u]", VAR_12->cd_n);
    break;
   case 135:
    FUNC_3(&VAR_11, "()");
    break;
   case 131:
   case 136:
    FUNC_3(&VAR_11, "struct ");
    if (VAR_10 != ((void*)0))
     FUNC_3(&VAR_11, "%s`", VAR_10);
    FUNC_3(&VAR_11, "%s", VAR_21);
    break;
   case 129:
    FUNC_3(&VAR_11, "union ");
    if (VAR_10 != ((void*)0))
     FUNC_3(&VAR_11, "%s`", VAR_10);
    FUNC_3(&VAR_11, "%s", VAR_21);
    break;
   case 138:
    FUNC_3(&VAR_11, "enum ");
    if (VAR_10 != ((void*)0))
     FUNC_3(&VAR_11, "%s`", VAR_10);
    FUNC_3(&VAR_11, "%s", VAR_21);
    break;
   case 128:
    FUNC_3(&VAR_11, "volatile");
    break;
   case 139:
    FUNC_3(&VAR_11, "const");
    break;
   case 132:
    FUNC_3(&VAR_11, "restrict");
    break;
   }

   VAR_18 = VAR_12->cd_kind;
  }

  if (VAR_15 == VAR_13)
   FUNC_3(&VAR_11, ")");
 }

 if (VAR_11.cd_len >= VAR_9)
  (void) FUNC_6(VAR_6, VAR_5);

 FUNC_0(&VAR_11);
 return (VAR_11.cd_len);
}
