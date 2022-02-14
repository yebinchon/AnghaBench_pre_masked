
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;
 scalar_t__ FUNC_2 (int ,struct resource*,int ,int ,int *,void*,void**) ;
 void* FUNC_3 (void*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7)
{
 struct resource *VAR_8, *VAR_9;
 void *VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);

 VAR_14 = 0;
 VAR_9 = FUNC_0(VAR_7, VAR_5, &VAR_14,
     VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_7, "memory resource allocation failed\n");
  goto fail;
 }
 VAR_11 = FUNC_5(VAR_9);

 VAR_12 = FUNC_3(VAR_11, 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_7, "no ports found!\n");
  goto fail;
 }

 VAR_13 = 0;
 VAR_8 = FUNC_0(VAR_7, VAR_4, &VAR_13,
     VAR_3 | VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_7, "interrupt resource allocation failed\n");
  goto fail;
 }
 if (FUNC_2(VAR_7, VAR_8, VAR_1,
     VAR_6, ((void*)0), VAR_12, &VAR_10) != 0) {
  FUNC_4(VAR_7, "interrupt setup failed\n");
  goto fail;
 }

 return (0);

fail:
 if (VAR_8 != ((void*)0))
  FUNC_1(VAR_7, VAR_4, VAR_13, VAR_8);
 if (VAR_9 != ((void*)0))
  FUNC_1(VAR_7, VAR_5, VAR_14, VAR_9);
 return (VAR_0);
}
