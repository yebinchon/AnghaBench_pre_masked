
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey_cert {int dummy; } ;
struct sshauthopt {int dummy; } ;
struct ssh {int dummy; } ;
struct passwd {int dummy; } ;
struct TYPE_2__ {int strict_modes; } ;
typedef int FILE ;


 int * FUNC_0 (char*,struct passwd*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct ssh*,int *,char*,struct sshkey_cert*,struct sshauthopt**) ;
 int FUNC_4 () ;
 int FUNC_5 (struct passwd*) ;

__attribute__((used)) static int
FUNC_6(struct ssh *VAR_1, struct passwd *VAR_2, char *VAR_3,
    struct sshkey_cert *VAR_4, struct sshauthopt **VAR_5)
{
 FILE *VAR_6;
 int VAR_7;

 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);

 FUNC_5(VAR_2);
 FUNC_1("trying authorized principals file %s", VAR_3);
 if ((VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_0.strict_modes)) == ((void*)0)) {
  FUNC_4();
  return 0;
 }
 VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_6);
 FUNC_4();
 return VAR_7;
}
