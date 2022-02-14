
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int u_char ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_14__ {int len; TYPE_4__* val; } ;
struct TYPE_16__ {int kvno; TYPE_1__ keys; } ;
typedef TYPE_3__ hdb_entry ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_15__ {int keytype; TYPE_9__ keyvalue; } ;
struct TYPE_17__ {int* mkvno; TYPE_12__* salt; TYPE_2__ key; } ;
struct TYPE_13__ {unsigned int type; TYPE_9__ salt; } ;
typedef TYPE_4__ Key ;


 TYPE_12__* FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_9__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_9__*,char*,size_t) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ,int,char*) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (char*,char*,...) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char*) ;
 char* FUNC_13 (char**,char*) ;

__attribute__((used)) static int
FUNC_14(hdb_entry *VAR_1, char *VAR_2)
{
    krb5_error_code VAR_3;
    int VAR_4;
    char *VAR_5;
    size_t VAR_6;

    VAR_5 = FUNC_13(&VAR_2, ":");
    if (FUNC_9(VAR_5, "%d", &VAR_4) != 1)
 return 1;
    VAR_1->kvno = VAR_4;
    VAR_5 = FUNC_13(&VAR_2, ":");
    while(VAR_5){
 Key *VAR_7;
 VAR_7 = FUNC_8(VAR_1->keys.val,
        (VAR_1->keys.len + 1) * sizeof(*VAR_1->keys.val));
 if(VAR_7 == ((void*)0))
     FUNC_5 (VAR_0, 1, "realloc: out of memory");
 VAR_1->keys.val = VAR_7;
 VAR_7 = VAR_1->keys.val + VAR_1->keys.len;
 VAR_1->keys.len++;
 FUNC_7(VAR_7, 0, sizeof(*VAR_7));
 if(FUNC_9(VAR_5, "%d", &VAR_4) == 1) {
     VAR_7->mkvno = FUNC_6(sizeof(*VAR_7->mkvno));
     *VAR_7->mkvno = VAR_4;
 } else
     VAR_7->mkvno = ((void*)0);
 VAR_5 = FUNC_13(&VAR_2, ":");
 if (FUNC_9(VAR_5, "%d", &VAR_4) != 1)
     return 1;
 VAR_7->key.keytype = VAR_4;
 VAR_5 = FUNC_13(&VAR_2, ":");
 VAR_3 = FUNC_1(&VAR_7->key.keyvalue, (FUNC_12(VAR_5) - 1) / 2 + 1);
 if (VAR_3)
     FUNC_4 (VAR_0, 1, VAR_3, "krb5_data_alloc");
 for(VAR_6 = 0; VAR_6 < FUNC_12(VAR_5); VAR_6 += 2) {
     if(FUNC_9(VAR_5 + VAR_6, "%02x", &VAR_4) != 1)
  return 1;
     ((u_char*)VAR_7->key.keyvalue.data)[VAR_6 / 2] = VAR_4;
 }
 VAR_5 = FUNC_13(&VAR_2, ":");
 if(FUNC_11(VAR_5, "-") != 0){
     unsigned VAR_8;
     size_t VAR_9;

     if(FUNC_9(VAR_5, "%u/", &VAR_8) != 1)
  return 1;
     VAR_5 = FUNC_10(VAR_5, '/');
     if(VAR_5 == ((void*)0))
  return 1;
     VAR_5++;
     VAR_9 = FUNC_12(VAR_5);

     VAR_7->salt = FUNC_0(1, sizeof(*VAR_7->salt));
     if (VAR_7->salt == ((void*)0))
  FUNC_5 (VAR_0, 1, "malloc: out of memory");
     VAR_7->salt->type = VAR_8;

     if (VAR_9) {
  if(*VAR_5 == '\"') {
      VAR_3 = FUNC_2(&VAR_7->salt->salt, VAR_5 + 1, VAR_9 - 2);
      if (VAR_3)
   FUNC_4 (VAR_0, 1, VAR_3, "krb5_data_copy");
  } else {
      VAR_3 = FUNC_1(&VAR_7->salt->salt,
       (VAR_9 - 1) / 2 + 1);
      if (VAR_3)
   FUNC_4 (VAR_0, 1, VAR_3, "krb5_data_alloc");
      for(VAR_6 = 0; VAR_6 < VAR_9; VAR_6 += 2){
   if (FUNC_9(VAR_5 + VAR_6, "%02x", &VAR_4) != 1)
       return 1;
   ((u_char*)VAR_7->salt->salt.data)[VAR_6 / 2] = VAR_4;
      }
  }
     } else
  FUNC_3 (&VAR_7->salt->salt);
 }
 VAR_5 = FUNC_13(&VAR_2, ":");
    }
    return 0;
}
