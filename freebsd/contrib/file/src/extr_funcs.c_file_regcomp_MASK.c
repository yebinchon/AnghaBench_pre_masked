
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* pat; int rc; int rx; int * old_lc_ctype; int * c_lc_ctype; } ;
typedef TYPE_1__ file_regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,char const*,int) ;
 int * FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *) ;

int
FUNC_5(file_regex_t *VAR_2, const char *VAR_3, int VAR_4)
{






 VAR_2->old_lc_ctype = FUNC_3(VAR_0, "C");

 VAR_2->pat = VAR_3;

 return VAR_2->rc = FUNC_2(&VAR_2->rx, VAR_3, VAR_4);
}
