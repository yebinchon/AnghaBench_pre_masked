
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* path; int * dlh; int ** func; } ;
typedef TYPE_1__ pam_module_t ;
typedef int * pam_func_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int *,char*) ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,char const*,...) ;
 int * VAR_5 ;
 TYPE_1__* FUNC_7 (char const*) ;
 int * FUNC_8 (char const*) ;

__attribute__((used)) static pam_module_t *
FUNC_9(const char *VAR_6)
{
 const pam_module_t *VAR_7;
 pam_module_t *VAR_8;
 int VAR_9, VAR_10;

 if ((VAR_8 = FUNC_1(1, sizeof *VAR_8)) == ((void*)0) ||
     (VAR_8->path = FUNC_7(VAR_6)) == ((void*)0) ||
     (VAR_8->dlh = FUNC_8(VAR_6)) == ((void*)0))
  goto err;
 VAR_7 = FUNC_5(VAR_8->dlh, "_pam_module");
 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
  if (VAR_7) {
   VAR_8->func[VAR_9] = VAR_7->func[VAR_9];
  } else {
   VAR_8->func[VAR_9] = (pam_func_t)FUNC_4(VAR_8->dlh,
       VAR_5[VAR_9]);
  }
 }
 return (VAR_8);
err:
 VAR_10 = VAR_4;
 if (VAR_8 != ((void*)0)) {
  if (VAR_8->dlh != ((void*)0))
   FUNC_2(VAR_8->dlh);
  if (VAR_8->path != ((void*)0))
   FUNC_0(VAR_8->path);
  FUNC_0(VAR_8);
 }
 VAR_4 = VAR_10;
 if (VAR_10 != 0 && VAR_10 != VAR_0)
  FUNC_6(VAR_1, "%s: %m", VAR_6);
 VAR_4 = VAR_10;
 return (((void*)0));
}
