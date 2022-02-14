
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zi_func; } ;
typedef TYPE_1__ zinject_record_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, const char *VAR_1, zinject_record_t *VAR_2,
    void *VAR_3)
{
 int *VAR_4 = VAR_3;

 if (VAR_2->zi_func[0] == '\0')
  return (0);

 if (*VAR_4 == 0) {
  (void) FUNC_0("%3s  %-15s  %s\n", "ID", "POOL", "FUNCTION");
  (void) FUNC_0("---  ---------------  ----------------\n");
 }

 *VAR_4 += 1;

 (void) FUNC_0("%3d  %-15s  %s\n", VAR_0, VAR_1, VAR_2->zi_func);

 return (0);
}
