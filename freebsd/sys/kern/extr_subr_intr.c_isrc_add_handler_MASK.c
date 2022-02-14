
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int * isrc_event; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;


 int FUNC_0 (int *,char const*,int ,int ,void*,int ,int,void**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intr_irqsrc*) ;
 int FUNC_3 (struct intr_irqsrc*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct intr_irqsrc *VAR_1, const char *VAR_2,
    driver_filter_t VAR_3, driver_intr_t VAR_4, void *VAR_5,
    enum intr_type VAR_6, void **VAR_7)
{
 int VAR_8;

 if (VAR_1->isrc_event == ((void*)0)) {
  VAR_8 = FUNC_3(VAR_1);
  if (VAR_8)
   return (VAR_8);
 }

 VAR_8 = FUNC_0(VAR_1->isrc_event, VAR_2, VAR_3, VAR_4,
     VAR_5, FUNC_1(VAR_6), VAR_6, VAR_7);
 if (VAR_8 == 0) {
  FUNC_4(&VAR_0);
  FUNC_2(VAR_1);
  FUNC_5(&VAR_0);
 }

 return (VAR_8);
}
