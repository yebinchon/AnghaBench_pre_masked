
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ used; size_t len; int data; } ;
typedef TYPE_1__ au_record_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,short) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;

int
FUNC_4(int VAR_8, short VAR_9, u_char *VAR_10, size_t *VAR_11)
{
 size_t VAR_12;
 au_record_t *VAR_13;
 int VAR_14;

 VAR_13 = VAR_6[VAR_8];
 if ((VAR_13 == ((void*)0)) || (VAR_13->used == 0)) {
  VAR_5 = VAR_1;
  return (-1);
 }

 VAR_14 = 0;
 VAR_12 = VAR_13->len + VAR_3 + VAR_0;
 if ((VAR_12 > VAR_4) ||
     (VAR_12 > *VAR_11)) {



  FUNC_2(VAR_7, "au_close_buffer failed %zd", VAR_12);
  VAR_5 = VAR_2;
  VAR_14 = -1;
  goto cleanup;
 }

 if (FUNC_0(VAR_13, VAR_9) < 0) {

  VAR_14 = -1;
  goto cleanup;
 }

 FUNC_3(VAR_10, VAR_13->data, VAR_13->len);
 *VAR_11 = VAR_13->len;

cleanup:
 FUNC_1(VAR_13);
 return (VAR_14);
}
