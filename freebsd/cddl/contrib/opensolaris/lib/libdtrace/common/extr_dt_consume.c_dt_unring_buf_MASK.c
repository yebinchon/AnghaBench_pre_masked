
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {scalar_t__ dtbd_oldest; int dtbd_size; char* dtbd_data; } ;
typedef TYPE_1__ dtrace_bufdesc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int
FUNC_5(dtrace_hdl_t *VAR_0, dtrace_bufdesc_t *VAR_1)
{
 int VAR_2;
 char *VAR_3, *VAR_4;

 if (VAR_1->dtbd_oldest == 0)
  return (0);

 VAR_2 = VAR_1->dtbd_oldest & (sizeof (uint64_t) - 1);
 VAR_3 = VAR_4 = FUNC_3(VAR_0, VAR_1->dtbd_size + VAR_2);

 if (VAR_3 == ((void*)0))
  return (-1);

 FUNC_0(0 == (VAR_1->dtbd_size & (sizeof (uint64_t) - 1)));

 FUNC_2(VAR_4, VAR_2);
 VAR_4 += VAR_2;

 FUNC_1(VAR_1->dtbd_data + VAR_1->dtbd_oldest, VAR_4,
     VAR_1->dtbd_size - VAR_1->dtbd_oldest);
 VAR_4 += VAR_1->dtbd_size - VAR_1->dtbd_oldest;

 FUNC_1(VAR_1->dtbd_data, VAR_4, VAR_1->dtbd_oldest);

 FUNC_4(VAR_0, VAR_1->dtbd_data);
 VAR_1->dtbd_oldest = 0;
 VAR_1->dtbd_data = VAR_3;
 VAR_1->dtbd_size += VAR_2;

 return (0);
}
