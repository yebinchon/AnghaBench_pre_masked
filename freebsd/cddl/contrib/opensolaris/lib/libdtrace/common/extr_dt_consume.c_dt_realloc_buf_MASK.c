
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dtbd_size; int dtbd_oldest; char* dtbd_data; } ;
typedef TYPE_1__ dtrace_bufdesc_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void
FUNC_4(dtrace_hdl_t *VAR_0, dtrace_bufdesc_t *VAR_1, int VAR_2)
{
 uint64_t VAR_3 = VAR_1->dtbd_size - VAR_1->dtbd_oldest;
 if (VAR_3 < VAR_2 / 2) {
  int VAR_4 = VAR_1->dtbd_oldest & (sizeof (uint64_t) - 1);
  char *VAR_5 = FUNC_2(VAR_0, VAR_3 + VAR_4);
  if (VAR_5 == ((void*)0))
   return;
  FUNC_1(VAR_5, VAR_4);
  FUNC_0(VAR_1->dtbd_data + VAR_1->dtbd_oldest,
      VAR_5 + VAR_4, VAR_3);
  FUNC_3(VAR_0, VAR_1->dtbd_data);
  VAR_1->dtbd_oldest = VAR_4;
  VAR_1->dtbd_size = VAR_3 + VAR_4;
  VAR_1->dtbd_data = VAR_5;
 }
}
