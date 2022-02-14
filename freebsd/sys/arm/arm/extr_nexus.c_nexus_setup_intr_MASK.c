
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,void*,int,int,void**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct resource*,int *,int *,void*,int,void**) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3, struct resource *VAR_4, int VAR_5,
    driver_filter_t *VAR_6, driver_intr_t *VAR_7, void *VAR_8, void **VAR_9)
{

 int VAR_10;


 if ((FUNC_5(VAR_4) & VAR_1) == 0)
  VAR_5 |= VAR_0;




 for (VAR_10 = FUNC_6(VAR_4); VAR_10 <= FUNC_4(VAR_4); VAR_10++) {
  FUNC_0(FUNC_2(VAR_3),
      VAR_6, VAR_7, VAR_8, VAR_10, VAR_5, VAR_9);
  FUNC_1(VAR_10);
 }
 return (0);

}
