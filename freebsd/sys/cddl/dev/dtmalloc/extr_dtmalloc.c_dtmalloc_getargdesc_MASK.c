
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_id_t ;
struct TYPE_3__ {int dtargd_ndx; int dtargd_native; } ;
typedef TYPE_1__ dtrace_argdesc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3, dtrace_argdesc_t *VAR_4)
{
 const char *VAR_5 = ((void*)0);

 switch (VAR_4->dtargd_ndx) {
 case 0:
  VAR_5 = "struct malloc_type *";
  break;
 case 1:
  VAR_5 = "struct malloc_type_internal *";
  break;
 case 2:
  VAR_5 = "struct malloc_type_stats *";
  break;
 case 3:
  VAR_5 = "unsigned long";
  break;
 case 4:
  VAR_5 = "int";
  break;
 default:
  VAR_4->dtargd_ndx = VAR_0;
  break;
 }

 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_4->dtargd_native, VAR_5, sizeof(VAR_4->dtargd_native));

 return;
}
