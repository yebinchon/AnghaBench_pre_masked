
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_id_t ;
struct TYPE_3__ {char* dtargd_native; int dtargd_ndx; } ;
typedef TYPE_1__ dtrace_argdesc_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (int,int ,char*,int) ;
 int FUNC_3 (int,int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3,
    dtrace_argdesc_t *VAR_4)
{
 int VAR_5 = FUNC_1((uintptr_t)VAR_3);

 if (FUNC_0((uintptr_t)VAR_3))
  FUNC_2(VAR_5, VAR_4->dtargd_ndx,
      VAR_4->dtargd_native, sizeof(VAR_4->dtargd_native));
 else
  FUNC_3(VAR_5, VAR_4->dtargd_ndx,
      VAR_4->dtargd_native, sizeof(VAR_4->dtargd_native));

 if (VAR_4->dtargd_native[0] == '\0')
  VAR_4->dtargd_ndx = VAR_0;
}
