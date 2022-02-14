
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nis_callback_data {int ncd_map; int ncd_m; int (* ncd_fn ) (int ,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,int,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_5, char *VAR_6, int VAR_7, char *VAR_8, int VAR_9, char *VAR_10)
{
  struct nis_callback_data *VAR_11 = (struct nis_callback_data *) VAR_10;

  if (VAR_5 == VAR_4) {


    char *VAR_12 = FUNC_1(VAR_6, VAR_7);
    char *VAR_13 = FUNC_1(VAR_8, VAR_9);

    (*VAR_11->ncd_fn) (VAR_11->ncd_m, VAR_12, VAR_13);


    return VAR_0;

  } else {


    if (VAR_5 != VAR_3) {

      int VAR_14 = FUNC_4(VAR_5);

      FUNC_0(VAR_2, "yp enumeration of %s: %s, status=%d, e=%d",
    VAR_11->ncd_map, FUNC_3(VAR_14), VAR_5, VAR_14);
    }
    return VAR_1;
  }
}
