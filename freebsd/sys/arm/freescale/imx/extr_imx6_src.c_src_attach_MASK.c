
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct src_softc {int * mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 struct src_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct src_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct src_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = 0;


 VAR_7 = 0;
 VAR_5->mem_res = FUNC_0(VAR_4, VAR_2, &VAR_7,
     VAR_1);
 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_2(VAR_4, "Cannot allocate memory resources\n");
  VAR_6 = VAR_0;
  goto out;
 }

 VAR_3 = VAR_5;

 VAR_6 = 0;

out:

 if (VAR_6 != 0)
  FUNC_3(VAR_4);

 return (VAR_6);
}
