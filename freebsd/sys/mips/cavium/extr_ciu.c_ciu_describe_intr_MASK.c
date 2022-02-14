
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intr_event {int ie_fullname; } ;
typedef int mips_intrcnt_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intr_event** VAR_3 ;
 int * VAR_4 ;
 struct intr_event** VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (struct intr_event*,void*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7, device_t VAR_8, struct resource *VAR_9,
    void *VAR_10, const char *VAR_11)
{
 struct intr_event *VAR_12;
 mips_intrcnt_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_9);
 if (VAR_15 <= VAR_1) {
  VAR_12 = VAR_3[VAR_15 - VAR_0];
  VAR_13 = VAR_4[VAR_15 - VAR_0];
 } else {
  VAR_12 = VAR_5[VAR_15 - VAR_2];
  VAR_13 = VAR_6[VAR_15 - VAR_2];
 }

 VAR_14 = FUNC_0(VAR_12, VAR_10, VAR_11);
 if (VAR_14 != 0)
  return (VAR_14);

 FUNC_1(VAR_13, VAR_12->ie_fullname);

 return (0);
}
