
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int v_page_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_5(void)
{
 u_long VAR_13;
 u_long VAR_14;
 VAR_13 = VAR_8.v_page_count;
 if (VAR_13 <= 32768)
  VAR_7 = VAR_0;

 if (VAR_12 < 1)
  VAR_12 = VAR_4;





 if (VAR_9 == 0) {
  VAR_9 = VAR_13 / VAR_12;
  VAR_9 = VAR_9 * VAR_0 < VAR_9 ?
      VAR_10 : VAR_9 * VAR_0;
  if (VAR_11 > 0 && VAR_9 < VAR_11)
   VAR_9 = VAR_11;
  if (VAR_10 > 0 && VAR_9 >= VAR_10)
   VAR_9 = VAR_10;
 }
 if (VAR_9 == 0)
  FUNC_2("Tune VM_KMEM_SIZE_* for the platform");
 if (VAR_9 / 2 / VAR_0 > VAR_13)
  VAR_9 = 2 * VAR_13 * VAR_0;

 VAR_9 = FUNC_3(VAR_9);



 VAR_14 = VAR_9;

 FUNC_4(VAR_14);
}
