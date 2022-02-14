
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int symname ;
struct kvm_nlist {char* n_name; scalar_t__ n_type; void* n_value; } ;
struct kld_sym_lookup {int version; char* symname; void* symvalue; scalar_t__ symsize; } ;
typedef int lookup ;
struct TYPE_12__ {int program; } ;
typedef TYPE_1__ kvm_t ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 void* FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 void* FUNC_5 (TYPE_1__*,void*) ;
 int FUNC_6 (int ,int ,struct kld_sym_lookup*) ;
 int FUNC_7 (TYPE_1__*,struct kvm_nlist*) ;
 int FUNC_8 (TYPE_1__*,struct kvm_nlist*,int,char*,void* (*) (TYPE_1__*,void*)) ;
 int FUNC_9 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

int
FUNC_11(kvm_t *VAR_5, struct kvm_nlist *VAR_6, int VAR_7)
{
 struct kvm_nlist *VAR_8;
 int VAR_9;
 struct kld_sym_lookup VAR_10;
 int VAR_11;
 const char *VAR_12 = "";
 char VAR_13[1024];
 int VAR_14, VAR_15;





 if (!FUNC_0(VAR_5)) {
  VAR_11 = FUNC_7(VAR_5, VAR_6);
  if (VAR_11 <= 0)
   return (VAR_11);

  if (FUNC_4(VAR_5, VAR_7))
   VAR_11 = FUNC_8(VAR_5, VAR_6, VAR_11,
       VAR_4, FUNC_5);

  if (VAR_11 > 0 && FUNC_1(VAR_5, VAR_7))
   VAR_11 = FUNC_8(VAR_5, VAR_6, VAR_11,
       VAR_0, FUNC_2);

  return (VAR_11);
 }





 VAR_9 = 0;
 VAR_14 = 0;
 VAR_15 = 0;
again:
 for (VAR_8 = VAR_6; VAR_8->n_name && VAR_8->n_name[0]; ++VAR_8) {
  if (VAR_8->n_type != VAR_3)
   continue;

  VAR_10.version = sizeof(VAR_10);
  VAR_10.symvalue = 0;
  VAR_10.symsize = 0;

  VAR_11 = FUNC_9(VAR_13, sizeof(VAR_13), "%s%s", VAR_12,
      (VAR_12[0] != '\0' && VAR_8->n_name[0] == '_') ?
   (VAR_8->n_name + 1) : VAR_8->n_name);
  if (VAR_11 < 0 || VAR_11 >= (int)sizeof(VAR_13))
   continue;
  VAR_10.symname = VAR_13;
  if (VAR_10.symname[0] == '_')
   VAR_10.symname++;

  if (FUNC_6(0, VAR_1, &VAR_10) != -1) {
   VAR_8->n_type = VAR_2;
   if (FUNC_4(VAR_5, VAR_7) &&
       FUNC_10(VAR_12, VAR_4) == 0)
    VAR_8->n_value =
        FUNC_5(VAR_5, VAR_10.symvalue);
   else if (FUNC_1(VAR_5, VAR_7) &&
       FUNC_10(VAR_12, VAR_0) == 0)
    VAR_8->n_value =
        FUNC_2(VAR_5, VAR_10.symvalue);
   else
    VAR_8->n_value = VAR_10.symvalue;
   ++VAR_9;

  }
 }





 VAR_11 = ((VAR_8 - VAR_6) - VAR_9);
 if (VAR_11 && FUNC_4(VAR_5, VAR_7) && !VAR_14) {
  VAR_14 = 1;
  VAR_12 = VAR_4;
  goto again;
 }
 if (VAR_11 && FUNC_1(VAR_5, VAR_7) && !VAR_15) {
  VAR_15 = 1;
  VAR_12 = VAR_0;
  goto again;
 }





 VAR_11 = ((VAR_8 - VAR_6) - VAR_9);
 if (VAR_11)
  FUNC_3(VAR_5, VAR_5->program, "kvm_nlist");
 return (VAR_11);
}
