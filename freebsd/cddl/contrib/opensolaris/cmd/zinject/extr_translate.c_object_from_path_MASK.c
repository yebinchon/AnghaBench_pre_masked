
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zi_object; int zi_objset; } ;
typedef TYPE_1__ zinject_record_t ;
struct stat64 {int st_ino; } ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int ,int ,int **) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int VAR_3 ;
 char* FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, const char *VAR_5, struct stat64 *VAR_6,
    zinject_record_t *VAR_7)
{
 objset_t *VAR_8;
 int VAR_9;





 FUNC_5();

 VAR_9 = FUNC_2(VAR_4, VAR_1, VAR_0, VAR_2, &VAR_8);
 if (VAR_9 != 0) {
  (void) FUNC_3(VAR_3, "cannot open dataset '%s': %s\n",
      VAR_4, FUNC_4(VAR_9));
  return (-1);
 }

 VAR_7->zi_objset = FUNC_1(VAR_8);
 VAR_7->zi_object = VAR_6->st_ino;

 FUNC_0(VAR_8, VAR_2);

 return (0);
}
