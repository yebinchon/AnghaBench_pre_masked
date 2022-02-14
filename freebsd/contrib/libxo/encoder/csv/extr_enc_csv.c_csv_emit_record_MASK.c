
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xo_handle_t ;
typedef int uint32_t ;
typedef size_t ssize_t ;
struct TYPE_7__ {int f_flags; scalar_t__ f_value; scalar_t__ f_name; } ;
typedef TYPE_1__ leaf_t ;
struct TYPE_8__ {size_t c_leaf_depth; int c_flags; int c_value_buf; TYPE_1__* c_leaf; int c_data; int c_name_buf; } ;
typedef TYPE_2__ csv_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,char*) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,TYPE_2__*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,int) ;
 char* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10 (xo_handle_t *VAR_8, csv_private_t *VAR_9)
{
    FUNC_1(VAR_8, VAR_9, "csv: emit: ...\n");

    ssize_t VAR_10;
    uint32_t VAR_11;
    leaf_t *VAR_12;


    if (VAR_9->c_leaf_depth == 0)
 return;

    if (!(VAR_9->c_flags & (VAR_0 | VAR_2))) {
 VAR_9->c_flags |= VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_9->c_leaf_depth; VAR_10++) {
     VAR_12 = &VAR_9->c_leaf[VAR_10];
     const char *VAR_13 = FUNC_6(&VAR_9->c_name_buf, VAR_12->f_name);

     if (VAR_10 != 0)
  FUNC_5(&VAR_9->c_data, ",", 1);

     FUNC_5(&VAR_9->c_data, VAR_13, FUNC_4(VAR_13));
 }

 FUNC_0(&VAR_9->c_data, VAR_9);
    }

    for (VAR_10 = 0; VAR_10 < VAR_9->c_leaf_depth; VAR_10++) {
 VAR_12 = &VAR_9->c_leaf[VAR_10];
 const char *VAR_14;

 if (VAR_12->f_flags & VAR_3) {
     VAR_14 = FUNC_6(&VAR_9->c_value_buf, VAR_12->f_value);
 } else {
     VAR_14 = "";
 }

 VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_14);

 if (VAR_10 != 0)
     FUNC_5(&VAR_9->c_data, ",", 1);

 if (VAR_11 & VAR_5)
     FUNC_5(&VAR_9->c_data, "\"", 1);

 if (VAR_11 & VAR_4)
     FUNC_2(&VAR_9->c_data, VAR_14, FUNC_4(VAR_14));
 else
     FUNC_5(&VAR_9->c_data, VAR_14, FUNC_4(VAR_14));

 if (VAR_11 & VAR_5)
     FUNC_5(&VAR_9->c_data, "\"", 1);
    }

    FUNC_0(&VAR_9->c_data, VAR_9);


    if (FUNC_9(VAR_8) & (VAR_6 | VAR_7))
 FUNC_8(VAR_8);


    for (VAR_10 = 0; VAR_10 < VAR_9->c_leaf_depth; VAR_10++) {
 VAR_12 = &VAR_9->c_leaf[VAR_10];

 VAR_12->f_flags &= ~VAR_3;
 VAR_12->f_value = 0;
    }

    FUNC_7(&VAR_9->c_value_buf);





    VAR_9->c_flags |= VAR_1;
}
