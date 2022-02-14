
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct ocotp_softc {int * mem_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 struct ocotp_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int * VAR_3 ;
 struct ocotp_softc* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct ocotp_softc *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_6);
 VAR_7->dev = VAR_6;


 VAR_9 = 0;
 VAR_7->mem_res = FUNC_0(VAR_6, VAR_2, &VAR_9,
     VAR_1);
 if (VAR_7->mem_res == ((void*)0)) {
  FUNC_2(VAR_6, "Cannot allocate memory resources\n");
  VAR_8 = VAR_0;
  goto out;
 }

 VAR_4 = VAR_7;


 if (VAR_3 != ((void*)0))
  FUNC_4((vm_offset_t)VAR_3, VAR_5);

 VAR_8 = 0;

out:
 if (VAR_8 != 0)
  FUNC_3(VAR_6);

 return (VAR_8);
}
