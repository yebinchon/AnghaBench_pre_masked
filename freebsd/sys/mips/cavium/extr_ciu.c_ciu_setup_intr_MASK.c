
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intr_event {int ie_fullname; } ;
typedef int mips_intrcnt_t ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int) ;
 struct intr_event** VAR_3 ;
 void FUNC_1 (void*) ;
 void FUNC_2 (void*) ;
 int * VAR_4 ;
 int FUNC_3 (void*,int) ;
 struct intr_event** VAR_5 ;
 void FUNC_4 (void*) ;
 void FUNC_5 (void*) ;
 int * VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct intr_event*,int ,int *,int *,void*,int ,int,void**) ;
 int FUNC_8 (struct intr_event**,void*,int ,int,void (*) (void*),void (*) (void*),int *,int (*) (void*,int),char*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct resource*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7, device_t VAR_8, struct resource *VAR_9, int VAR_10,
        driver_filter_t *VAR_11, driver_intr_t *VAR_12, void *VAR_13,
        void **VAR_14)
{
 struct intr_event *VAR_15, **VAR_16;
 void (*VAR_17)(void *);
 void (*VAR_18)(void *);
 int (*VAR_19)(void *, int);
 mips_intrcnt_t VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_22 = FUNC_11(VAR_9);
 if (VAR_22 <= VAR_1) {
  VAR_16 = &VAR_3[VAR_22 - VAR_0];
  VAR_20 = VAR_4[VAR_22 - VAR_0];
  VAR_17 = FUNC_1;
  VAR_18 = FUNC_2;



 } else {
  VAR_16 = &VAR_5[VAR_22 - VAR_2];
  VAR_20 = VAR_6[VAR_22 - VAR_2];
  VAR_17 = FUNC_4;
  VAR_18 = FUNC_5;



 }

 VAR_19 = ((void*)0);


 if ((VAR_15 = *VAR_16) == ((void*)0)) {
  VAR_21 = FUNC_8(VAR_16, (void *)(uintptr_t)VAR_22, 0,
      VAR_22, VAR_17, VAR_18, ((void*)0), VAR_19, "int%d", VAR_22);
  if (VAR_21 != 0)
   return (VAR_21);

  VAR_15 = *VAR_16;

  VAR_18((void *)(uintptr_t)VAR_22);
 }

 FUNC_7(VAR_15, FUNC_6(VAR_8),
     VAR_11, VAR_12, VAR_13, FUNC_9(VAR_10), VAR_10, VAR_14);

 FUNC_10(VAR_20, VAR_15->ie_fullname);

 return (0);
}
