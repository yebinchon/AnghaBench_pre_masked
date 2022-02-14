
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char time_t ;
struct TYPE_5__ {scalar_t__ tl_data_type; char* tl_data_contents; size_t tl_data_length; } ;
typedef TYPE_1__ krb5_tl_data ;
typedef int krb5_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef char* heim_utf8_string ;
struct TYPE_6__ {int entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
typedef int HDB_extension ;
typedef int HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char*,int,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,char*) ;
 scalar_t__ FUNC_3 (int ,int *,unsigned char) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static kadm5_ret_t
FUNC_5(krb5_context VAR_4,
  HDB *VAR_5,
  hdb_entry_ex *VAR_6,
  const krb5_tl_data *VAR_7)
{
    kadm5_ret_t VAR_8 = 0;

    if (VAR_7->tl_data_type == VAR_3) {
 heim_utf8_string VAR_9 = VAR_7->tl_data_contents;

 if (VAR_9[VAR_7->tl_data_length] != '\0')
     return VAR_0;

 VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_6->entry, VAR_9);

    } else if (VAR_7->tl_data_type == VAR_2) {
 unsigned char *VAR_10;
 time_t VAR_11;

 if (VAR_7->tl_data_length != 4)
     return VAR_0;

 VAR_10 = VAR_7->tl_data_contents;

 VAR_11 = VAR_10[0] | (VAR_10[1] << 8) | (VAR_10[2] << 16) | (VAR_10[3] << 24);

 VAR_8 = FUNC_3(VAR_4, &VAR_6->entry, VAR_11);

    } else if (VAR_7->tl_data_type == VAR_1) {
 HDB_extension VAR_12;

 VAR_8 = FUNC_0(VAR_7->tl_data_contents,
       VAR_7->tl_data_length,
       &VAR_12,
       ((void*)0));
 if (VAR_8)
     return VAR_0;

 VAR_8 = FUNC_4(VAR_4, &VAR_6->entry, &VAR_12);
 FUNC_1(&VAR_12);
    } else {
 return VAR_0;
    }
    return VAR_8;
}
