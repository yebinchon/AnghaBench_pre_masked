
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * val; } ;
typedef TYPE_1__ hx509_name_constraints ;
typedef int hx509_context ;
typedef int NameConstraints ;
typedef int Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,char*) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(hx509_context VAR_3, const Certificate *VAR_4, int VAR_5,
       hx509_name_constraints *VAR_6)
{
    NameConstraints VAR_7;
    int VAR_8;

    VAR_8 = FUNC_1(VAR_4, &VAR_7);
    if (VAR_8 == VAR_1)
 return 0;
    else if (VAR_8) {
 FUNC_4(VAR_3, 0, VAR_8, "Failed getting NameConstraints");
 return VAR_8;
    } else if (VAR_5) {
 VAR_8 = VAR_2;
 FUNC_4(VAR_3, 0, VAR_8, "Not a CA and "
          "have NameConstraints");
    } else {
 NameConstraints *VAR_9;
 VAR_9 = FUNC_5(VAR_6->val, sizeof(VAR_6->val[0]) * (VAR_6->len + 1));
 if (VAR_9 == ((void*)0)) {
     FUNC_3(VAR_3);
     VAR_8 = VAR_0;
     goto out;
 }
 VAR_6->val = VAR_9;
 VAR_8 = FUNC_0(&VAR_7, &VAR_6->val[VAR_6->len]);
 if (VAR_8) {
     FUNC_3(VAR_3);
     goto out;
 }
 VAR_6->len += 1;
    }
out:
    FUNC_2(&VAR_7);
    return VAR_8;
}
